#include <QtCore/QCoreApplication>
#include<iostream>

int const D=9;

int square[D];
int numbers[D];


void play(int);
int check_sum1();
int check_sum2();
int check_sum3();
int check_sum4();
int check_sum5();
int check_sum6();

using namespace std;

int main(int argc, char *argv[])
{
    //QCoreApplication a(argc, argv);

    for(int k=0;k<D;k++)
    {
        numbers[k]=k+1;
    }

    play(0);

    return 0;
    //return a.exec();
}

void play(int n)
{
    bool repeat=false;

    for(int i=0;i<D;i++)
    {
        square[n]=numbers[i];


        if (n!=D-1)
        {
            for (int j=0;j<n;j++)
            {
                if (square[n]==square[j+1])
                {
                    repeat=true;
                    break;
                }
            }

            if(!repeat)
            {
cout<< "n is"<<n<<endl;
                play(n+1);
            }

        }

       // else
        //{

            if ((check_sum1()==15) && (check_sum2()==15) )//&& (check_sum3()==15))// && (check_sum4()==15) && (check_sum5()==15) && (check_sum6()==15))
            {
                cout<< "helloooo"<<n<< endl;

                cout<<"first row"<<square[0]<<"+"<<square[1]<<"+"<<square[2]<<"=15"<<endl;
                cout<<"second row"<<square[3]<<"+"<<square[4]<<"+"<<square[5]<<"=15"<<endl;
                cout<<"third row"<<square[6]<<"+"<<square[7]<<"+"<<square[8]<<"=15"<<endl<<endl<<endl;

              }

       // }


        else
            continue;
    }
}















///////
int check_sum1()
{
    int sum1=0;


    for (int i=0;i<3;i++)
    {
        sum1=sum1+square[i];
    }


    return sum1;
}
///////
int check_sum2()
{
    int sum2=0;


    for (int i=2;i<6;i++)
    {
        sum2=sum2+square[i];
    }


    return sum2;
}
///////
int check_sum3()
{
    int sum3=0;


    for (int i=6;i<9;i++)
    {
        sum3=sum3+square[i];
    }


    return sum3;
}

///////
int check_sum4()
{
    int sum4=0;


    for (int i=0;i<3;i+2)
    {
        sum4=sum4+square[i];
    }


    return sum4;
}

///////

int check_sum5()
{
    int sum5=0;


    for (int i=1;i<4;i+2)
    {
        sum5=sum5+square[i];
    }


    return sum5;
}
//////
int check_sum6()
{
    int sum6=0;


    for (int i=2;i<9;i+3)
    {
        sum6=sum6+square[i];
    }


    return sum6;
}

