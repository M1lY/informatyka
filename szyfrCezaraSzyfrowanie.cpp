#include <iostream>
using namespace std;

string szyfrCezara(string s, int k){
	string szyfr;
	k%=26;
	for(int i=0; i<s.size(); i++){
		if(int(s[i])+k>90) szyfr+=char(int(s[i])+k-26);
		else szyfr+=char(int(s[i])+k);
	}
	return szyfr;
}
int main(){
	string s;
	cin>>s;
	int k;
	cin>>k;
	cout<<szyfrCezara(s, k);
	return 0;
}
