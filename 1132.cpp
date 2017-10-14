#include <iostream>
#include <iomanip>
#include <cmath>


using namespace std;
  
int main () 
{	int z,y,cn =0;
	cin >> z >> y;
		
	if (z<y){
		for (int a= z; a <= y;a++){
			if(a%13 != 0)
				cn+=a;
		}
	}
	else{
		for (int a= y; a <= z;a++){ 
			if(a%13 != 0)
				cn+=a;		
		}
	}
 
	cout << cn << "\n";
}	
