#include <bits/stdc++.h>

using namespace std;

int main()
{
	int x,y,z=0,var=0;
	
	cin >>x>> y;
	while(x>=y){
		cin >>y;
	}

	while(z<=y){
		if(z<x){
			z=x;
			var++;
		}
		else{
			for(int i=1;z<=y;i++){
				z+=(x+i);
				var++;
			}
		}	
	}
	cout << var << "\n";
}
