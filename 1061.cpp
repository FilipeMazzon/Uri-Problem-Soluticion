#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <locale>  
     
using namespace std;
     
int main() 
{
	int A,B,C,D,E,F,dia1,dia2,seg,seg1,dias,segt;
	string dia;
	
	
	cin >> dia>>dia1>>A>>dia>>D >> dia >>seg>>dia >>dia2>>B>>dia>>E>>dia >>seg1;
	
	
	
	if (dia1==dia2)
		dias = 0;
	if (dia2 > dia1)
		dias = dia2- dia1;
	
	if (A==B)
		C= 0;
	if(A > B)
	{
		C = B + (24 - A);
		dias = dias-1;
	}
	if (A < B)
		C = B - A;

	if (D == E)
		F= 0;
	if (D > E)
	{
		F = E +(60-D);
		C= C - 1;
	}
	if (D < E)
		F = E - D;
	if (seg == seg1)
		segt= 0;  
	if (seg > seg1){
		segt = seg1 + (60-seg);
		F = F -1;
	}
	if (seg < seg1)
		segt =seg1 -seg;
    
 

	cout << dias << " dia(s)" << "\n";
	cout << C << " hora(s)" << "\n";
	cout << F << " minuto(s)" << "\n";
	cout << segt << " segundo(s)" << "\n";
	  
	   
	return 0;
}
