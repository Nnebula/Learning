#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    int n;
    int ans;

    cout <<"enter the number of mc nuggets you want:";
    cin >> n;

    for(int i=0;i<=(n/20);i++)
    {
        for(int j=0;j<=(n/9);j++)
        {
            for( int k=0; k<=(n/6); k++)
            {
                ans=i*20+j*9+k*6;
                if(ans==n)
                {
                    cout<< "pack of 20: "<< i<<endl;
                    cout << "pack of 9: " << j <<endl;
                    cout << "pack of 6: "<< k << endl;

                    cout<< "--------------------" << endl;
                    break;
                }
            }
        }
    }

    cout<< "no combination possible!";



    return 0;
}
