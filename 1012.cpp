#include <iostream>
#include <iomanip>
   
using namespace std;

double pow(double x,double y)//tambem podendo incluir a biblioteca cmath 
{
	if (y==0) return 1;
	if(y==1) return x;
	return(x*pow(x,y-1));
}

double areaDoTriangulo(double base,double altura){
	return (base * altura)/2;
} 
double areaDoCirculo(double pi,double altura){
	return pi * pow(altura,2);
}
double areaDoTrapezio(double base,double baseMaior,double altura ){
	return ((base + baseMaior) * altura)/2;
}
double areaDoQuadrado(double baseMaior){
	return pow(baseMaior,2);
}
double areaDoRetangulo(double base,double baseMaior){
	return base * baseMaior;
}
int main () 
{
	
	double base,baseMaior,altura; 
	
	double pi = 3.14159;
	
	cin >> base>>baseMaior>>altura;
	
	
	cout << "TRIANGULO: " << fixed << setprecision(3) << areaDoTriangulo(base,altura) << endl;
	cout << "CIRCULO: " << fixed << setprecision(3) << areaDoCirculo(pi,altura) << endl;
	cout << "TRAPEZIO: " << fixed << setprecision (3)  << areaDoTrapezio(base,baseMaior,altura) << endl;
	cout << "QUADRADO: " << fixed << setprecision (3) << areaDoQuadrado(baseMaior) << endl;
	cout << "RETANGULO: " << fixed << setprecision (3) << areaDoRetangulo(base,baseMaior)  << endl;
	return 0;
}
