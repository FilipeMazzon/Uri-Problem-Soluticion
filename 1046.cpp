#include <iostream>
   
using namespace std;
   
int main() 
{
	int A,B,C;
	
	cin>> A>>B;
	
	if (A==B)
		C= 24;
	else if(A > B)
		C = B + (24 - A);
	else if (A < B)
		C = B - A;	
	
	cout << "O JOGO DUROU " << C << " HORA(S)" << "\n";
	
	return 0;
}
