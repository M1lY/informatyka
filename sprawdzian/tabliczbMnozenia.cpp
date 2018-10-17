#include <iostream>
#include <iomanip>
using namespace std;

int const a=10;
int main(){
    int tab[a][a];
    for(int i=1;i<=a;i++){
        for(int j=1;j<=a;j++){
            tab[i][j]=i*j;
            cout<<setw(4)<<tab[i][j];
        }
        cout<<endl;
    }
    return 0;
}
