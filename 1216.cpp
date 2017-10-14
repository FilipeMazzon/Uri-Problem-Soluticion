#include <iostream>
#include <iomanip>
#include <cmath>
#include <string.h>
using namespace std;

int main()
{
	char b[100];
	double x,sm=0,qt=0;
	
	while (cin.getline(b,100)){
		cin >>x;
		getchar();
		sm= sm+x;
		qt++;
	}
	
	sm=sm/qt;
	
	cout << fixed << setprecision(1) << sm << "\n";
	
}
