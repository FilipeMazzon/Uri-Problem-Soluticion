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
	int y;
	int k = 5;
	for (int x = 1; x < 10; x+=2)
	{ 
		k = k +2;
		for (int y = k;y>k-3; y--)
		{
			cout << "I=" << x << " J=" << y << "\n";	
		}
	}
	return 0;
}
