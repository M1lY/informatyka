#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int fib(int n){
	if(n==1 || n==2) return 1;
	return fib(n-1)+fib(n-2);
}

bool lPierwsza(int n){
	if(n<2) return false;
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0) return false;
	}
	return true;
}

int main(){
	int tab[10];
	int s=0;
	for(int i=0; i<10; i++) tab[i]=fib(i+1);
	for(int i=0; i<10; i++){
		cout<<setw(3)<<tab[i];
		s+=tab[i];
	}
	cout<<endl<<s;
	cout<<endl<<lPierwsza(s);
	return 0;
}
