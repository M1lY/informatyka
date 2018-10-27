#include <iostream>
#include <fstream>
using namespace std;

ifstream we("dane.txt");
ofstream wy("wyniki.txt");
int nwd(int a,int b){
    int k;
    while(b!=0){
        k=b;
        b=a%b;
        a=k;
    }
    return a;
}
int main(){
    int a,b;
    while(we>>a){
        we>>b;
        cout<<"NWD("<<a<<","<<b<<")="<<nwd(a,b)<<endl;
        wy<<"NWD("<<a<<","<<b<<")="<<nwd(a,b)<<endl;
    }
    return 0;
}
