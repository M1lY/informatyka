#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <time.h>
using namespace std;

const int n = 10;
void sortWstawRos(int tab[]){
    int min;
    for(int i=0;i<n-1;i++){
        min=i;
        for(int j=i+1;j<n;j++){
            if(tab[min]>tab[j]) min=j;
        }
        swap(tab[min],tab[i]);
    }
}
void sortWstawMalej(int tab[]){
	int max;
	for(int i=0;i<n-1;i++){
		max=i;
		for(int j=i+1;j<n;j++){
			if(tab[max]<tab[j]) max=j;
		}
		swap(tab[max],tab[i]);
	}
}
int main(){
    srand(time(NULL));
    int tab[n];
    for(int i=0;i<n;i++) tab[i]=rand()%90+10;
    for(int i=0;i<n;i++) cout<<setw(3)<<tab[i];
    sortWstawRos(tab);
    cout<<endl<<"Rosnaco: ";
    for(int i=0;i<n;i++) cout<<setw(3)<<tab[i];
    sortWstawMalej(tab);
    cout<<endl<<"Majeaco: ";
    for(int i=0;i<n;i++) cout<<setw(3)<<tab[i];
    return 0;
}
