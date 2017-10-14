#include<bits/stdc++.h>

using namespace std;

int main()
{
	int p, j1, j2, r, a,resp;
	cin>>p>>j1>>j2>>r>>a;
	if(p==0)
		resp=1;
	else
		resp=0;
	
	if(r==1 && a!=1)
		cout<<"Jogador 1 ganha!\n";
	else if(r==1 && a==1)
		cout<<"Jogador 2 ganha!\n";
	else if((j1+j2)%2==resp)
		cout<<"Jogador 1 ganha!\n";
	else
		cout<<"Jogador 2 ganha!\n";
}
