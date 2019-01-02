#include <iostream>
using namespace std;

int na10(int d, string x){
	if(d==0) return int(x[0]-'0');
	return 2*na10(d-1,x)+int(x[d]-'0');
}

void na16(int n){
	if(n>0){
		na16(n/16);
		cout<<char(n%16+'7');
	}
}

int main(){
//	string x="1101011101";
	string x;
	cin>>x;
	string n;
	while(x.size()%4!=0){
		x="0"+x;
	}
	for(int i=0; i<x.size(); i+=4){
		n="";
		for(int j=i; j<i+4; j++){
			n=n+x[j];
		}
		if(na10(n.size()-1, n)<10) cout<<na10(n.size()-1, n);
		else na16(na10(n.size()-1, n));
	}
	return 0;
}
