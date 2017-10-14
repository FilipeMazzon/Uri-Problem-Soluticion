#include <iostream>
#include <iomanip>
#include <cmath>
     
using namespace std;
     
int main (){
    int T,A,B;
    int anos= 0;
    double C;
    double D;
       
    cin >> T;
     
	for (int i = 0;i <T;i++){
	    anos =0;
	    cin >> A;
	    cin >> B;
	    cin >> C;
	    cin >> D;
	     
		
		while (A <= B){
		
			A = A + (A*C)/100;
			B = B + B*D/100;
			
			anos+=1;
			if(anos>100)
				break;		
		}
        if (anos> 100){
			cout << "Mais de 1 seculo.\n";
			continue;
        }
       	else {
			cout << anos << " anos.\n";
			continue;   
        }     
	}
return 0;
}
