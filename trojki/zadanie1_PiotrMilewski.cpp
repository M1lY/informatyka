#include <iostream>
#include <fstream>
using namespace std;

ifstream we("trojki.txt");
ofstream wy("wyniki8.txt");

int sumaCyfr(int a){
	int s=0;
	while(a>0){
		s+=a%10;
		a/=10;
	}
	return s;
}

int main(){
	int x;
	int tab[3];
	int s=0, w=0;
    while(we>>x){
    	if(w!=2){
			tab[w]=x;
    		w++;
		}else{
			tab[2]=x;
			if((sumaCyfr(tab[0])+sumaCyfr(tab[1]))==tab[2]){
				cout<<tab[0]<<" "<<tab[1]<<" "<<tab[2]<<endl;
				wy<<tab[0]<<" "<<tab[1]<<" "<<tab[2]<<endl;
				tab[0]=0;
				tab[1]=0;
				tab[2]=0;
			}
			w=0;
		}
	}
	return 0;
}
