#include <iostream>
#include <iomanip>
#include <cmath>
   
using namespace std;
   
int main ()
{
    int x,y;
	int z=0;
    
       
	while (cin >> x)
	{
		if(x == 0)
			return 0;
		else {
			if (x%2 != 0){
				y=x;
				y++;
				for(int a =1;a<=5;a++){
					z+=y;
					y+=2;
				}
			}
	
			if (x%2 == 0){
				y=x;
	
				for(int a =1;a<=5;a++){
				z+=y;
				y+=2;
				}
			}
			cout << z<< "\n";
			z=0; 
		}
	}
}
