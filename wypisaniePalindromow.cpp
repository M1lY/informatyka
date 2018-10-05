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
    string tekst;
    getline(cin,tekst);
    tekst+=" ";
    int s=tekst.size();
    string wyraz;
    for(int i=0; i<s; i++){
        if(tekst[i]!=' '){
            wyraz+=tekst[i];
        }else if(palindrom(wyraz)){
            cout<<wyraz<<endl;
            wyraz="";
        }else{
            wyraz="";
        }
    }
    return 0;
}
