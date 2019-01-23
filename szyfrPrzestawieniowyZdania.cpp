#include <iostream>
using namespace std;
const int k = 7;

string szyfrPrzestawieniowy(string s, int k){
	string szyfr="";
	k%=s.size();
	for(int i=0; i<k; i++){
		for(int j=i; j<s.size(); j+=k){
			szyfr+=s[j];
		}
	}
	return szyfr;
}
int main(){
	string s;
	getline(cin,s);
	string temp;
	for(int i=0; s[i]!='.'; i++){
		if(s[i]!=' ') temp+=s[i];
		else{
			cout<<szyfrPrzestawieniowy(temp,k)<<s[i];
			temp="";
		}
	}
	cout<<szyfrPrzestawieniowy(temp,k);
	cout<<".";
	return 0;
}
