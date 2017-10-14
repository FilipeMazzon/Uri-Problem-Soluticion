#include <iostream>
#include <iomanip>
#include <cmath>
     
using namespace std;
     
int main ()
{
    int N;
    
    int num1=1;
    int num2=1;
    int num3=1;
     
    cin >> N;
        
	for (int i = 1;i<=N;i++){
	
	    cout << num1 << " " << num2 << " " << num3 << "\n";
	    
	    num2 ++;
	    num3 ++;
	    
	    cout << num1 << " " << num2 << " " << num3 << "\n";
	   
		num1++;
		num2 = pow (num1,2);
	    num3 = pow(num1,3);
	}
	return 0;
}
