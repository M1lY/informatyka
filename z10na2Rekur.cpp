#include <iostream>
using namespace std;

void z10na2(int n){
    if(n>0){
        z10na2(n/2);
        cout<<n%2;
    }
}

int main(){
    int n;
    cin>>n;
    z10na2(n);
    return 0;
}
