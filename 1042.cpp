#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <locale> 
#include<stdlib.h>  
   
using namespace std;
int main ()
{
	int x,y,z;
	cin >>x>>y>>z;
	
	if (x > y && x > z)
	{    
		if (y > z)
		{     
			cout << z << endl;
			cout << y << endl;
			cout << x << endl;
			cout << "\n";
	
		}
		else if (z > y)  
		{
			cout << y << endl;
			cout << z << endl;
			cout << x << endl;
			cout << "\n";
		}
	}
	else if (y > x && y > z)
	{
		if ( x > z )
		{    
			cout << z << endl;
			cout << x << endl;
			cout << y << endl;
			cout << "\n";
		}
		else  if ( z > x)
		{ 
			cout << x << endl;
			cout << z << endl;
			cout << y << endl;
			cout << "\n";
		}
	}
	else if (z > x && z > y)
	{
		if (x > y)
		{  
			cout << y << endl;
			cout << x << endl;
			cout << z << endl;
			cout << "\n";
		}
		else if (y > x)
		{
			cout << x << endl;
			cout << y << endl;
			cout << z << endl;
			cout << "\n";
		}
	}
	cout << x << endl;
	cout << y << endl;
	cout << z << endl;

return 0;
}
