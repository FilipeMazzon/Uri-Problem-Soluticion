#include <iostream>
#include <iomanip>
#include <cmath>
  
using namespace std;
  
int tempo(int distancia){
	return distancia*2;
}

int main (){
	int distancia;
	cin>>distancia;
	cout << tempo(distancia)<< " minutos"<<endl;
	return 0;
}
