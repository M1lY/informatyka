#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

int const a=4;
int main(){
    srand(time(NULL));
    int tab[a][a];
    int s=0;

    for(int i=0;i<a;i++){
        s=0;
        for(int j=0;j<a;j++){
            tab[i][j]=rand()%5;
            s+=tab[i][j];
            cout<<setw(3)<<tab[i][j];
        }
        cout<<"   "<<s;
        cout<<endl;
    }
    cout<<endl;
    s=0;
    for(int i=0;i<a;i++){
        s=0;
        for(int j=0;j<a;j++){
            s+=tab[j][i];
        }
        cout<<setw(3)<<s;
    }
    cout<<endl;
    s=0;
    for(int i=0;i<a;i++){
        s+=tab[i][i];
    }
    cout<<"Suma liczb na przekatej glownej: "<<s<<endl;
    s=0;
    for(int i=0;i<a-1;i++){
        s+=tab[i+1][i];
    }
    cout<<"Suma liczb pod przekatna glowna: "<<s<<endl;
    s=0;
    for(int i=0;i<a-1;i++){
        s+=tab[i][i+1];
    }
    cout<<"Suma liczb nad przekatna glowna: "<<s<<endl;
    
    cout<<endl;

    s=0;
    for(int i=0;i<a;i++){
        s+=tab[a-1-i][i];
    }
    cout<<"Suma liczb na drugiej przekatej: "<<s<<endl;
    s=0;
    for(int i=0;i<a-1;i++){
        s+=tab[a-1-i-1][i];
    }
    cout<<"Suma liczb pod druga przkatna: "<<s<<endl;
    s=0;
    for(int i=0;i<a-1;i++){
        s+=tab[a-1-i][i+1];
    }
    cout<<"Suma liczb nad druga przkatna: "<<s<<endl;
    return 0;
}
