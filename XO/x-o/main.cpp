//#include <QtCore/QCoreApplication>
#include <iostream>
#include <cmath>

int cell[9];
void make_board;
void player_play();
int select_best_move(int);
bool check_win(int);

int player; //player 1=X (human),  player -1=O (computer)

using namespace std;

int main()
{


    player=1;

    make_board;

    if (player==1)
    {
        player_play();
        player=-1;
    }

    if(player==-1)
    {
        select_best_move();
        player=1;
    }




    return 0;
}



//initializes the board

void make_board()
{
    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            cout<< "   "
        }
    }
}


//asks the player to play and puts X in the cell

void player_play()
{
    int i,j;
    cout<< "Choose an ampty cell (entre the cell coordinates i,j):  " <<endl;
    cout << "i: ";
    cin >> i;
    cout << "j: ";
    cin >> j;

    cell[(j-1)+3*(i-1)]=1;
}

//computer plays

int select_best_move()
{
    int best_location;
    int max=-100;

    int count, win, lose;

    for(int i;i<9; i++)
    {
        cell[i]=player;
        if (check_win(player))
        {
            best_location=i;
           return best_location;
        }

        value=goodness(player);
        cell[i]=0;

        if (value>max)
        {
            max=value;
            best_location=i;
        }
    }

    return best_location;

}


int goodness(int counter, int win, int lose)
{

   for(int j=0;j<9;j++)
   {
      if(cell[j]==0)
       {
          cell[j]=-player;

          if(check_win(-player))
           {
              return -150;
           }

          value=-goodness(-player);
          cell[j]=0;
          if (value>max)
          {
              max=value;
          }

      }
      return max;
   }

}


bool check_win(int)

{
    int sum1=0;
    int sum2=0;

    for (int i=0; i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
          sum1=sum1+cell[j+3*i];
          sum2=sum2+cell[i+3*j];
        }

        if(sum1==2*player|| sum2==2*player)
        {
            return true;
        }

        sum1=0;
        sum2=0;

    }

    if((cell[0]+cell[4]+cell[8]==2*player) || (cell[0]+cell[4]+cell[6]==2*player))
    {
        return true;
    }
}



