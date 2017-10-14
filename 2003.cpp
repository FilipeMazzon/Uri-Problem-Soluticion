#include <bits/stdc++.h>

using namespace std;


int main()
{
	int hora,minutos,horas,tmpmax;
	char s[5];
	while(cin>>s){
		hora= s[0] -'0';
		minutos= (s[2]-'0')*10+s[3]-'0';
		
		if(hora<7){
			cout << "Atraso maximo: 0\n";
		}
		else{
			horas = hora-7;
			tmpmax=horas*60 +minutos;
			cout <<	"Atraso maximo: " << tmpmax <<endl;		
		}
	}
	
}
