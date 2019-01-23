#include <iostream>
using namespace std;
const string k="INFORMATYKA";

string vigener(string s, string k){
	string szyfr="";
	int d1=s.size();
	int d2=k.size();
	int kod=0;
	int i=0;
	int j=0;
	while(s[i]!='.'){
		kod=int(s[i])+int(k[j%d2])-65;
		if(s[i]==' '||s[i]==','||s[i]==';'){
			szyfr+=s[i];
			j--;
		}else if(kod>90) szyfr+=char(kod-26);
		else szyfr+=char(kod);
		i++;
		j++;
	}
	return szyfr+'.';
}

int main(){
	string s;
	getline(cin,s);
	cout<<vigener(s,k);
	return 0;
}
