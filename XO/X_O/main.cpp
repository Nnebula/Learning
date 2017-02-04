#include <iostream>


int cell[9];
int value[9];

int play(int);
void predict_value_cell(int, int, int, int, int);
bool check_win(int);


using namespace std;

int main()
{
   int player;
   int play_cell;
   player=1;

   while(!check_win(player))
   {
       play_cell=play(player);

       cell[play_cell]=player;

       player=-player;

   }

   cout << "congratulations player " << palyer<< "      you WON!!!";

   return 0;
}


//play according whose turn it is:

int play(int player)
{
    if(player==-1)
    {
        cout<< "put O in a cell (enter i and j positions):  ";
        cin>> i>> j;

        return (3*(i-1)+(j-1));
    }


    int choice;

    else
    {
        for(int k=0;k<9;k++)
        {
           int winCount=0;
           int loseCount=0;
           int count1;
           int count_1;

           if(cell[k]==0)
            {
               cell[k]=player;

               if(check_win(player))
               {
                   return k;
               }

               value=predict_value_cell(player,winCount,loseCount,count1,count_1);

               cell[k]=0;

           }

           if(winCount-loseCount >max)
           {
               max=winCount-loseCount;
               choice=k;
           }
        }

        player=-player;
        return choice;
    }
}


//checks if any of the players win

bool check_win(int player)
{
    int sum1=0;
    int sum2=0;
    int sum3=0;
    int sum4=0;

    for(int i=0;i<3;i++)
    {
       for(int j=0;j<3;j++)
       {
           sum1=sum1+cell[i+3*j];
           sum2=sum2+cell[3*i+j];
       }
    }

    if(sum1==3*player || sum2==3*player)
    {
        return true;
    }

    for(int k=0;k<3;k++)
    {
        sum3=sum3+cell[k*4];
        sum4=sum4+cell[2*(k+1)];
    }

    if(sum3==3*player || sum4==3*player)
    {
        return true;
    }

    else
    {
        return false;
    }

}


//chooses the best place for the computer to play:

float predict_value_cell(int player,int winCount,int loseCount, int count1, int count_1)
{
    if(-player==-1)
    {
       count1=count1+1;
    }

    if(-player==1)
    {
        count_1=count_1+1;
    }

    if (check_win(-player))
    {
        if(-player==1)
        {
            loseCount=loseCount+1;
            return -loseCount;
        }

        if(player==-1)
        {
            winCount=winCount+1;
            return winCount;
        }

    }

    double value=0;
    double oldValue=0;

    for(int i=0; i<9; i++)
    {
       if (cell[i]==0)
        {
           oldValue=value;
           cell[i]=-player;

           value= predict_value_cell(-player,winCount,loseCount, count1,count_1);

           cell[i]=0;
           value=value/count+oldValue;

       }
       else
       {
           return 0;
       }
    }
}
