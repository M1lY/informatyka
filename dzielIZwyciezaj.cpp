#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;

int maxF(int tab[],int j){
    int max=tab[0];
    for(int i=1;i<j;i++){
        if(tab[i]>max) max=tab[i];
    }
    return max;
}
int minF(int tab[],int j){
    int min=tab[0];
    for(int i=1;i<j;i++){
        if(tab[i]<min) min=tab[i];
    }
    return min;
}
int main(){
    int n,polowa;
    srand(time(NULL));

    cout<<"Ilosc liczb do wygenerowania=";
    cin>>n;
    int tab[n];
    cout<<"Tablica:";
    for(int i=0;i<n;i++){
        do tab[i]=10+rand()%90;
        while(tab[i]%2!=0);
        cout<<setw(3)<<tab[i];
    }
    cout<<endl;

    if(n%2==0) polowa=n/2; else polowa=n/2+1;
    int max[polowa];
    int min[polowa];

    int k=0, i=0;
    while(i<polowa){
        if(tab[k]>tab[k+1]){
            max[i]=tab[k];
            min[i]=tab[k+1];
        }else{
            max[i]=tab[k+1];
            min[i]=tab[k];
        }
        k++;
        k++;
        i++;
    }
    if(n%2!=0){
        max[polowa-1]=tab[n-1];
        min[polowa-1]=tab[n-1];
    }
    cout<<"Kandydaci na maksikum: ";
    for(int i=0;i<polowa;i++) cout<<setw(3)<<max[i];
    cout<<endl<<"Kandydaci na minimum: ";
    for(int i=0;i<polowa;i++) cout<<setw(3)<<min[i];    
    cout<<endl<<"Max="<<maxF(max,polowa);
    cout<<endl<<"Min="<<minF(min,polowa);
    return 0;
}
