#include <iostream>

using namespace std;


int main()
{
	int x,y,n,soma;
	string a,b,c,d;
	cin >>n;
	
	while (n--){
		soma=0;
		cin >>a >>c >> b>>d>>x>>y;
		
		soma= x+y;
		
		if (soma%2==0){
			if(c== "PAR"){
				cout << a << "\n";
			}
			if (d == "PAR"){
				cout << b << "\n";
			}
		}
		if (soma%2!=0){
			if (c == "IMPAR"){
				cout << a << "\n";
			}
			if (d == "IMPAR"){
				cout << b << "\n";
			}
		}		
	}
	return 0;	
}
