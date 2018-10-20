#include <iostream>
#include <cmath>
using namespace std;

int main(){
    string a;
    int n;
    cout<<"Liczba w systemie dziesietnym: ";
    cin>>n;
    cout<<"Podaj podstawe systemu liczbowego systemu na ktory chcesz zamienic podana liczbe: ";
    int p;
    cin>>p;

    int i=0;
    while(n>0){
        a[i]=n%p;
        n/=p;
        i++;
    }
    i--;
    cout<<"Liczba w systemie"<<p<<": ";
    while(i>=0){
        if(int(a[i]<10)) cout<<int(a[i]);
        else{
            char k=a[i];
            cout<<char('A'+k-10);
        }
        i--;
    }
    return 0;
}