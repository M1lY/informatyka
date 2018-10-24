#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;

int const n=15;
int main(){
    srand(time(NULL));
    int tab[n];
    int a;
    int i=0;
    while(i<n){
        a=rand()%90+10;
        if(a%2==0){
            cout<<setw(3)<<a;
            tab[i]=a;
            i++;
        }
    }
    int min=tab[0];
    for(i=1;i<n;i++){
        if(min>tab[i]) min=tab[i];
    }
    cout<<endl<<"minimum: "<<min<<endl;
    
    string s;
    i=0;
    int temp=min;
    while(temp>0){
        s[i]=temp%2;
        temp/=2;
        i++;
    }
    i--;
    cout<<"minimum w systemie binarnym: ";
    while(i>=0){
        cout<<int(s[i]);
        i--;
    }

    s="";
    i=0;
    temp=min;
    while(temp>0){
        s[i]=temp%16;
        temp/=16;
        i++;
    }
    i--;
    cout<<endl<<"minimum w systemie hexadecymalnym: ";
    while(i>=0){
        if(int(s[i])<10) cout<<int(s[i]);
        else{
            char k=s[i];
            cout<<char('A'+k-10);
        }
        i--;
    }
    return 0;
}
