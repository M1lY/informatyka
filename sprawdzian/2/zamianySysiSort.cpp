#include <iostream>
#include <cstdlib>
#include <time.h>
#include <iomanip>
using namespace std;
const int n=20;

void sortWybor(int tab[]){
	int min;
	for(int i=0; i<n-1; i++){
		min=i;
		for(int j=i+1; j<n; j++){
			if(tab[min]>tab[j]) min=j;
		}
		swap(tab[min], tab[i]);
	}
}

void sortBabel(int tab[]){
	for(int i=n-1; i>0; i--){
		for(int j=0; j<i; j++){
			if(tab[j]>tab[j+1]) swap(tab[j],tab[j+1]);
		}
	}
}

void sortWstaw(int tab[]){
	int temp,j;
	for(int i=1;i<n;i++){
		temp=tab[i];
		for(j=i-1; j>=0&&tab[j]>temp; j--) tab[j+1]=tab[j];
		tab[j+1]=temp;		
	}
}

void zamiana(int x, int p){
	if(x>0){
		zamiana(x/p, p);
		if(x%p>=10) cout<<char(x%p+'7');
		else cout<<x%p;
	}
}

int main(){
	srand(time(NULL));
	int tab[n];
	for(int i=0; i<n; i++) tab[i]=rand()%90+10;
	for(int i=0; i<n; i++) cout<<setw(3)<<tab[i];
	sortWybor(tab);
//	sortBabel(tab);
//	sortWstaw(tab);
	cout<<endl;
	for(int i=0; i<n; i++) cout<<setw(3)<<tab[i];
	int sr=(tab[0]+tab[n-1])/2;
	cout<<endl<<"Srednia w sys. 10: "<<sr;
	cout<<endl<<"Srednia w sys. 2: ";
	zamiana(sr, 2);
	cout<<endl<<"Srednia w sys. 16: ";
	zamiana(sr, 16);
	return 0;
}
