#include <iostream>
using namespace std;

int silnia(int n){
    int s=1;
    for(int i=1;i<=n;i++){
        s=s*i;
    }
    return s;
}
int main(){
    int n;
    cin>>n;
    cout<<silnia(n);
    return 0;
}
