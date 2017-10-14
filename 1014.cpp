#include <iostream>
#include <iomanip>
#include <cmath>
   
using namespace std;

double consumoMedio (int distanciaPercorrida,double combustivelGasto){
	return distanciaPercorrida/combustivelGasto;
}

   
int main (){
	int distanciaPercorrida;
	//distancia percorrida
	double combustivelGasto;
	//combustivel gasto
	cin >> distanciaPercorrida>>combustivelGasto;
	
	cout << fixed << setprecision(3) << consumoMedio(distanciaPercorrida,combustivelGasto) << " km/l"<< endl;
	
	return 0;
}
