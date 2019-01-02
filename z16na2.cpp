#include <iostream>
using namespace std;
string m;

int na10(char x){
	return int(x-'7')<10 ? int(x-'0') : int(x-'7');
}
void na2(int n){
    if(n>0){
        na2(n/2);
        m+=char(n%2+'0');
    }
}
int main(){
//	string x="A2D";
	string x;
	cin>>x;
	int d=x.size();
	for(int i=0;i<d;i++){
		na2(na10(x[i]));
		while(m.size()%4!=0 && i>0){
			m="0"+m;
		}
		cout<<m;
		m="";
	}
	return 0;
}
