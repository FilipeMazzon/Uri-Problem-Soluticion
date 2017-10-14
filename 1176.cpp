#include <iostream>
  
using namespace std;
  
int main ()
  
{
    int t;

	long long int x[60],u;
	x[0]=0;
	x[1]=1;
	for (int y=2;y<=60;y++)
		x[y]= x[y-1] +x[y-2];
	cin >>t;
	
	while (t--){
		cin >> u;
		
		cout <<"Fib("<< u << ") = "<< x[u] << "\n";
	}
	
	return 0;
}
