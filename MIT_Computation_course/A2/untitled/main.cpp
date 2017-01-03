#include <iostream>
#include<cmath>

bool check_answer_exist(int);
int check_max(int);

using namespace std;

int main()
{
    int value;

    int n=0;

   value=check_max(n);


cout << "the maximum n is:"<< check_max(n);

    return 0;
}




int check_max(int n)
{
int max=0;
while(max<5){

for(int i=n;i<=n+5; n++)
{

    if (!check_answer_exist(n))

    {
        n=n+1;
        break;

    }

    else
        max=max+1;

    if (max==5)
    {
        cout<<"max is: "<< max<< endl;
        cout<< "i is:  "<< i<< endl;
        return n;
    }

}
max=0;
}
}



bool check_answer_exist(int n)
{

    bool ans=false;

    for(int i=0;i<=(n/20);i++)
    {
        for(int j=0;j<=(n/9);j++)
        {
            for( int k=0; k<=(n/6); k++)
            {
                ans=i*20+j*9+k*6;

                if(ans==n)
                {
                    ans=true;

                    return ans;
                }
            }
        }
    }
}
