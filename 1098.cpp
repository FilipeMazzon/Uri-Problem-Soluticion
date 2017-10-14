#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <locale>   
#include <cstdlib>
             
using namespace std;
                
int main ()
{
	double n1;
	double n2;
	int q =10;

    for (int x = 0; x <= 20; x+= 2)
    { 	
    
    	n1= x/10.0;
    	
        
       
        for (int y = q;y<q+30; y+=10)
        {
   			double k;	
   			k= n1+ y/10.0;		
            cout << "I=" << n1 << " J=" << k << "\n";
       
        }
    }
    return 0;
}
