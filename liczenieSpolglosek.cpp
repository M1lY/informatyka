#include <iostream>
using namespace std;

int main(){
    int s=0;
    string spolgloski = "bcdfghjklmnprstwyz";
    string tekst;
    getline(cin,tekst);
    int x=tekst.size();
    int d=spolgloski.size();
    for(int i=0; i<x; i++){
        for(int j=0; j<d; j++){
            if(spolgloski[j]==tekst[i]) s++;
        }
    }
    cout<<"Spolgloski: "<<s;
    return 0;
}
