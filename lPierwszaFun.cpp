#include <iostream>
#include <cmath>
using namespace std;

bool pierwsza(int n){
    if(n<2) return false;
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0) return false;
    }
    return true;
}
int main()
{
    int n;
    cin>>n;
    if(pierwsza(n)) cout<<"Ta liczba jest pierwsza";
    else cout<<"Ta liczba nie jest pierwsza";
    return 0;
}
