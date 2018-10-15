#include <iostream>
using namespace std;

bool palindrom(string wyraz){
    int d=wyraz.size();
    int l=0;
    int r=d-1;
    for(int i=0;i<d;i++){
        if(wyraz[l]!=wyraz[r]) return false;
    }
    return true;
}
bool czySamogloska(string wyraz){
    switch(wyraz[0]){
        case 'a':
            return true;
            break;
        case 'e':
            return true;
            break;
        case 'y':
            return true;
            break;
        case 'i':
            return true;
            break;
        case 'o':
            return true;
            break;
        case 'u':
            return true;
            break;
    }
    return false;
}
bool anagram(string w1, string wA){
    int d1=w1.size();
    int dA=wA.size();
	if(dA!=d1) return false;
    bool b;
    for(int i=0;i<d1;i++){
        b=false;
        for(int j=0;j<dA;j++){
            if(w1[i]==wA[j]){
                wA[j]='\0';
                b=true;
                break;
            }
        }
        if(b==false) return false;
    }
    return true;
}

int main(){
    string zdanie;
    getline(cin,zdanie);
    string wyraz;
    int s=0;

    for(int i=0;zdanie[i]!='.';i++){
        if(zdanie[i]==' ') s++;
    }
    cout<<"ilosc wyrazow: "<<s+1<<endl;

    cout<<"palindromy: ";
    for(int i=0;zdanie[i]!='.';i++){
        if(zdanie[i]!=' ') wyraz+=zdanie[i];
        else{
            if(palindrom(wyraz)) cout<<wyraz<<" ";
            wyraz="";
        }
    }
    if(palindrom(wyraz)) cout<<wyraz<<" ";

    wyraz="";
    cout<<endl<<"Wryazy ktore zaczynaja sie na samogloske: ";
    for(int i=0;zdanie[i]!='.';i++){
        if(zdanie[i]!=' ') wyraz+=zdanie[i];
        else{
            if(czySamogloska(wyraz)) cout<<wyraz<<" ";
            wyraz="";
        }
    }
    if(czySamogloska(wyraz)) cout<<wyraz;
    cout<<endl;

    string wyraz1;
    string wyrazA;
    int dZ = zdanie.size();
    int w=0;
    for(int i=0;dZ;i++){
        if(zdanie[i]!=' '&&zdanie[i]!='.'){
            wyrazA+=zdanie[i];
        }else{
            if(w==0){
                wyraz1=wyrazA;
                cout<<"Anagramy wyrazu "<<wyraz1<<": ";
                w++;
                wyrazA="";
                continue;
            }else if(anagram(wyraz1, wyrazA)){
                cout<<wyrazA<<" ";
            }
            wyrazA="";
        }
    }
    return 0;
}