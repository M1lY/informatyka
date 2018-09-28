#include<iostream>
#include<cmath>
#include<iomanip>
#include<cstdlib>
#include<time.h>
using namespace std;

int tab[15];
int s;

int main(){
    srand(time(NULL));
    for(int i=0;i<15;i++){
        tab[i]= rand()%100+100;
    }

    for(int i=0;i<15;i++){
        s+=tab[i];
    }
    cout<<"Suma wszystkich wygenerowanych liczb: "<<s<<endl;
    
    cout<<"Liczby w ktorych ostatnia cyfra jest 7:";
    for(int i=0;i<15;i++){
        if(tab[i]%10==7) cout<<setw(4)<<tab[i];
    }
    cout<<endl;

    cout<<"Liczby ktorych suma cyfr jest liczba parzysta:";
    for(int i=0;i<15;i++){
        if((tab[i]%10+tab[i]%100+tab[i]%1000)%2==0) cout<<setw(4)<<tab[i];
    }
    
    return 0;
}
