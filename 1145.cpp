#include <iostream>
#include <iomanip>
#include <cmath>
        
using namespace std;
        
int main ()
{
    int x,y;    
    cin >> x>>y;
	           
	for (int i = 1;i<=y;i+=1){
	    if(i != y && i%x != 0)
	        cout << i << " ";
	   else
	        cout << i << "\n";
	}
return 0;
}
