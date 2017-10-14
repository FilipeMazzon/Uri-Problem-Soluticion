#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <locale>   
    
using namespace std;
       
int main ()
{
	int num;
	 
	int par=0,impar=0,positivo=0,negativo=0;
	for(int i=0;i<5;i++){
		cin>>num;
		if(num%2 ==0){
			par++;
		}
		else
			impar++;
		if(num>=0){
			positivo++;
		}
		else{
			negativo++;
		}
	}
	
	cout << par <<" valor(es) par(es)" << "\n";     
	cout << impar <<" valor(es) impar(es)" << "\n";          
	cout << positivos <<" valor(es) positivo(s)" << "\n";
	cout << negativos <<" valor(es) negativo(s)" << "\n";
                    
	return 0;
}
