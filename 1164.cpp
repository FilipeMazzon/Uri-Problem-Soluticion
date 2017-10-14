#include <iostream>
#include <iomanip>
#include <cmath>
  
using namespace std;
  
int main ()
{
	int x,s;
	 
	cin >> s;
	 
	while(s--){   
	    int a=0;
	    int b=1;
	    cin >> x;
	    for (;b<x;b++){
	        if (x%b==0)
	            a+=b;   
		}
	    if (a==x)
	        cout << x << " eh perfeito\n";
	    else
	        cout << x << " nao eh perfeito\n";     
	}
	return 0;
}
