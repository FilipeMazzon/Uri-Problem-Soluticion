#include <iostream>
    
using namespace std;
    
int main() {
    
	int num,num1;

	while (cin >> num>> num1)   {
		unsigned long long int factoriall =1,factorial =1,soma;
		for(int a =1;a <=num;a++)
			factorial =factorial *a;
		for (int b=1; b <=num1;b++)
			factoriall = factoriall * b;
		
		soma = factorial +factoriall;
		cout << soma << "\n";
	}
}
