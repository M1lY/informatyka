#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    for(int i=1; i<=n; i++){
        for(int s=1; s<=n-1; s++) cout<<" ";
        for(int j=1; j<=i*2-1; j++) cout<"*";
        cout<<endl;
    }
    for(int k=1; k<=n-1; k++) cout<<" ";
    cout<<"*"<<endl;
    for(int k=1; k<=n-2; k++) cout<<" ";
    cout<<"***";
    return 0;
}
