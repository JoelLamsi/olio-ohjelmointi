#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void setTimer120sec();
    void setTimer5min();
    void gameStartClicked();
    void gameStopClicked();
    void updateProgressBar();
    void switchPlayer();
    void timeout();
private:
    Ui::MainWindow *ui;
    QTimer *pQTimer;
    short currentPlayer = 1, gameTime = 0, player1Time, player2Time;
    void setGameInfoText(QString, short);
};
#endif // MAINWINDOW_H
