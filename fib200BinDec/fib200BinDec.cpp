#include <iostream>
#include <fstream>
using namespace std;
ofstream wy("wyniki.txt");
int fib(int n){
	if(n==1||n==2) return 1;
	return fib(n-1)+fib(n-2);
}
void na2(int n){
	if(n>0){
		na2(n/2);
		cout<<n%2;
		wy<<n%2;
	}
}
int main(){
	int i=1;
	while(fib(i)<200){
		cout<<"10:"<<fib(i)<<" 2:";
		wy<<"10:"<<fib(i)<<" 2:";
		na2(fib(i));
		cout<<endl;
		wy<<endl;
		i++;
	}
	return 0;
}
