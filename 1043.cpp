#include <iostream>
#include <iomanip>
#include <cmath>
  
using namespace std;
  
double perimetro(double A,double B,double C){
	return A + B +C ;
}  
double area(double A,double B,double C){
	return ((A+B)*C)/2;
} 
int main () 
{
	double A , B , C;
	cin >> A >> B >> C;
 
	if ((B < A + C) && (C < A+B)   &&  ( A < B+C))
    {
	    cout << "Perimetro = " << fixed << setprecision(1) << perimetro(A,B,C) << endl;
	}
	else
	{
	    cout << "Area = " << fixed << setprecision(1) << area(A,B,C) << endl;
	}
	 
return 0;
}

