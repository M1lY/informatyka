#include <iostream>
using namespace std;

int main(){
    int n,x,y=1;
    cout<<"Stopien wielomianu=";
    cin>>n;
    cout<<"Podstawa wielomianu=";
    cin>>x;
    int tab[n];
    for(int i=0;i<n;i++){
        cout<<"tab["<<i<<"]=";
        cin>>tab[i];
    }
    
    for(int i=0;i<n;i++){
        y=y*x+tab[i];
    }
    cout<<y;
    return 0;
}
