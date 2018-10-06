#include <iostream>
using namespace std;

bool palindrom(int tab[], int d){
    int l=0, r=d-1;
    while(l<r){
        if(tab[l]!=tab[r]) return false;
        l++;
        r--;
    }
    return true;
}

int main(){
    int liczba;
    int d=0;
    cin>>liczba;
    if(liczba==0){
        cout<<"Ta liczba jest palindromem";
        return 0;
    }

    int x=liczba;
    while(x>0){
        x/=10;
        d++;
    }
    int tab[d];

    x=liczba;
    for(int i=0; x>0; i++){
        tab[i]=x%10;
        x/=10;
    }
    
    if(palindrom(tab,d)) cout<<"Ta liczba jest palindromem";
    else cout<<"Ta liczba nie jest palindromem";

    return 0;
}
