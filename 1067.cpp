#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <locale>   
  
using namespace std;
     
int main ()
{
  int X,Y;
	cin >> X;
	if (X >= 1 && X <= 1000)
	{ 
		Y = 1;
		cout << Y << endl;
		while (X >= Y){
			Y += 2;
			if (Y<= X)
				cout << Y << endl;
		}
	}
return 0;
}
