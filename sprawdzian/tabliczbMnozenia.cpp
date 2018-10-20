#include <iostream>
#include <iomanip>
using namespace std;

int const a=10;
int main(){
    int tab[a][a];
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            tab[i][j]=(i+1)*(j+1);
            cout<<setw(4)<<tab[i][j];
        }
        cout<<endl;
    }
    return 0;
}
