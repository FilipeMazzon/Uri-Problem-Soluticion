#include <bits/stdc++.h>

using namespace std;

int main()
{
	int x,soma;
	while(cin >>x && x){
		soma=0;
		for(int i=0;i<=x;i++){
			soma+= pow(i,2);
		}
		cout << soma << "\n";
	}
}
