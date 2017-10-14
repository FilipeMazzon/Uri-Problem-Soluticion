#include <iostream>
#include <iostream>
#include <iomanip>
#include <cmath>
       
using namespace std;
       
int main ()
{
	int x,y,z;
	
	cin >> x>>y>>z;
	
	if (x>y && y<=z)
		cout << ":)\n";
	else if (x<y && y>z)
		cout << ":(\n";
	else if (x<y && y<z && ((y-x)>(z-y)))
		cout << ":(\n";
	else if (x<y && y<z && ((y-x)<=(z-y)))
		cout << ":)\n";
	else if (x>y && y>z && ((x-y)>(y-z)))
		cout << ":)\n";
	else if (x>y && y>z && ((x-y)<=(y-z)))
		cout << ":(\n";
	else if (x==y && y<z)
		cout << ":)\n";
	else 
		cout << ":(\n";
	return 0;   
} 
