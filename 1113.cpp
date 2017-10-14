#include <iostream>
#include <iomanip>
#include <cmath>
     
using namespace std;
       
int main ()
{   
	int X,Y;
    
    while (true){ 
		cin >> X>>Y;
		
		if (X < Y)
			cout << "Crescente" << "\n";
		if (X > Y)
			cout << "Decrescente"<< "\n";	
		if ( X == Y)
			break;
	}
}
