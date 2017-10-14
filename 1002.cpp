#include <iostream>
#include <iomanip>
using namespace std;


double pow(double x,double y){
	if (y==0) return 1;
	if(y==1) return x;
	return(x*pow(x,y-1));
}

double aReaDoCirculo(double pi, double raio){
	return pi*(pow(raio,2));
}


int main(int argc, char** argv) {

   double raio , pi , area;

   pi = 3.14159;

   cin >> raio;

   cout << fixed << setprecision (4) ;
   cout << "A=" << aReaDoCirculo(pi,raio) << endl;

     
	return 0;
}
