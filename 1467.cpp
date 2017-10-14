#include <iostream>
#include <iomanip>
#include <cmath>
#include <string.h>
using namespace std;

int main()
{
	int x,y,z;
	
	while (cin>>x>>y>>z){
		if(x==y && x==z){
			cout << "*\n"; 
		}
		if (x!=y && x!=z){
			cout << "A\n";
		}
		if (y!=x && y!=z){
			cout << "B\n";
		}
		if (z!=y && z!=x){
			cout << "C\n";
		}
	}
	
}
