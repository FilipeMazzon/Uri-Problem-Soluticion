#include <iostream>
#include <iomanip>
#include <cmath>
   
using namespace std;
     
int main() 
{
	int N;
	cin >> N;
	while (N--){
	
		double X, Y;
		double c;
		
		cin >> X >> Y;
		
		if(Y == 0)
		cout << "divisao impossivel" << "\n";
		else {
			c = X/Y;
			cout << fixed << setprecision(1) << c << "\n";
		}
	}
  
	return 0;
}
