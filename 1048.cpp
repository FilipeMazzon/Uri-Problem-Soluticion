#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <locale>  
   
using namespace std;
   
int main() 
{
    double slt;
    // salario total
    double vlg;
    //bonus ganho
    cin >> slt;
       
    if (slt >= 0 && slt<= 400)
    {
		vlg = slt * 15/100;
		slt = slt *1.15;
	    
	    cout << "Novo salario: " << fixed << setprecision(2) << slt << "\n";
	    cout << "Reajuste ganho: " << fixed << setprecision(2) << vlg << "\n";
	    cout << "Em percentual: " << fixed << setprecision(2) << "15" <<" %" << "\n";
    }
    else if (slt > 400 && slt <=800 )
     {
		 vlg = slt * 12/100;
		 slt = slt *1.12;
    
	    cout << "Novo salario: " << fixed << setprecision(2) << slt << "\n";
	    cout << "Reajuste ganho: " << fixed << setprecision(2) << vlg << "\n";
	    cout << "Em percentual: " << fixed << setprecision(2) << "12" <<" %" << "\n";
	}
    else if(slt > 800 && slt <=1200 )
    {
		vlg = slt * 10/100;
		slt = slt *1.1;
	    
	    cout << "Novo salario: " << fixed << setprecision(2) << slt << "\n";
	    cout << "Reajuste ganho: " << fixed << setprecision(2) << vlg << "\n";
	    cout << "Em percentual: " << fixed << setprecision(2) << "10" <<" %" << "\n";
    }
    else if (slt > 1200 && slt <=2000 )
    {
		vlg = slt * 0.07;
		slt = slt *1.07;
	    
	    cout << "Novo salario: " << fixed << setprecision(2) << slt << "\n";
	    cout << "Reajuste ganho: " << fixed << setprecision(2) << vlg << "\n";
	    cout << "Em percentual: " << fixed << setprecision(2) << "7" << " %" << "\n";
    }
    else if (slt > 2000 ) 
    { 
		vlg = slt * 4/100;
		slt = slt *1.04;
    
	    cout << "Novo salario: " << fixed << setprecision(2) <<slt << "\n";
	    cout << "Reajuste ganho: " << fixed << setprecision(2) << vlg << "\n";
	    cout << "Em percentual: " << fixed << setprecision(2) << "4" << " %" << "\n";
    }   
       
       
   
    return 0;
       
}
