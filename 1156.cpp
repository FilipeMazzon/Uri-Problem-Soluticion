#include <iostream>
#include <iomanip>
#include <cmath>
      
using namespace std;
      
int main ()
{
	double s =1;
	double n=2.0;
   
    for (int a = 3;a<=39;a+=2){
		s = s + a/n;
		n=2*n;
	} 
	cout <<fixed << setprecision(2) << s << "\n";      
}
