#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <locale>   
#include <cstdlib>
          
using namespace std;
             
int main ()
{
	int Num,resultado;
	cin >> Num;
 
	for(int numPar = 2 ;numPar <= Num;numPar+=2)
	{
		resultado= numPar * numPar;
		cout << numPar << "^2 = " << resultado << "\n";
	
	}
}	
