#include<iostream>
#include<cmath>
#include<iomanip>
#include<cstdlib>
#include<time.h>
using namespace std;
const int n=15;
bool pierwsza(int n)
{
    if(n<2)return false;
    else
        for(int i=2;i<=sqrt(n);i++)
        if(n%i==0)return false;
    return true;
    
}
int main()
{
    int a[n];
    srand(time(NULL));
    for(int i=0;i<n;i++) a[i]=rand()%100;
    
    cout<<"\nLiczby: ";
    for(int i=0;i<n;i++) cout<<setw(5)<<a[i];

    cout<<"\nPierwsze:";
    for(int i=0;i<n;i++) if(pierwsza(a[i]))cout<<setw(5)<<a[i];
    return 0;
}