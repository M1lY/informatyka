#include <iostream>
#include <cmath>
using namespace std;

bool pierwsza(int n){
    if(n<2) return false;
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0) return false;
    }
    return true;
}

int main()
{
    int n=0, i=0;
    do{
        cin>>n;
        if(pierwsza(n)){
            i++;
        }else i=0;
    }while(i!=2);
    return 0;
}
