#include <bits/stdc++.h>
 
using namespace std;
 
int main ()
{
    int a,b,c,d,e[1001],t;

    
    cin >> a;
    
    
    while (a--){
    	double var =0,media=0,t=0;
    	
    	memset(e, 0, sizeof(e));
    	
        cin >> d;
		for (int f=0; f < d; f++){
           	cin >> e[f];
            t += e[f];
		}
		cout << fixed << setprecision(3); 
        media = t/d;
        
        for (int f=0; f < d; f++){
	        if (e[f] > media)
	        {
	        	var++;  
	        }
		}
        var /= d;
        var *= 100;
         
        cout << var << "%\n";
    }
}
