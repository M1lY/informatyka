#include <iostream>
using namespace std;

int main(){
    string imie;
    cout<<"Podaj imie: ";
    cin>>imie;
    if(imie[imie.length()-1]=='a') cout<<"To imie zenskie";
    else cout<<"To imie meskie";
    return 0;
}
