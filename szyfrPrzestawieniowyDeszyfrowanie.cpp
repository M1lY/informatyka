#include <iostream>
#include<cmath>
using namespace std;

string szyfrPrzestawieniowy(string s, int k){
	string jawny="";
	int d=s.size();
	int h=d%k;
	k=ceil((float)d / (float)k);
	int l=0;
	for(int i=0; i<k; i++){
		int j=i;
		int g=0;
		for(int j=i; j<=d; g++){
			if(l==d) break;
			if(g<=h){
				jawny+=s[j];
				j+=k;
			}
			else{
				jawny+=s[j-1];
				j+=k-1;
			}
			l++;
		}
	}
	return jawny;
}
int main(){
	string s;
	cin>>s;
	int k;
	cin>>k;
	cout<<szyfrPrzestawieniowy(s,k);
	return 0;
}
