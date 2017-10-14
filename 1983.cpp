#include <bits/stdc++.h>

using namespace std;

int main()
{
	int x,a,num;
	double b,cont=0;
	cin>>x;
	while(x--){
		cin>> a>> b;
		
		if(b>cont){
			num=a;
			cont=b;
		} 
	}
	if(cont>=8)
		printf("%d\n",num);
	else
		printf("Minimum note not reached\n");
	
}
