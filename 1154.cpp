#include <iostream>
#include <iostream>
#include <iomanip>
#include <cmath>
        
using namespace std;
        
int main ()
{
    int x;
    double s,a=0,b=0;
     
    while (cin >> x)
    {
        if (x>0)
        {           
            b+= x;
            a++;            
        }
        else
        {
            s = b/a;
            cout <<fixed << setprecision(2)<< s << "\n";
            return 0;
        }   
    }     
} 
