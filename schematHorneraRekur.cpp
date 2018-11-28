#include <iostream>
using namespace std;

float horner(int n, float tab[], float x){
    if(n==0) return tab[0];
    return x*horner(n-1,tab,x)+tab[n];
}

int main(){
    int n;
    float x;
    cout<<"Podstawa wielomianu=";
    cin>>x;
    cout<<"Stopien wielomianu=";
    cin>>n;
    float tab[n+1];
    for(int i=0; i<=n; i++){
        cout<<"tab["<<i<<"]=";
        cin>>tab[i];
    }
    cout<<horner(n,tab,x);
    return 0;
}
