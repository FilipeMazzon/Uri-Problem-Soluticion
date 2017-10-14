#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n,a,c,res;
	char b;
	
	cin >>n;
	
	while(n--){
		res=0;
		cin >> a >>b >>c;
		if(a==c){
			res=a*c;
		}
		else if(islower(b)){
			res=a+c;
		}
		else{
			res=c-a;
		}
		cout << res << "\n";
	}
	
	
}
