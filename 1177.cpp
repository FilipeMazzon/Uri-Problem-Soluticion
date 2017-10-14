#include <iostream>
 
 
using namespace std;
 
 
int main()
{
    int N[1000],t;
     
    cin >>t;
    for(int f=0;f<=1000;){
        for(int e=0;e <t;e++){
        	if(f==1000)
				return 0;
	        N[f]= e;
	        cout <<"N["<< f << "] = " << N[f] <<"\n";
	        f++;
        }
         
    }
}
