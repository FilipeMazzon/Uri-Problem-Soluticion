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
	int n05;
	int n025;
	int n01;
	int n005;
	int n001;
	
	
	
	double N;
	cin >>	N;
	
	
	n100= N / 100;
	n50= (N - n100* 100) / 50;
	n20= (N - n100* 100 - n50 *50)/20;
	n10 = (N - n100* 100 - n50 *50 - n20 *  20)/10;
	n5 = (N - n100* 100 - n50 *50 - n20 *  20 - n10 * 10)/ 5;
	n2= (N -  n100* 100 - n50 *50 - n20 *  20 - n10 * 10 - n5*5 ) /2;
	n1= (N -  n100* 100 - n50 *50 - n20 *  20 - n10 * 10 - n5*5 - n2*2 );
	n05 =  (N -  n100* 100 - n50 *50 - n20 *  20 - n10 * 10 - n5*5 - n2*2 - n1)/0.5;
	n025= (N -  n100* 100 - n50 *50 - n20 *  20 - n10 * 10 - n5*5 - n2*2 - n1 - n05*0.5 ) /0.25;
	n01 = (N -  n100* 100 - n50 *50 - n20 *  20 - n10 * 10 - n5*5 - n2*2 - n1 - n05*0.5- n025*0.25 ) /0.1;
	n005 = (N -  n100* 100 - n50 *50 - n20 *  20 - n10 * 10 - n5*5 - n2*2 - n1 - n05*0.5- n025*0.25- n01*0.1)/ 0.05;
	n001= (N -  n100* 100 - n50 *50 - n20 *  20 - n10 * 10 - n5*5 - n2*2 - n1 - n05*0.5- n025*0.25- n01*0.1- n005*0.05)/ 0.01;
	
	
	
	cout <<  "NOTAS:" <<  "\n";
	cout << n100 << " nota(s) de R$ 100.00" << "\n";
	cout << n50 << " nota(s) de R$ 50.00"<< "\n";
	cout << n20 << " nota(s) de R$ 20.00"<< "\n";
	cout << n10 << " nota(s) de R$ 10.00" << "\n";
	cout << n5 << " nota(s) de R$ 5.00" << "\n";
	cout << n2 << " nota(s) de R$ 2.00" << "\n";
	cout << "MOEDAS:" << "\n";
	cout << n1 << " moeda(s) de R$ 1.00" << "\n";
	cout << n05 << " moeda(s) de R$ 0.50" << "\n";
	cout << n025 << " moeda(s) de R$ 0.25" << "\n";
	cout << n01 << " moeda(s) de R$ 0.10" << "\n";
	cout << n005 << " moeda(s) de R$ 0.05" << "\n";
	cout << n001 << " moeda(s) de R$ 0.01" << "\n";
	
	return 0;

}
