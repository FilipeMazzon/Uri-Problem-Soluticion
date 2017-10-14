#include <iostream>
#include <iomanip>
#include <cmath>
      
using namespace std;
      
int main ()
{
      
	long double s =0;
	for (int a = 1;a<=100;a++)
		s = s + 1.0/a;
	
	
	cout <<fixed << setprecision(2) << s << "\n";      

      
}
