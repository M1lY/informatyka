#include <iostream>
using namespace std;

bool dokonala(int n){
    int s=0;
    for(int i=1; i<=n/2 ; i++){
        if(n%i==0) s+=i;
    }
    if(s==n) return true;
    else return false;
}
int main(){
    int n;
    cin>>n;
    if(dokonala(n)) cout<<"Ta liczba jest dokonala";
    else cout<<"Ta liczba nie jest dokonala";
    return 0;
}
