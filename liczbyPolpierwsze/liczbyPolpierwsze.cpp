#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

ifstream we("binarne.txt");
ofstream wy("wyniki.txt");

int dec(string n){
    int d=n.size();
    int y;
    y=int(n[0]-'0');
    for(int i=1;i<d;i++){
        y=y*2+int(n[i]-'0');
    }
    return y;
}
bool pierwsza(int n){
    if(n<2) return false;
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0) return false;
    }
    return true;
}
int main(){
	string x;
	int a;
	while(we>>x){
		a=dec(x);
		for(int i=0;i<a;i++){
			if(pierwsza(i)){
				if(pierwsza(a/i)&&a%i==0){
					cout<<"2: "<<x<<" 10: "<<a<<endl;
					wy<<"2: "<<x<<" 10: "<<a<<endl;
					break;
				}
			}
		}
	}
	return 0;
}
