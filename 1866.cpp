#include <iostream>
#include <iomanip>
 
#include <cmath>
 
using namespace std;
 
int main (){
	int x,s;
	
	cin >> s;
	
	while(s--){
		cin >> x;
		if ((x%2)== 0)
		    cout << "0" << "\n";
		if ((x%2) != 0)
		    cout << "1" << "\n";	
	}
	return 0;
}
