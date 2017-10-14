#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <locale>   
      
using namespace std;
         
int main ()
{
	string nome,nome2,nome3;
	
	cin >> nome,nome2,nome3;
	
	if ( nome == "vertebrado"){
		if (nome2 == "ave"){
			if (nome3 == "carnivoro"){ 
				cout << "aguia" << "\n";
			}
			if (nome3 == "onivoro"){
				cout << "pomba" << "\n";
			}
		}
		if (nome2 ==  "mamifero"){
			if (nome3 == "onivoro"){
				cout << "homem" << "\n";}
			if (nome3 == "herbivoro")
			{
				cout <<"vaca"<< "\n";}
			}
		}
		if (nome == "invertebrado"){
			if(nome2 == "inseto"){
				if (nome3 == "hematofago"){  
					cout << "pulga" << "\n";
				}
				if (nome3 == "herbivoro"){  
					cout << "lagarta" << "\n";
				}
			}
		if(nome2 == "anelideo"){        
			if (nome3 == "hematofago"){ 
				cout << "sanguessuga" << "\n";
			}
			if (nome3 == "onivoro")	{ 
				cout << "minhoca" << "\n";
			}
		}
	}
	
	
return 0;
}
