#include <bits/stdc++.h>

using namespace std;

int mdc(int a,int b)
{
    if(b == 0) return a;
    else
    return mdc(b,a%b);
} 


int main(){
	int NumCases,N1,N2,D1,D2,numerador1,denominador1,MaiorDC;
	cin>>NumCases;
	string operacao="";
	string aux;
	while(NumCases--){
		cin>>N1 >> aux;
		cin>>D1 >> aux;
		operacao+= aux;
		cin>>N2 >> aux;
		cin>>D2;

		if(operacao == "+"){
			numerador1= (N1*D2 + N2*D1);
			denominador1 =  (D1*D2);
		}
		if(operacao =="-"){
			numerador1 =(N1*D2 - N2*D1);
			denominador1 = (D1 * D2);
		}
		if (operacao == "*"){
			numerador1=(N1*N2);
			denominador1= (D1 * D2);
		}
		if(operacao == "/"){
			numerador1 =(N1*D2);
			denominador1 = (D1*N2);
		}
		MaiorDC = mdc(numerador1,denominador1);
		if (MaiorDC <0 ){
			MaiorDC *= -1;
		}

		cout<< numerador1 <<"/" << denominador1 <<" = ";
		cout<<numerador1/MaiorDC << "/" << denominador1/MaiorDC<<endl;

		operacao = "";
	}
}
