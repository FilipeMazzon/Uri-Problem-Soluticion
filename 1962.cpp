#include<bits/stdc++.h>


using namespace std;

int main(){
	int t,x;
	cin>>t;
	while(t--){
		cin >>x;
		if(x>=2015)
			printf("%d A.C.\n",x-2014);
		
		else
			printf("%d D.C.\n",2015-x);
	}
}
