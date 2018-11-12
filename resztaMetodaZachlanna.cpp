#include <iostream>
using namespace std;

int main(){
    int N[8]={200,100,50,20,10,5,2,1};
    int R,L;
    cin>>R;
    int i=0;
    while(R>0){
        if(R>=N[i]){
            L=R/N[i];
            R=R-(N[i]*L);
            cout<<N[i]<<"zl x "<<L<<endl;
        }
        i++;
    }
    return 0;
}
