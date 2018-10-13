#include <iostream>
using namespace std;

bool palindrom(string wyraz){
    int d=wyraz.size();
    int l=0;
    int r=d-1;
    for(int i=0;i<d;i++){
        if(wyraz[l]!=wyraz[r]) return false;
    }
    return true;
}
int main(){
    string wyraz;
    cin>>wyraz;
    if(palindrom(wyraz)) cout<<"tak";
    else cout<<"nie";
    return 0;
}
