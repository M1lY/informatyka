#include<iostream>
#include<string.h>
using namespace std;
bool anagramy(char w[], char w1[]){
	int d=strlen(w);
	int d1=strlen(w1);
	char temp[d1+1];
	if(d!=d1) return false;
	strcpy(temp,w1);
    bool b;
	for(int i=0; i<d; i++){
        b=false;
		for(int j=0; j<d1; j++){
			if(w[i]==temp[j]){
                temp[j]='/0';
                b=true;
				break;
            }
		}
        if(b==false) return false;
	}
	return true;
}
int main(){
	char w[20];
	char w1[20];
	cout<<"Podaj w i w1: ";
	cin>>w>>w1;
	if(anagramy(w,w1)) cout<<"w1 jest anagramem w";
	else cout<<"w1 nie jest anagramem w";
	return 0;
}