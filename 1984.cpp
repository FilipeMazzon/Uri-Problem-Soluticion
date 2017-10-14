#include <bits/stdc++.h>


using namespace std;


int main()
{
	char a[20],b[20];
	int x;
	cin>>a;
	x=strlen(a);
	
	for(int i=0;i<x;i++){
		b[i] =a[x-i-1];
	}
	
	for(int i =0;i<x;i++){
		cout << b[i];
	}
	cout << "\n";
	
}
