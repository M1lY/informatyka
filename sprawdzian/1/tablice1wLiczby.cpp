#include <iostream>
#include <time.h>
#include <cstdlib>
#include <iomanip>
#include <cmath>
using namespace std;

const int n=10;

int sumaCyfr(int n){
    int s=0;
    while(n>0){
        s+=n%10;
        n/=10;
    }
    return s;
}

bool lPierwsza(int n){
    if(n<2) return false;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return false;
    }
    return true;
}

bool lDoskonala(int n){
    int s=0;
    for(int i=1;i<=n/2;i++){
        if(n%i==0) s+=i;
    }
    if(s==n) return true;
    return false;
}

int main(){
    srand(time(NULL));
    int tab[n];
    for(int i=0;i<n;i++){
        tab[i]=rand()%100;
    }
    
    cout<<"tablica:";
    for(int i=0;i<n;i++){
        cout<<setw(3)<<tab[i];
    }

    int s=0;
    for(int i=0;i<n;i++){
        if(lPierwsza(tab[i])) s+=tab[i];
    }
    cout<<endl<<"suma liczb pierwszych: "<<s<<endl;

    cout<<"suma cyfr jest liczba pierwsza:";
    for(int i=0;i<n;i++){
        if(lPierwsza(sumaCyfr(tab[i]))) cout<<setw(3)<<tab[i];
    }
    cout<<endl;

    cout<<"suma cyfr jest liczba doskonala:";
    for(int i=0;i<n;i++){
        if(lDoskonala(sumaCyfr(tab[i]))) cout<<setw(3)<<tab[i];
    }
    return 0;
}
