#include <iostream>
#include <iomanip>
#include <time.h>
#include <cstdlib>
using namespace std;
const int n = 10;

void sortWstaw(int tab[]){
	int temp,j;
	for(int i=1;i<n;i++){
		temp=tab[i];
		for(j=i-1;j>=0&&tab[j]>temp;j--){
			tab[j+1]=tab[j];
		}
		tab[j+1]=temp;
	}
}
int main(){
	srand(time(NULL));
	int tab[n];
	for(int i=0;i<n;i++) tab[i]=rand()%90+10;
	for(int i=0;i<n;i++) cout<<setw(3)<<tab[i];
	sortWstaw(tab);
	cout<<endl;
	for(int i=0;i<n;i++) cout<<setw(3)<<tab[i];
	return 0;
}
