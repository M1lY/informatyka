#include <iostream>
using namespace std;

int dec(int d, string x, int p){
	if(d==0) return int(x[0]-'7')<10?int(x[0]-'0'):int(x[0]-'7');
	return int(x[d]-'7')<10?p*dec(d-1,x,p)+int(x[d]-'0'):p*dec(d-1,x,p)+int(x[d]-'7');
}
int main(){
	string x;
	int p;
    cout<<"Podstawa systemu z ktorego zamieniasz=";
    cin>>p;
    cout<<"Liczba do zamiany=";
    cin>>x;
    int d=x.size();
    cout<<dec(d-1,x,p);
    return 0;
}
