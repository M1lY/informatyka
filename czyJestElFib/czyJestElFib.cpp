#include <iostream>
#include <fstream>
using namespace std;
ifstream we("dane.txt");
ofstream wy("wyniki.txt");

void na2(int n){
	if(n>0){
        na2(n/2);
        cout<<n%2;
        wy<<n%2;
    }
}
int dec(int d, string x){
	if(d==0) return int(x[0]-'0');
    return 2*dec(d-1,x)+int(x[d]-'0');

}
int fib(int n){
	if(n==1||n==2) return 1;
	return fib(n-1)+fib(n-2);
}
int main(){
    string x;
    int d;
    int tab[6];
    int j=0;
    while(we>>x){
    	d = x.size()-1;
    	tab[j]=dec(d,x);
		j++;
	}
	int max=tab[0];
	for(int i=1;i<6;i++){
		if(max<tab[i]) max=tab[i];
	}
	int k=1;
	while(fib(k)<=max){
		for(int i=0;i<6;i++){
			if(tab[i]==fib(k)){
				cout<<"10:"<<tab[i]<<" 2:";
				wy<<"10:"<<tab[i]<<" 2:";
				na2(tab[i]);
				cout<<endl;
				wy<<endl;
			}
		}
		k++;
	}
    return 0;
}
