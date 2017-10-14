#include <bits/stdc++.h>

using namespace std;

int main()
{
	double t,i;
	double x;
	while(cin>>t &&t){
		i = t + (t - 3);
		x=(i-t)/t;
		printf("%.6f\n",x);
	}
}
