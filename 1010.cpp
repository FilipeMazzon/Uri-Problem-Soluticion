#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main () 
{
	int codigoDaPeca1;
	//codigo da peça 1
	int numeroDePeca1;
	// numero da peça 1
	double valorUnitarioPeca1;
	//valor unitario de cada peça 1
	int codigoDapeca2;
	//codigo da peça 2
	int numeroDePeca2;
	// numero da peça 2
	double valorUnitarioPeca2;
	//valor unitario de cada peça 2
	
	double valorAPagar1;
	//valor a pagar 1 
	double valorAPagar2;
	//valor a pagar 2
	double valorPagoTotal;
	//valor pago no total
	
	cin >> codigoDaPeca1>>numeroDePeca1>>valorUnitarioPeca1; //entrada de todas as informações da peça 1
	cin>> codigoDapeca2 >> numeroDePeca2>>valorUnitarioPeca2;//entrada de todas as informações da peça 2
	
	valorAPagar1 = numeroDePeca1 * valorUnitarioPeca1;
	valorAPagar2 = numeroDePeca2 * valorUnitarioPeca2;
	
	valorPagoTotal = valorAPagar1 + valorAPagar2;
	
	cout << "VALOR A PAGAR: R$ " << fixed << setprecision (2) << valorPagoTotal << endl;
	return 0;
}
