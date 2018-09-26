#include <iostream>
#include <cmath>
using namespace std;

bool parzysta(int n){
    if(n%2==0) return true;
    return false;
}

int main(){
    int a[10];
    for(int i=0;i<10;i++){
        cout<<"Podaj a["<<i<<"]=";
        cin>>a[i];
    }
    for(int i=0;i<10;i++){
        if(parzysta(a[i])) cout<<a[i]<<endl;
    }
    return 0;
}