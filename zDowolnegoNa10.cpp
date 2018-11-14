#include <iostream>
using namespace std;

int dec(string n, int x){
    int d=n.size();
    int y;
    if(int(n[0]-'7')<10) y=int(n[0]-'0');
    else y=int(n[0]-'7');
    for(int i=1;i<d;i++){
        if(int(n[0]-'7')<10) y=y*x+int(n[i]-'0');
        else y=y*x+int(n[i]-'7');
    }
    return y;
}

int main(){
    int x;
    string n;
    cout<<"Podstawa systemu z ktorego chcemy zamieniac=";
    cin>>x;
    cout<<"Liczba do zamiany na system o podstawie "<<x<<" =";
    cin>>n;
    cout<<dec(n,x);
    return 0;
}
