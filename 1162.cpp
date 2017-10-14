#include<bits/stdc++.h>
#define add push_back

using namespace std;

int bubble(vector<int>& v)
{
	int var=0;
	for(int i =v.size();i>0;i--)
	{
		for(int j=0,k=1;k<i;j++,k++)
		{
			if(v[j]>v[k])
			{
				int swap= v[j];
				v[j] = v[k];
				v[k]=swap;
				var++;
			}
		}
	}
	return var;
}


int main()
{
	int t,y,u,maluco;
	vector<int> v;
	cin>>t;
	while(t--)
	{
		cin>>y;
		while(y--)
		{
			cin>>u;
			v.add(u);
		}
		maluco=bubble(v);
		printf("Optimal train swapping takes %d swaps.\n",maluco);
		v.clear();
	}	
}
