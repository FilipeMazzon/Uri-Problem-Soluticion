#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdio>
#include <cstdlib>
  
using namespace std;
  
double distancia(int tempoDeViagem,int velocidadeMedia){
	return velocidadeMedia * tempoDeViagem;
}

double litros(int tempoDeViagem,int velocidadeMedia){
	return	distancia(tempoDeViagem,velocidadeMedia)/12;
}

int main ()
{
	int tempoDeViagem, velocidadeMedia;
	
	cin >> tempoDeViagem >>velocidadeMedia;
	
	cout << fixed << setprecision(3) << litros(tempoDeViagem,velocidadeMedia) << endl;
	return 0;
}
