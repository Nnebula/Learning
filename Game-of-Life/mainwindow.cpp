#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QObject::connect(&timer, SIGNAL(timeout()), ui->pushButton_step, SLOT(click()));

    QGraphicsScene *scene = new QGraphicsScene(this);
    QRectF worldSize = world.boundingRect();
    ui->graphicsView->resize(qMin(worldSize.width()+2, 500.0), qMin(worldSize.height()+2, 500.0));
    scene->setSceneRect(world.boundingRect());
    scene->setItemIndexMethod(QGraphicsScene::NoIndex);
    scene->addItem(&world);

    ui->graphicsView->setScene(scene);
    //
   world.cells[3][4].giveLife();
   world.cells[4][3].giveLife();
   world.cells[3][5].giveLife();
   world.cells[3][6].giveLife();
   world.cells[4][5].giveLife();


    // update before here
    world.redraw();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_run_toggled(bool checked)
{
    if (checked)
    {
        timer.start(50); // every second
    }
    else
    {
        timer.stop();
    }
}

void MainWindow::on_pushButton_step_clicked()
{
    bool exist;
    int countNeighbor;
    bool neighbor;
    // update after here
    for(int i=1;i<worldWidth-1; i++) {
        for(int j=1;j<worldHeight-1; j++) {

            exist=world.cells[i][j].isAlive();
            countNeighbor=0;

            for(int k=-1;k<2;k++){
                for(int l=-1;l<2;l++){
                    neighbor=world.cells[i+k][j+l].isAlive();

                    if (neighbor){
                        countNeighbor=countNeighbor+1;
                    }

                }

            }


            if(exist){
                if(countNeighbor<3||countNeighbor>4){
                    world.cells[i][j].death();
                }

            } else {
                if(countNeighbor==3){
                    world.cells[i][j].birth();
                }
            }
        }
    }

    for(int i=1;i<worldWidth-1; i++) {
        for(int j=1;j<worldHeight-1; j++){
            world.cells[i][j].age();
        }
    }

    // update before here
    world.redraw();
}










