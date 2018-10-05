#include <iostream>
using namespace std;

int main(){
    int s=0;
    string tekst;
    getline(cin,tekst);
    int x=tekst.size();
    for(int i=0; i<x; i++){
        switch(tekst[i]){
            case '*': s++; break;
            case '%': s++; break;
            case 'x': s++; break;
        }
    }
    cout<<"Znaki: "<<s;
    return 0;
}
