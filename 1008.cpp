#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main () {
	
	int numeroDeFuncionario,numeroDeHorasTrabalhadas;
	float valorhora,SALARIO;
	
	cin >> numeroDeFuncionario>>numeroDeHorasTrabalhadas>>valorhora;
	
	SALARIO= numeroDeHorasTrabalhadas * valorhora;
	
	cout << "NUMBER = "<< numeroDeFuncionario << endl;
	
	cout << "SALARY = U$ " <<  fixed << setprecision(2) << SALARIO << endl;

}
