#include <iostream>
#include <iomanip>
#include <cmath>
     
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
	int number;
	int aux;
	cin >> aux;

	for(int b =1; b <= aux;b++){
		cin >> number;

		if (primo(number,0)==1)
			cout <<"Prime\n";	
		else
			cout << "Not Prime\n";
	}
	return 0;

}
