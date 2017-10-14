#include <iostream>
#include <iomanip>
#include <cmath>
  
using namespace std;
  
int main (){
	int n100;
	int n50;
	int n20;
	int n10;
	int n5;
	int n2;
	int n1;
	
	int N;
	cin >>	N;
	
	
	n100= N / 100;
	n50= N % 100 / 50;
	n20= N% 100 %50 /20;
	n10 = N % 100 % 50 % 20 /10;
	n5 = N % 100 % 50 % 20 % 10 / 5;
	n2= N % 100 % 50 % 20 %10 % 5 /2;
	n1= N % 100 % 50 % 20 %10 % 5 %2;
	
	cout <<  N <<  "\n";
	cout << n100 << " nota(s) de R$ 100,00" << "\n";
	cout << n50 << " nota(s) de R$ 50,00"<< "\n";
	cout << n20 << " nota(s) de R$ 20,00"<< "\n";
	cout << n10 << " nota(s) de R$ 10,00" << "\n";
	cout << n5 << " nota(s) de R$ 5,00" << "\n";
	cout << n2 << " nota(s) de R$ 2,00" << "\n";
	cout << n1 << " nota(s) de R$ 1,00" << "\n";
	
	return 0;

}
