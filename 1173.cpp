#include <bits/stdc++.h>
#define add     push_back

using namespace std;

int main()
{
	vector<int> v;
	int x;
	cin >>x;
	for(int i=0;i<10;i++){
		v.add(x);
		x*=2;
		printf("N[%d] = %d\n",i,v[i]);
	}
}
