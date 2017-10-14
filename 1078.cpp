#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <locale>   
    
using namespace std;
       
int main ()
{
	int N,Y,U;
	cin >>N;
	for(int Y=1;Y <= 10; Y++)
	{
		U= N * Y;
		cout << Y << " x " << N << " = " << U << "\n";
	} 	
	return 0;
}
