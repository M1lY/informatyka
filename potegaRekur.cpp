#include <iostream>
using namespace std;

int potegaRekur(int n, int x){
    if(x==0) return 1;
    return n*potegaRekur(n, x-1);
}

int main(){
    int n,x;
    do{
        cout<<"Podstawa potegi=";
        cin>>n;
        cout<<"Wykladnik potegi=";
        cin>>x;
    }while(n==0&&x==0);
    cout<<potegaRekur(n, x);
    return 0;
}
