#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdio>
#include <cstdlib>
  
using namespace std;

double distancia(double pontoX1,double pontoY1,double pontoX2,double pontoY2){
	return sqrt (pow (pontoX2 - pontoX1,2) + pow (pontoY2 - pontoY1,2));
}

  
int main ()
{
	double pontoX1,pontoY1,pontoX2,pontoY2;
		
	cin >> pontoX1 >> pontoY1 >> pontoX2 >>pontoY2;
	
	distancia = sqrt (pow (x2 - x1,2) + pow (y2 - y1,2));
	
	cout << fixed << setprecision(4) << distancia(pontoX1,pontoY1,pontoX2,pontoY2) << endl;
	
	return 0;
}

