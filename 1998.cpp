#include<bits/stdc++.h>
#define add push_back

using namespace std;

int main()
{
	int x,t,hehe;
	int v[501];
	while(cin>>x && x!=-1)
	{
		v[0]=0;
		for(int i=1;i<=x;i++)
		{
			cin>>v[i];
		}
		for(int i=1;i<=x;i++)
		{
			if(v[i]==i)
			{
				v[i] = 0;
				for(int j=1;j<i;j++)
				{
					v[j]++;
				}
				i=0;
			}
		}
		for(int i=1;i<=x;i++)
		{
			if(v[i] != 0)
			{
				cout<<"N\n";
				break;
			}
			else if (i==x)
			{
				cout<<"S\n";
			}
		}
	}
}
