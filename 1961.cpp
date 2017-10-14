#include <bits/stdc++.h>
#define  add     push_back

using namespace std;

vector<int>v;

int main()
{
	int n,y,z;
	cin>>n>>y;
	while(y--){
		cin>>z;
		v.add(z);
	}
	int tam=v.size();
	for(int i=1;i<tam;i++){
		if(abs(v[i]-v[i-1])> n){
			printf("GAME OVER\n");
			return 0;
		}
	}
	printf("YOU WIN\n");
}
