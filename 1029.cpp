#include <bits/stdc++.h>

using namespace std;
int r;

int fib(int x) {
	r++;
	if(x==0) return 0;
    if (x == 1) return 1;
    else return fib(x-1)+fib(x-2);
}

int main() {
	int t,x;
	cin>>t;
	while(t--){
		cin>>x;
		r=0;
		  printf("fib(%d) = %d calls = %d\n",x,r-1,fib(x));
	}
}
