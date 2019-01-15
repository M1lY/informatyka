#include <iostream>
#include <fstream>
#include <iostream>
using namespace std;

ifstream we("dane.txt");
ofstream wy("wyniki.txt");

bool jednolite(string x, string y){
	for(int i=0;i<x.size();i++) if(x[i]!=y[i]) return false;
	return true;
}

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
	/*
	*	ZADANIE 1
	*/
	string x, y;
	int l=0;
	while(we>>x){
		we>>y;
		int dx=x.size();
		int dy=y.size();
		if(dx==dy) if(jednolite(x,y)) l++;
	}
	cout<<"1: "<<l<<endl;
	wy<<"1: "<<l<<endl;
	
	we.close();
	we.open("dane.txt", ios::in);
	
	/*
	*	ZADANIE 2
	*/
	l=0;
	while(we>>x){
		we>>y;
		int dx=x.size();
		int dy=y.size();
		if(dx==dy) if(anagram(x,y)) l++;
	}
	cout<<"2: "<<l<<endl;
	wy<<"2: "<<l<<endl;
	
	we.close();
	we.open("dane.txt", ios::in);
	
	/*
	*	ZADANIE 3
	*/
	int k=0, max=0, j=0;
	while(we>>x){
		we.close();
		we.open("dane.txt", ios::in);
		k=0;
		while(we>>y){
			if(anagram(x,y)) k++;
		}
		if(max<k) max=k;
		we.close();
		we.open("dane.txt", ios::in);
		j++;
		for(int i=0; i<j; i++) we>>x;
	}
	cout<<"3: "<<max;
	wy<<"3: "<<max;
	
	return 0;
}
