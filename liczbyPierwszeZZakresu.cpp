#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    bool b;
    cin>>n;
    for(int i=2; i<=n; i++){
    	b=1;
    	for(int j=2; j<=sqrt(i); j++){
        	if(i%j==0) b=0;
        }
        if(b)cout<<i<<" ";
    }
    return 0;
}
