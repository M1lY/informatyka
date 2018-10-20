#include <iostream>
#include <cmath>
using namespace std;

int main(){
    string a;
    int n;
    int s=0;
    cout<<"Liczba w systemie dziesietnym: ";
    cin>>n;
    
    int i=0;
    while(n>0){
        a[i]=n%16;
        n/=16;
        i++;
    }
    i--;
    cout<<"Liczba w systemie hexadecymalnym: ";
    while(i>=0){
        if(int(a[i]<10)) cout<<int(a[i]);
        else{
            char k=a[i];
            cout<<char('A'+k-10);
            s++;
        }
        i--;
    }
    cout<<endl<<"Ilosc liter w liczbie w systemie hexadecymalnym: "<<s;
    return 0;
}