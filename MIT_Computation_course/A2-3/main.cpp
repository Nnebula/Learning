#include <iostream>
#include<cmath>

bool check_answer_exist(int);

int check_max(int);

using namespace std;

int main()
{
    int value;

    int n=20;

    value=check_max(n);

    cout << "the maximum n is:"<< value << endl;

    return 0;
}




int check_max(int m)
{
    int sum=0;

    while(true)
    {

        for(int i=m;i<=m+5; i++)
            {

                if (!check_answer_exist(i))

                {
                    m=m +1;
                    break;

                }

                sum=sum+1;

            }

            if(sum==6)
            {
                return m-1;
            }

        else
            sum=0;
    }


}



bool check_answer_exist(int n)
{

    int ans;

    for(int i=0;i<=(n/20);i++)
    {
        for(int j=0;j<=(n/9);j++)
        {
            for( int k=0; k<=(n/6); k++)
            {
                ans=i*20+j*9+k*6;

                if(ans==n)
                {

                    return true;
                }
            }
        }
    }

    return false;
}
