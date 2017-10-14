#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <locale>   
    
using namespace std;
       
int main ()
{
	double X;
	cin >> X;
	
	if(X <= 2000){
		cout << "Isento\n";
	}
	if (X > 2000 && X <= 3000){
		X= (X -2000) * 0.08;
		cout <<"R$ "<<fixed << setprecision(2)<< X << "\n";
	}
	else if (X > 3000 && X <= 4500){   
		X= (X-3000) * 0.18 + (1000 *0.08);
		cout <<"R$ "<<fixed << setprecision(2)<< X << "\n";
	}
	else if (X > 4500){     
		X= (X -4500) * 0.28 + (1000 *0.08) + (1500 * 0.18);
		cout <<"R$ "<<fixed << setprecision(2)<< X << "\n";
	}
	
	return 0;
}
