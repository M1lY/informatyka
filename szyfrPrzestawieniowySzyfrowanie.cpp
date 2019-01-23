#include <iostream>
using namespace std;

string szyfrPrzestawieniowy(string s, int k){
	string szyfr="";
	int d=s.size();
	k%=d;
	for(int i=0; i<k; i++){
		for(int j=i; j<d; j+=k){
			szyfr+=s[j];
		}
	}
	return szyfr;
}
int main(){
	string s;
	cin>>s;
	int k;
	cin>>k;
	cout<<szyfrPrzestawieniowy(s,k);
	return 0;
}
