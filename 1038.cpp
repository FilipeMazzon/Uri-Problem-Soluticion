#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <locale>   
 
using namespace std;
    
int main ()
{
	int x,qt;
	double pt;
	cin >> x;
	if(x >= 1 && x<=5)
	{
		if(x == 1)
		{ 
			cin >> qt;
			pt = 4 * qt;
			cout << "Total: R$ " << fixed << setprecision(2) << pt << endl;
		}
		if (x == 2){
		cin >> qt;
		pt = 4.5 * qt;
		cout << "Total: R$ " << fixed << setprecision(2) << pt << endl;
	}
	if (x == 3)	{
		cin >> qt;
		pt = 5 * qt;
		cout << "Total: R$ " << fixed << setprecision(2) << pt << endl;
	}
	if (x == 4){
		cin >> qt;
		pt = 2 * qt;
		cout << "Total: R$ " << fixed << setprecision(2) << pt << endl;
	}
	if (x == 5){
		cin >> qt;
		pt = 1.5 * qt;
		cout << "Total: R$ " << fixed << setprecision(2) << pt << endl;
	}
	
	
}
	return 0;
}
