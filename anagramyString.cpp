#include<iostream>
using namespace std;
bool anagram(string wyrazA, string wyraz1){
	int d1=wyraz1.size();
	int da=wyrazA.size();
	string temp;
	if(da!=d1) return false;
	temp=wyrazA;
	bool b;
	for(int i=0; i<d1; i++){
		b=false;
		for(int j=0; j<da; j++){
			if(wyraz1[i]==temp[j]){
				temp[j]='\0';
				b=true;
				break;
			}
		}
		if(b==false) return false;
	}
	return true;
}
int main(){
	string tekst;
	getline(cin,tekst);
	tekst+=' ';
	int d=tekst.size();
	string wyrazA, wyraz1;
	int j=0;
	for(int i=0; i<d; i++){
		if(tekst[i]!=' '){
			wyrazA+=tekst[i];
		}else{
			if(j==0){
				wyraz1=wyrazA;
				cout<<"Anagramy wyrazu: "<<wyrazA<<" to:"<<endl;
				j++;		 
				wyrazA="";
				continue;
			}else if(anagram(wyrazA,wyraz1)){
				cout<<wyrazA<<endl;
			}
			wyrazA="";
		}
	}
	return 0;
}