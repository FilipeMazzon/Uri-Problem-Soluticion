#include <iostream>
#include <iomanip>
#include <cmath>
      
using namespace std;
        
int main ()
{   
	double X,Y,M;
	cin >> X;
	
	while( X < 0 || X > 10){ 
		cout << "nota invalida\n";
		cin >> X;
	}
	if ( X >=0 || X <=10){
		cin >> Y;
		while (Y < 0 || Y >10 ){
			cout << "nota invalida\n";
			cin >> Y;
		}
		if (Y >=10 || Y <= 10){
			M= (X+Y)/2;
			cout << "media = " << M << "\n";
		}
	}	
    return 0;
}
