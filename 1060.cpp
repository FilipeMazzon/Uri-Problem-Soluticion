#include <iostream>
   
using namespace std;
      
int main ()
{
	double a;
	int var=0,lol=6;
	
	while(lol--)
	{
		cin >>a;
		if(a>0)
			var++;
	}
       
	cout << var <<" valores positivos\n";
 
 
                  
	return 0;
}
