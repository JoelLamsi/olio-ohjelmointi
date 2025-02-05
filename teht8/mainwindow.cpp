#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTimer>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
    ui(new Ui::MainWindow),
    pQTimer(new QTimer(this))
{
    ui->setupUi(this);

    ui->progressBar_player1->setValue(0);
    ui->progressBar_player2->setValue(0);
    ui->pushButton_player1Switch->setEnabled(false);
    ui->pushButton_player2Switch->setEnabled(false);
    ui->pushButton_gameStop->setEnabled(false);

    connect(ui->pushButton_timer120sec, &QPushButton::clicked, this, &MainWindow::setTimer120sec);
    connect(ui->pushButton_timer5min, &QPushButton::clicked, this, &MainWindow::setTimer5min);
    connect(ui->pushButton_gameStart, &QPushButton::clicked, this, &MainWindow::gameStartClicked);
    connect(ui->pushButton_gameStop, &QPushButton::clicked, this, &MainWindow::gameStopClicked);
    connect(ui->pushButton_player1Switch, &QPushButton::clicked, this, &MainWindow::switchPlayer);
    connect(ui->pushButton_player2Switch, &QPushButton::clicked, this, &MainWindow::switchPlayer);
    connect(pQTimer, &QTimer::timeout, this, &MainWindow::timeout);

    setGameInfoText("Select playtime and start the game", 12);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setGameInfoText(QString text, short fontSize)
{
    ui->label_gameState->setText(text);
    ui->label_gameState->setFont(QFont("Segoe UI", fontSize));
    ui->label_gameState->setAlignment(Qt::AlignCenter);
}

void MainWindow::setTimer120sec()
{
    gameTime = 120;
    player1Time = player2Time = gameTime;
    updateProgressBar();
}

void MainWindow::setTimer5min()
{
    gameTime = 300;
    player1Time = player2Time = gameTime;
    updateProgressBar();
}

void MainWindow::gameStartClicked()
{
    if (gameTime == 0) {
        setGameInfoText("Please select a game time to begin", 12);
        return;
    }

    setGameInfoText("Game ongoing", 12);
    ui->pushButton_gameStart->setEnabled(false);
    ui->pushButton_gameStop->setEnabled(true);
    ui->pushButton_player1Switch->setEnabled(true);

    currentPlayer = 1;
    pQTimer->start(1000);
}

void MainWindow::gameStopClicked()
{
    setGameInfoText("Game stopped", 12);
    ui->pushButton_gameStart->setEnabled(true);
    ui->pushButton_gameStop->setEnabled(false);
}

void MainWindow::switchPlayer()
{
    if (currentPlayer == 1) {
        currentPlayer = 2;
        ui->pushButton_player1Switch->setEnabled(false);
        ui->pushButton_player2Switch->setEnabled(true);
    } else if (currentPlayer == 2) {
        currentPlayer = 1;
        ui->pushButton_player1Switch->setEnabled(true);
        ui->pushButton_player2Switch->setEnabled(false);
    }
}

void MainWindow::updateProgressBar()
{
    ui->progressBar_player1->setValue((player1Time * 100) / gameTime);
    ui->progressBar_player2->setValue((player2Time * 100) / gameTime);
}

void MainWindow::timeout()
{
    if (currentPlayer == 1) {
        if (--player1Time == 0) {
            pQTimer->stop();
            setGameInfoText("Player 1 ran out of time!", 12);
            return;
        }
    } else {
        if (--player2Time == 0) {
            pQTimer->stop();
            setGameInfoText("Player 2 ran out of time!", 12);
            return;
        }
    }
    updateProgressBar();
}
