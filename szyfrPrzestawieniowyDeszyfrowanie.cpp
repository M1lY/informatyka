#include <iostream>
#include<cmath>
using namespace std;

string szyfrPrzestawieniowy(string s, int k){
	string szyfr="";
	int d=s.size();
	int h=d%k;
	if(d%k>0) k=ceil((float)d / (float)k);
	int l=0;
	h%=d;
	for(int i=0; i<k; i++){
		int j=i;
		int g=0;
		for(int j=i; j<=d; g++){
			if(l==d) break;
			if(g<=h){
				szyfr+=s[j];
				j+=k;
			}
			else{
				szyfr+=s[j-1];
				j+=k-1;
			}
			l++;
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
