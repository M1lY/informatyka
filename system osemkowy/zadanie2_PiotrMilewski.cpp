#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
using namespace std;

ofstream wyP("pierwsze.txt");
ofstream wyO("osemkowe.txt");
ofstream wyR("rowne.txt");
ofstream wyW("wyniki.txt");

ifstream weP("pierwsze.txt");
ifstream weO("osemkowe.txt");

void na8(int n){
	string a;
    int i=0;
    while(n>0){
        a[i]=n%8;
        n/=8;
        i++;
    }
    i--;
    while(i>=0){
        cout<<int(a[i]);
        wyO<<int(a[i]);
        i--;
    }
}
bool lPierwsza(int n){
    if(n<2) return false;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return false;
    }
    return true;
}
bool valid(int x){
	int d=1;
	int k=x;
	while((k/=10)!=0)d++;
//	if(d==1) return true;
	int tab[d];
	int h;
	int temp;
	for(int i=0;i<d;i++){
		temp=x;
		h=i;
		while(h>=1){
			temp/=10;
			h--;
		}
		tab[i]=temp%10;
	}
	for(int i=0;i<d-1;i++){
		if(tab[i]<tab[i+1]) return false;
	}
//	if(d==2)if(tab[0]<tab[1]) return false;
//	if(d==3)if((tab[0]<tab[1])||(tab[1]<tab[2])) return false;
    return true;
}
int main(){
	cout<<"Liczby pierwsze z zakresu <1,199>:"<<endl;
    for(int i=0;i<200;i++){
        if(lPierwsza(i)){
            cout<<setw(4)<<i;
            wyP<<setw(4)<<i;
        }
    }
    cout<<endl;
	wyP.close();
	
    int x;
    cout<<"Liczby pierwsze z zakresu <1,199> w systemie osemkowym:"<<endl;
    while(weP>>x){
		na8(x);
        cout<<" ";
        wyO<<" ";
    }
    cout<<endl;
    wyO.close();
    
    string r;
    cout<<"Liczby pierwsze z zakresu <1,199> w systemie osemkowym ktorych pierwsza i ostatnia cyfra jest rowna:"<<endl;
    while(weO>>r){
    	int d=r.size();
    	if(r[0]==r[d-1]){
			cout<<setw(4)<<r;
			wyR<<setw(4)<<r;
		}
	}
	weO.close();
	cout<<endl;
	
	ifstream weO("osemkowe.txt");
	cout<<"Liczby pierwsze z zakresu <1,199> w systemie osemkowym ktorych cyfry sa ustawione nie malejaco:"<<endl;
	while(weO>>x){
		if(valid(x)){
			cout<<setw(4)<<x;
			wyW<<setw(4)<<x;
		}
	}
    return 0;
}
