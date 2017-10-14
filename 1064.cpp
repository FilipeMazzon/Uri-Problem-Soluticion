#include <iostream>
#include <iomanip>
        
using namespace std;
           
int main (){
	int var=0;
	double lol,total,number;
	lol= 0;
	int ee=6;
  
	while(ee--)
	{
	    cin >> number;
	      
	    if(number>0)
	    {
	        var++;
	        lol+=number;
	    }
	}
          
	total = lol/var;     
	            
	cout <<fixed << setprecision(1)<< var <<" valores positivos\n" << total << "\n";
	      
	return 0;
}
