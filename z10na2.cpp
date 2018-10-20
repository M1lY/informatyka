#include <iostream>
#include <cmath>
using namespace std;

bool lPierwsza(int n){
    if(n<2) return false;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return false;
    }
    return true;
}
int main(){
    string a;
    int n;
    int s=0;
    cout<<"Liczba w systemie dziesietnym: ";
    cin>>n;
    
    int i=0;
    while(n>0){
        a[i]=n%2;
        n/=2;
        i++;
    }
    i--;
    cout<<"Liczba w systemie binarnym: ";
    while(i>=0){
        cout<<int(a[i]);
        s+=int(a[i]);
        i--;
    }
    cout<<endl;
    if(lPierwsza(s)) cout<<"Suma cyfr tej liczby w systemie binarnym jest liczba pierwsza";
    else cout<<"Suma cyfr tej liczby w systemie binarnym nie jest liczba pierwsza";
    return 0;
}
