#include <iostream>
#include <iomanip>
#include <cmath>
#include <string.h>
using namespace std;

int main()
{
	int x,y,z;
	
	while (cin>>x>>y){
		if(x==0 && y==0){
			return 0;
		}
		else{
			z=x+y;
			cout << z << "\n";
		}	
	}
	
}
