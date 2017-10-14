#include<bits/stdc++.h>


using namespace std;


int main()
{
	int a,t,cont=0;
	
	cin>>a;
	for(int i =0;i<5;i++)
	{
		cin>>t;
		if(a==t)
		{
			cont++;
		}
	}
	cout<<cont <<endl;
}
