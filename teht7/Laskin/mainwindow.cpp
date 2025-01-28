#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QList<QPushButton*> digitButtons =
    {
        ui->pushButton_n0, ui->pushButton_n1, ui->pushButton_n2, ui->pushButton_n3,
        ui->pushButton_n4, ui->pushButton_n5, ui->pushButton_n6, ui->pushButton_n7,
        ui->pushButton_n8, ui->pushButton_n9
    };

    for (QPushButton *button : digitButtons)
    {
        connect(button, &QPushButton::clicked, this, &MainWindow::digitClicked);
    }

    QList<QPushButton*> operationButtons =
    {
        ui->pushButton_add, ui->pushButton_sub, ui->pushButton_mul, ui->pushButton_div
    };

    for (QPushButton *button : operationButtons)
    {
        connect(button, &QPushButton::clicked, this, &MainWindow::operationClicked);
    }

    connect(ui->pushButton_enter, &QPushButton::clicked, this, &MainWindow::enterClicked);
    connect(ui->pushButton_clear, &QPushButton::clicked, this, &MainWindow::clearClicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::digitClicked()
{
    QPushButton *clickedButton = qobject_cast<QPushButton*>(sender());

    if (!clickedButton) return;

    QString digit = clickedButton->text();

    if (editingNumber1)
    {
        ui->lineEdit_num1->setText(ui->lineEdit_num1->text() + digit);
    } else {
        ui->lineEdit_num2->setText(ui->lineEdit_num2->text() + digit);
    }
}

void MainWindow::operationClicked()
{
    QPushButton *clickedButton = qobject_cast<QPushButton*>(sender());

    if (!clickedButton) return;
    currentOperation = clickedButton->text();
    editingNumber1 = false;
}

void MainWindow::enterClicked()
{
    if (editingNumber1)
    {
        editingNumber1 = false;
    } else {
        bool ok1, ok2;
        double num1 = ui->lineEdit_num1->text().toDouble(&ok1);
        double num2 = ui->lineEdit_num2->text().toDouble(&ok2);
        double result = 0;

        if (ok1 && ok2) {
            if (currentOperation == "+") {
                result = num1 + num2;
            } else if (currentOperation == "-") {
                result = num1 - num2;
            } else if (currentOperation == "*") {
                result = num1 * num2;
            } else if (currentOperation == "/") {
                if (num2 != 0) {
                    result = num1 / num2;
                } else {
                    ui->lineEdit_result->setText("NaN");
                    return;
                }
            }
            ui->lineEdit_result->setText(QString::number(result));
        } else {
            ui->lineEdit_result->setText("Virhe");
        }
        ui->lineEdit_num1->clear();
        ui->lineEdit_num2->clear();
        currentOperation = "+";
        editingNumber1 = true;
    }
}

void MainWindow::clearClicked()
{
    ui->lineEdit_num1->clear();
    ui->lineEdit_num2->clear();
    ui->lineEdit_result->clear();
    editingNumber1 = true;
}
