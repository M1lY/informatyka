#include <iostream>
using namespace std;

int main(){
    string tekst;
    getline(cin,tekst);
    for(int i=0; tekst[i]!='.'; i++){
        if(tekst[i]==' ') cout<<endl;
        else cout<<tekst[i];
    }
    return 0;
}