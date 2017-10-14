#include <iostream>
#include <iomanip>
#include <cmath>
     
using namespace std;
       
int main ()
{   int alcool,gasolina,diesel,x;
     
    alcool = 0;
    gasolina = 0;
    diesel = 0;

    while (cin >> x){
        if (x==1)
            alcool+=1;          
        if (x==2)
            gasolina++;    
        if (x==3)
            diesel++;           
        if (x==4)
        {   
			cout << "MUITO OBRIGADO" << "\n" ;
			cout << "Alcool: " << alcool << "\n";
			cout << "Gasolina: " << gasolina << "\n";
			cout << "Diesel: " << diesel << "\n";
			break; 
        }
    }
 
     
     
}
