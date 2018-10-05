#include <iostream>
using namespace std;

int main(){
    char znak;
    cin>>znak;
    switch(znak){
        case 'i': cout<<"Piotr"; break;
        case 'n': cout<<"Milewski"; break;
        default: cout<<"Bledny znak";
    }
    return 0;
}
