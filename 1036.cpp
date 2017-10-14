#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdio>
#include <cstdlib>
    
using namespace std;
    
int main ()
{
	double A,B,C,DELTA,R1,R2;
	
	cin >> A >> B >> C ;
	
	DELTA = pow (B,2) - 4* A * C ;
	
	if (DELTA < 0 || A == 0)
		cout << "Impossivel calcular\n";

	else{ 
		R1 = ( -B + sqrt(DELTA)) / (2 * A);
		R2 = ( -B - sqrt(DELTA)) / (2 * A);
		cout << "R1 = " << fixed << setprecision (5) << R1 << "\n";
		cout << "R2 = " << fixed << setprecision (5) << R2 << "\n";
	}
	
	return 0;
}
