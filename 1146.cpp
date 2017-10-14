#include <iostream>
#include <iomanip>
#include <cmath>
     
using namespace std;
     
int main ()
{
	int n;
	
	while (cin >>n)
	{
		if (n>0)
		{
			for(int a =1;a<=n;a++)
			{
				if (a!= n)
					cout << a << " ";
				if (a == n)
					cout << a <<"\n";
			}
		}
		else
			return 0;
	}
     
}
