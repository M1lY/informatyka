#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;

int const n=15;
int main(){
    srand(time(NULL));
    int tab[n];
    int a;
    int i=0;
    while(i<n){
        a=rand()%90+10;
        if(a%2==0){
            cout<<setw(3)<<a;
            tab[i]=a;
            i++;
        }
    }
    int min=tab[0];
    for(i=1;i<n;i++){
        if(min>tab[i]) min=tab[i];
    }
    cout<<endl<<min;
    return 0;
}
