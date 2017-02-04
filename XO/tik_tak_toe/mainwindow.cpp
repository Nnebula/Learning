 #include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

//start the game



void MainWindow::player()
{

    int a, b;

    while (!win)
    {
//?...: is a function intself
        cout<< "player" << (turn==1 ? "x" :"o")  << "choose a cell";    //I should replce it whith a GUI thing!!and get the occupied coordinates
        cin>> a >> b; //enter the occupied cordinates

        if (checkpossible (a,b))

        {

            if (turn==1)
            {
                content=board.cells[a][b].putX();
            }

                if (turn==2)
            {
                content=board.cells[a][b].putO();
            }

            switch_turn();
        }

        checkWin();

    }

        cout<< "the game is over hahahaha:D";  //change it to GUI!!
}



 bool MainWindow::checkWin(){

 }


 bool MainWindow::checkPossible(int a, int b) // says is it an authorized action
    {
        content=board.cells[a][b].insideCell();

        if(content!=0)
        {
            cout<< "wrong choice!"; //should change it to GUI!
            return false;
        }

        return true;

    }



void mainwindow::switch_turn()
{
    if(turn==1){
        turn=2;
    }

    else
    {
        turn=1;
    }

}
// first move by computer: o at(2,2)
//second move by player: x
//to ceck where is the first x move to put second o:
void play()
{

}








