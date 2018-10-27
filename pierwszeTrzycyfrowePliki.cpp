#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>
using namespace std;

ofstream wy("wyniki.txt");
bool lPierwsza (int a){
    if(a<2) return false;
    for(int i=2;i<=sqrt(a);i++){
        if(a%i==0) return false;
    }
    return true;
}
int main(){
    int i=100;
    while(i<200){
        if(lPierwsza(i)) wy<<setw(4)<<i;
        i++;
    }
    return 0;
}
