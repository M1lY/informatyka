#include <iostream>
#include <iomanip>
#include <time.h>
#include <cmath>
using namespace std;
const int n=21;

bool lPierwsza (int a){
    if(a<2) return false;
    for(int i=2;i<=sqrt(a);i++){
        if(a%i==0) return false;
    }
    return true;
}
int main(){
    srand(time(NULL));
    int A[n];
    int p=0,z=0;

    cout<<"Tablica A: ";
    for(int i=0;i<21;i++){
        A[i]=rand()%90+10;
        cout<<setw(3)<<A[i];
    }

    for(int i=0;i<n;i++){
        if(lPierwsza(A[i])) p++;
        else z++;
    }
    int P[p];
    int Z[z];
    
    int j=0,l=0;
    for(int i=0;i<n;i++){
        if(lPierwsza(A[i])){
            P[j]=A[i];
            j++;
        }else{
            Z[l]=A[i];
            l++;
        }
    }

    cout<<endl<<"Tablica P: ";
    for(int i=0;i<p;i++) cout<<setw(3)<<P[i];
    cout<<endl<<"Tablica Z: ";
    for(int i=0;i<z;i++) cout<<setw(3)<<Z[i];
    
    int najw=P[0];
    for(int i=0;i<p;i++) if(najw<P[i]) najw=P[i];
    cout<<endl<<"Najwieksza liczba z tablicy P: "<<najw;
    int najm=Z[0];
    for(int i=0;i<z;i++) if(najm>Z[i]) najm=Z[i];
    cout<<endl<<"Najmniejsza liczba z tablicy Z: "<<najm;
    return 0;
}
