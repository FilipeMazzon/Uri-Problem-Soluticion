#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <locale>   
  
using namespace std;
     
int main ()
{
	int X,Y;
	cin >> X;

	if (X % 2 != 0){
		Y= X;
		cout << Y << endl;
	
		while (Y <= X + 8){
			Y += 2;
			cout << Y << endl;
		}
	}
	if (X %2 == 0){  
		Y= X+1;
		cout << Y << endl;
		while (Y <= X + 10){
			Y += 2;
			cout << Y << endl;
		}
	}
       
          
return 0;
}
