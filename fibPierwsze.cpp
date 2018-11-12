#include <iostream>
#include <cmath>
using namespace std;

bool lPierwsza(int n){
    if(n<2) return false;
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0) return false;
    }
    return true;
}
int fib(int n){
    int fib=1;
    if((n==1)||(n==2)) return fib;
    int k=1;
    int j=1;
    for(int i=3;i<=n;i++){
        fib=k+j;
        k=j;
        j=fib;
    }
    return fib;
}
int main(){
    int i=1;
    while(fib(i)<100){
        if(lPierwsza(fib(i))) cout<<i<<": "<<fib(i)<<endl;
        i++;
    }
    return 0;
}
