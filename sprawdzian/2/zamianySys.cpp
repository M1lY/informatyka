#include <iostream>
#include <fstream>
using namespace std;
ifstream we("dane.txt");

int zamiana(int d, string n){
	if(d==0) return int(n[0]-'0');
	return 2*zamiana(d-1, n)+int(n[d]-'0');
}
int sumaCyfr(int n){
	int s=0;
	while(n>0){
		s+=n%10;
		n/=10;
	}
	return s;
}
int main(){
	string x;
	while(we>>x){
		int d=x.size();
		cout<<zamiana(d-1,x)<<"  "<<sumaCyfr(zamiana(d-1,x))<<endl;
	}
	return 0;
}
