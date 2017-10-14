#include <iostream>
#include <iomanip>
#include <cmath>
     
using namespace std;
     
int main ()
{
    int p,n,r,t,soma=0;

	while (cin >> p >>r){	
		if(p>0 && r >0){
		soma =0;
		if (p>=r){
			n=p;
			t=r;
		} 
		if (p<r){
			n =r;
			t= p;	
		}
	  	for(int a =t;a<=n;a++){
			cout << a << " ";
	   		soma +=a;
	    }

	    cout <<"Sum="<< soma << "\n";
      }
	  else 
		return 0;
	}
}
