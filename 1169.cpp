#include <bits/stdc++.h>
  
using namespace std;
  
int main()
{
    unsigned long long int x,t,z;
    int n;
  
    cin >>n;
    while(n--){
        t=1;
        z=1;
        cin >>x;
	    if(x==64)
	    	cout <<"1537228672809129 kg\n";
		else {
			while(x--)
				z*=2;         
			z/=12000;
			cout << z << " kg\n"; 
	    }
	}
}
