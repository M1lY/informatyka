#include<iostream>
using namespace std;
int main(){
    int n,s=0;
    cin>>n;
    for(int i=1; i<=n/2 ; i++){
        if(n%i==0) s+=i;
    }
    if(s==n) cout<<"Ta liczba jest doskonala";
    else cout<<"Ta liczba nie jest doskonala";
    return 0;
}