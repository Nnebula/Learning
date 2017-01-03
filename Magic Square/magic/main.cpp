#include <QtCore/QCoreApplication>
#include<iostream>

const int D=3;

int square[D*D];
int numbers[D*D];


void play(int);
bool check_sum();
void print();


using namespace std;

int main()
{

    for(int k=0;k<D*D;k++)
    {
        numbers[k]=k+1;
    }

    play(0);

    return 0;

}

void play(int n)
{


    for(int i=0;i<D*D;i++)
    {
        bool repeat=false;
        square[n]=numbers[i];

        for(int j=0;j<n;j++)
        {
            if (square[n]==square[j])
            {
                repeat=true;
            }

            if(repeat)
            {
                 break;
            }
        }

        if(repeat)
        {
            continue;
        }

        if(n!=D*D-1)
        {
            play(n+1);
        }
        else
        {
            if (check_sum())
            {
               print();
            }
        }
    }
}

bool check_sum()
{
    for(int j=0;j<D;j++)
    {
        int sum_row=0;
        int sum_column=0;

        for(int i=0;i<D;i++)
        {
           sum_row=sum_row+square[i+(D*j)];
           sum_column=sum_column+square[i*D+j];

        }


        if((sum_row!=D*(D*D+1)/2)||(sum_column!=D*(D*D+1)/2))
        {
            return false;
        }
    }
    return true;
}


void print()
{
    for(int i=0;i<D;i++)
    {
        for(int j=0;j<D;j++)
        {
            cout<<square[i+D*j]<<"|";
        }
        cout<<endl;
        if (i<D-1) {
            cout<<"------";
        }
        cout << endl;
    }
}







