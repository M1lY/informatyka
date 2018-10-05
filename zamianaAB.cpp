#include <iostream>
#include <string>
using namespace std;

int main(){
    string tekst;
    getline(cin, tekst);
    int x = tekst.length();
    for(int i=0; i<x; i++){
        if(tekst[i]=='a') tekst[i]='b';
    }
    cout<<tekst;
    return 0;
}
