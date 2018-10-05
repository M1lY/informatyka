#include <iostream>
using namespace std;
bool palindrom(string wyraz){
    int d=wyraz.size();
    int l=0, r=d-1;
    while(l<r){
        if(wyraz[l]!=wyraz[r]) return false;
        l++;
        r--;
    }
    return true;
}
int main(){
    string liczba;
    cin>>liczba;
    if(palindrom(liczba)) cout<<"Ta liczba jest palindormem";
    else cout<<"Ta liczba ne jest palindromem";
    return 0;
}
