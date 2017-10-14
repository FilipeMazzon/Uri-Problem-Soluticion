#include <iostream>
#include <iomanip>
#include <cmath>
#include <string.h>
using namespace std;

int main()
{
	int x,y,z;
	int um,dois;

	while (cin>>x){
		um=0;
		dois=0;
		if(x==0){
			return 0;
		}
		while(x--){
			cin >> y>> z;
			
			if (y>z){
				um++;
			}
			if(y<z){
				dois++;
			}
		}
		cout << um << " " << dois << "\n";
	}
	
}
