#include <iostream>
#include <iomanip>
#include <cmath>
#include <string.h>

using namespace std;

int main()
{
	int x;
	cin >> x;
	
	for (int a=1;a<=x; a++){
		if (a!=x)
			cout << "Ho ";	
		else if (a==x)
			cout <<"Ho!\n"; 
	}
}
