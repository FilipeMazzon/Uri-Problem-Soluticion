#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <locale>  
   
using namespace std;
   
int main() 
{
	int A,B,C,D,E,F;
	 
	cin>> A,D,B,E;
	 
	if (A==B)
	    C= 24;
	else if(A > B)
	    C = B + (24 - A);
	else if (A < B)
	    {C = B - A;}
	    
	if (D == E)
		F= 0;
	if (D > E)
		F = E +(60-D);
	C= C - 1;}
	if (D < E)
		F = E - D;
	
	cout << "O JOGO DUROU " << C << " HORA(S) E " << F << " MINUTO(S)" <<"\n";
	
	cin >> A;
	 
	return 0;
}
