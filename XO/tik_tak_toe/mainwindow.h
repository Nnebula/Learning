#ifndef MAINWINDOW_H
#define MAINWINDOW_H



#include <QMainWindow>
#include "gameboard.h"


namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void player(); //and start with x
    void checkBoard(); //checks the action
    bool checkPossible(int a,int b); //is it authorized action?
    bool checkWin(); //any winner?
    void switch_turn(); //switches the turn
    void play();//determine where should the next move be by computer

private:
    Ui::MainWindow *ui;

    GameBoard board; //creates object of type GameBoard in class of mainwindow.
    int turn; // whose turn is it?
    int content; //says what is inside the cell
    bool win; //if one wins it is true

};

#endif // MAINWINDOW_H
