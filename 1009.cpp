#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double salarioTotal(double salarioFixo,double numeroDeVenda){
	return salarioFixo + 0.15 * numeroDeVenda;
}

int main () 
{
	string nomeDoVendedor;//inutil ...
	double salarioFixo,numeroDeVenda;
	cin >> nomeDoVendedor>>salarioFixo>>numeroDeVenda;
	cout << "TOTAL = R$ " << fixed << setprecision (2) << salarioTotal(salarioFixo,numeroDeVenda) << endl;
}
