#include <bits/stdc++.h>
#define add push_back
     
using namespace std;

int primo(int numero,int count){
	if(numero==0 || numero==1) return 0;
	for(int i=2;i<=sqrt(numero);i++){
		if(numero%i==0){
			count ++;
		}
		if(count>0){
			break;
		}
	}
	if(count==0){
		return 1;
	}
	else{
		return 0;
	}
}
     
int main () 
{
	vector<int>eachNumber;
	int numero;
	int super;
	string numeros;
	int aux;
	string auxs;
    while(cin>>numero){
    	super=1;
    	if(primo(numero,0)==1){
    		numeros = to_string(numero);
    		for(int i =0;i<numeros.size();i++){
    			auxs=numeros[i];
    			aux=stoi(auxs);
    			eachNumber.add(aux);

			}
			for(int i=0;i<eachNumber.size();i++){
				if(primo(eachNumber[i],0) ==0){
					super=0;
					break;
				}
			}
			if(super==1){
				cout<<"Super"<<endl;
			}
			else{
				cout<<"Primo"<<endl;
			}
		}
		else{
			cout<<"Nada"<<endl;
		}
    	eachNumber.clear();
	}
	return 0;
}

    
