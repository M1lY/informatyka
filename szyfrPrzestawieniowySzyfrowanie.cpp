//#include <iostream>
//using namespace std;
//
//string szyfrPrzestawieniowy(string s, int k){
//	string szyfr="";
//	int d=s.size();
//	k%=d;
//	for(int i=0; i<k; i++){
//		int j=i;
//		for(int j=i; j<d; j+=k){
//			szyfr+=s[j];
//		}
//	}
//	return szyfr;
//}
//int main(){
//	string s;
//	cin>>s;
//	int k;
//	cin>>k;
//	cout<<szyfrPrzestawieniowy(s,k);
//	return 0;
//}

#include<iostream>
using namespace std;
void szyfr(string s,int k)
{
	int d=s.size();
	k=k%d;
	for(int i=0;i<k;i++)
	{
		int j=i;
		while(j<d)
		{
			cout<<s[j];
			j+=k;
		}
	}
}
int main()
{
	int k;
	string s;
	cout<<"Podaj tekst do zaszyfrowania oraz kod: ";
	cin>>s;
	cin>>k;
	szyfr(s,k);
	return 0;
}
