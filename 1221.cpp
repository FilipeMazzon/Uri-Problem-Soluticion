#include <iostream>
#include <iomanip>
#include <cmath>
     
using namespace std;
     
int main () 
{
	int number;
	int lol;
	int count;
	cin >> aux;

	for(int b =1; b <= aux;b++){
		cin >> number;
		count=0;

		for(int a=2 ;a < sqrt(number);a+=1){ 
			
			if ((number%a) == 0)	
				count ++;
			
		}
		if (count == 0)
			cout <<"Prime\n";	
		else
			cout << "Not Prime\n";



}
return 0;

}
