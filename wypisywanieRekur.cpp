#include <iostream>
#include <iomanip>
using namespace std;

void wypMalejaco(int n){
    if(n>=0){
        cout<<setw(3)<<n;
        wypMalejaco(n-1);
    }
}

void wypRosnaco(int n){
    if(n>=0){
        wypRosnaco(n-1);
        cout<<setw(3)<<n;
    }
}

int main(){
    int n;
    cin>>n;
    wypMalejaco(n);
    cout<<endl;
    wypRosnaco(n);
    return 0;
}
