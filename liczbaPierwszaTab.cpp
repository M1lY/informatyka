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

int main(){
    int a[10];
    for(int i=0;i<10;i++){
        cout<<"Podaj a["<<i<<"]=";
        cin>>a[i];
    }
    for(int i=0;i<10;i++){
        if(pierwsza(a[i])) cout<<a[i]<<endl;
    }
    return 0;
}