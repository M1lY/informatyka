#include <iostream>
#include <fstream>
using namespace std;
ifstream weTekst("dane.txt");
ifstream weKlucz("klucz.txt");
ofstream wy("wynik.txt");

string szyfrVigener(string s, string k){
	string szyfr="";
	int d1=s.size();
	int d2=k.size();
	int kod=0;
	for(int i=0; i<d1; i++){
		kod=int(s[i])+int(k[i%d2])-65;
		if(kod<=90) szyfr+=char(kod);
		else szyfr+=char(kod-26);
	}
	return szyfr;
}
int main(){
	string s;
	string k;
	while(weTekst>>s){
		weKlucz>>k;
		cout<<szyfrVigener(s,k)<<endl;
		wy<<szyfrVigener(s,k)<<endl;
	}
}
