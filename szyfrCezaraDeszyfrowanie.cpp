#include <iostream>
using namespace std;

string szyfrCezara(string s, int k){
	string jawny;
	k%=26;
	for(int i=0; i<s.size(); i++){
		if(int(s[i])-k<65) jawny+=char(int(s[i])-k+26);
		else jawny+=char(int(s[i])-k);
	}
	return jawny;
}
int main(){
	string s;
	cin>>s;
	int k;
	cin>>k;
	cout<<szyfrCezara(s, k);
	return 0;
}
