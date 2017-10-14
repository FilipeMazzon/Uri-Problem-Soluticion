#include <iostream>
#include <iomanip>
#include <cmath>
       
using namespace std;
         
int main ()
{   
	double X,Y,M,Z;
 
	do{
	    cin >> X;
	    while(X < 0 || X > 10){ 
            cout << "nota invalida\n";
            cin >> X;
	    }
	    if ( X >=0 || X <=10)
	    {
	        cin >> Y;
	     
	        while (Y < 0 || Y >10 )
            {
                cout << "nota invalida\n";
                cin >> Y;
            }
	        if (Y >=10 || Y <= 10)
            {
                M= (X+Y)/2;
                cout << "media = " <<fixed << setprecision(2) << M << "\n";
            }
	    }
	    cout << "novo calculo (1-sim 2-nao)\n";
	    cin >> Z;
	    while (Z != 1 && Z !=2)
        {   
            cout << "novo calculo (1-sim 2-nao)\n";
            cin >> Z;
        }
		if(Z == 2)
			return 0;

	}
	while (Z == 1);
	  
 
	
	return 0;
}
