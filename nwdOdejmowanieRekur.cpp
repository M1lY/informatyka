#include <iostream>
using namespace std;

int nwd(int a, int b){
    if(a!=b){
        if(a>b) return nwd(a-b,b);
        else return nwd(a,b-a);
    }
    return a;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<nwd(a,b);
    return 0;
}
