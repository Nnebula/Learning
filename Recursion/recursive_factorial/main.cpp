#include <QtCore/QCoreApplication>
#include <iostream>

int f(int);

using namespace std;

int main(int argc, char *argv[])
{
    int n;

    cout << "enter a number:";
    cin>> n;

    f(n);

    cout<< "factorial is:"<<f(n);


    return 0;
}

int f(int n)
{
    return n==1 ?1: n*f(n-1);
}
