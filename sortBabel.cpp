#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <time.h>
using namespace std;
const int n=10;

void sortBabel(int tab[]){
	for(int i=n-1;i>1;i--){
		for(int j=0;j<i;j++){
			if(tab[j]>tab[j+1]) swap(tab[j],tab[j+1]);
		}
	}
}
int main(){
	srand(time(NULL));
    int tab[n];
    for(int i=0;i<n;i++) tab[i]=rand()%90+10;
    for(int i=0;i<n;i++) cout<<setw(3)<<tab[i];
    sortBabel(tab);
    cout<<endl;
    for(int i=0;i<n;i++) cout<<setw(3)<<tab[i];
    return 0;
}
