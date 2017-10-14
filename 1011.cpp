#include <iostream>
#include <iomanip>
using namespace std;

double pow(double x,double y)//tambem podendo incluir a biblioteca cmath 
{
	if (y==0) return 1;
	if(y==1) return x;
	return(x*pow(x,y-1));
}
 
int main() 
{
  
   double pi , VOLUME;
   double raio;
  
    pi = 3.14159;
  
   cin >> raio;
  
   VOLUME = (4/3.0) * pi * pow(raio,3);
   cout << fixed << setprecision (3);
   cout << "VOLUME = " << VOLUME << endl;
  
       
    return 0;
}
