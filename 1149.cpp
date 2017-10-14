#include <iostream>
#include <iomanip>
#include <cmath>
   
using namespace std;
   
int main ()
{
	int n,x,y,z=0;
	
    cin >> x>> y;
    while(y<=0){
    	cin >>y;
	}
    for(int a =1;a<=y;a++)         
	{
        z+=x;
    	x++;
    }
    cout << z << "\n";
    
    return 0;

}
