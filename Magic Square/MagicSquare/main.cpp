#include <QtCore/QCoreApplication>
#include<iostream>

int square[3];
int numbers[9];


void play(int, int);
int check_sum();

using namespace std;

int main(int argc, char *argv[])
{
    //QCoreApplication a(argc, argv);

    for(int k=0;k<9;k++)
    {
        numbers[k]=k+1;
    }

    play(2,0);

    return 0;
    //return a.exec();
}

void play(int n, int j)
{

  for(int i=j;i<9;i++)
    {
      square[2-n]=numbers[i];

      if (n!=0)
      {
          play(n-1,i+1);
      }

      else
      {
         check_sum();

         if (check_sum()==15)
         {
             cout<<square[0]<<"+"<<square[1]<<"+"<<square[2]<<"=15"<<endl;

         }
      }
  }

}


int check_sum()
{
   int sum=0;

   for (int i=0;i<3;i++)
   {
       sum=sum+square[i];
   }

   return sum;
}
