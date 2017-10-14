#include <bits/stdc++.h>

using namespace std;

int fatorial (int a)  
{
	int y=1;
	for(int i=1;i<=a;i++)
	{
		y*=i;
	}
	return y;
}
int main()
{
	int x,y;
	cin>>x;
	y = fatorial(x);
	cout << y << endl;
}
