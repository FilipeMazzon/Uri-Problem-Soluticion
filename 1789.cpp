#include <iostream>
#include <iomanip>
#include <cmath>
#include <string.h>

using namespace std;

int main(){
	int x,y,aba;

	while (cin >>x){
		int t=0;
		while (x--){
			cin >> y;
			if(y>t){
				t=y;
			}
		
		}
		if(t <10){
			aba=1;
		}
		if (t>=10 && t <20){
			aba =2;
		}
		if (t>=20){
			aba =3;
		}
		cout << aba << "\n";
		
	}
}
