#include <iostream>
#include <iomanip>
#include <cmath>
   
using namespace std;
   
int main ()
{
    int x,y,a,b;
      
    cin >> x;
    cin >> y;
  
	if(y >0)	
		a= floor(((double)(x))/y);
	else
		a= ceil (((double)(x))/y);
       
	b = x - a*y;
	
	cout << a << " " << b<< "\n";    
	return 0;
}
