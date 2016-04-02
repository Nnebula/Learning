#include <QtCore/QCoreApplication>
#include <iostream>

void f(int , int);
int check_sum();
int number[10];
int row[4];
//int sumi;

using namespace std;

int main(int argc, char *argv[])
{
    for (int i=0;i<3;i++)
    {
        number[i]=i+1;
    }

    //sumi=0;

    f(3,0);

return 0;
}


//recursive function:

void f(int n, int j)
{

    for(int i=j;i<=10;i++)
    {
        row[3-n]=number[i];
        //sumi=sumi+number[j];

        if(n>0)
        {

           // if (sumi<12)
           // {

                f(n-1,j);
           // }

        }

        else
        {
            if(check_sum()==12)
            {
                cout<< row[0]<<"+"<<row[1]<<"+"<<row[2]<<"+"<<row[3]<<"<=12"<<endl;
                //exit(0);

            }
        }
       // sumi=sumi-number[j];
    }
}

//calculate sum of rows:

int check_sum()
{
    int sum=0;

    for(int i=0;i<4;i++)
    {
        sum=sum+row[i];
    }

    return sum;
}




