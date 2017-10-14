#include <bits/stdc++.h>

using namespace std;

int main ()
{
	int x,aux,u=1;
	vector<int> y;
	cin >> x;
	for(int i=0;i<x;i++){
		cin >> aux;
		y.push_back(aux);
	}
	sort(y.begin(),y.end());
	for(int b=0;b<y.size();b++){
		if(y[b]==y[b+1]){
			u++;
		}
		else{
			cout << y[b] << " aparece " << u << " vez(es)\n";
			u=1;
		}
	}
	
}
