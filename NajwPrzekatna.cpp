#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int a;
    cin>>a;
    int tab[a][a];
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            if(i+j<a){
                tab[i][j]=j+i;
            }else{
                int k=i+j-a+1;
                tab[i][j]=tab[i-k][j-k];
            }
            cout<<setw(2)<<tab[i][j];
        }
        cout<<endl;
    }

    return 0;
}



/*int main(){
    int a;
    cin>>a;
    int tab[a][a];
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            if(i+j<a){
                tab[i][j]=j+i;
            }else{
                int k=i+j-a+1;
                tab[i][j]=tab[i-k][j-k];
            }
            cout<<setw(2)<<tab[i][j];
        }
        cout<<endl;
    }

    return 0;
}
*/