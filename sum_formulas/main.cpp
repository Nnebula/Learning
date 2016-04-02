#include <iostream>
#include <fstream>
#include <cmath>

void calculation(double, double, double, int, int, int, int);


using namespace std;

int main()
{

   double df;
   int a1,b1,a2,b2,n1,n2;




   cout <<"enter the df steps: ";
   cin >> df;

   cout<< "the formula is in the form of a/b*(x^n),n can be 1 or 2" <<endl;
   cout<< "enter the values for a1, b1, n1, a2, b2, n2"<< endl;
   cout << "a1=  ";
   cin >> a1;

   cout << "b1=  ";
   cin >> b1;

   cout << "n1=  ";
   cin >> n1;


   cout << "a2=  ";
   cin >> a2;

   cout << "b2=  ";
   cin >> b2;

   cout << "n2=  ";
   cin >> n2;


   calculation(df,n1,n2,a1,b1,a2,b2);

   return 0;

}


void calculation(double e, double m1, double m2, int a, int b, int c,int d)
{
    string fileName;
    ofstream myFile;

    double x1,x2;
    double f=0;

    cout << "enter file name: ";
    cin >> fileName;
    myFile.open(("/Users/Naanaa/Desktop/sum_formulas/formulas/"+ fileName + ".csv").c_str());

    myFile<< "y1="<<a<<"/"<<"("<< b<<"x^"<<m1<<")"<< endl;
    myFile<< "y2="<<c<<"/"<<"("<< d<<"x^"<<m2<<")"<<endl;

    while(f<=30)
    {
        f=f+e;
        if(m1==1)
        {
           x1=a/(b*f);
        }

        if(m1==2)
        {
            x1=sqrt(a/(b*f));
        }
        if(m2==1)
        {
          x2=c/(d*f);
        }
        if(m2==2)
        {
            x2=sqrt(c/(d*f));
        }

        myFile<< x1<< x1+x2 << ","<< f <<endl;


    }

    myFile.close();
}
