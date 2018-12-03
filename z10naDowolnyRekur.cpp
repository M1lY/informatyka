#include <iostream>
using namespace std;

void z10naDowolnyRekur(int n, int p){
    if(n>0){
        z10naDowolnyRekur(n/p, p);
        if(n%p>=10) cout<<char(n%p+'7');
        else cout<<n%p;
    }
}
int main(){
    int n,p;
    cout<<"Liczba do zamiany=";
    cin>>n;
    cout<<"Podstawa systemu na ktory chcesz zaminic liczbe=";
    cin>>p;
    z10naDowolnyRekur(n,p);
    return 0;
}
