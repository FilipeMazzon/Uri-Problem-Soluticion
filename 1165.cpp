#include <iostream>
#include <iomanip>
#include <cmath>
    
using namespace std;
    
int main () 
{
	int number;
	int Quantidade;
	int count;
	cin >> Quantidade;
	
	for(int b =1; b <= Quantidade;b++)
	{
		cin >> number;
		count=0;
		for(int a=2 ;a <=number;a++)
		{ 
			if ((number%a) == 0)
				count ++;
		}
		if (count == 1)
			cout << number << " eh primo\n";
		else
		cout << number << " nao eh primo\n";
	}
	return 0;
        
}
