#include <iostream>
using namespace std;

int nwd(int a, int b){
    int k;
    while(b!=0){
        k=b;
        b=a%k;
        a=k;
    }
    return k;
}
int main(){
    int a,b;
    cin>>a;
    cin>>b;
    cout<<nwd(a,b);
    return 0;
}
