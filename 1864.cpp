#include <bits/stdc++.h>

using namespace std;

int main ()
{
	char x[34]= {'L','I','F','E',' ','I','S',' ','N','O','T',' ','A',' ','P','R','O','B','L','E','M',' ','T','O',' ','B','E',' ','S','O','L','V','E','D'};
	int y;
	string soma;
	cin >>y;
	for(int i =0;i<y;i++){
		soma+=x[i];
	}
	cout << soma << "\n";
}
