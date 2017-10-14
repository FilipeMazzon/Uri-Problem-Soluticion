#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main ()
{
	int n;
	
	cin >> n;
	
	while (n--){
		int x,y;
		int carlos,rafael,beto;
		
		cin >> x>>y;
		
		rafael = pow (3*x,2) +pow (y,2);
		beto = 2*pow(x,2)+ pow (5*y,2);
		carlos =  pow(y,3)-100*x;
		
		if (rafael > beto && rafael > carlos)
			cout << "Rafael ganhou\n";
		if (beto > rafael && beto > carlos)
			cout << "Beto ganhou\n";
		if (carlos > beto && carlos > rafael)
			cout << "Carlos ganhou\n";		
	}
	return 0;
}
