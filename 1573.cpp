#include <iostream>
#include <cmath>
  
using namespace std;
  
int main() {
  
	int a,b,c,area;
	
	while(cin>>a>>b>>c && a+b+c){
		area= pow(a*b*c,1.0/3);
		cout << area<<"\n";
	}
	return 0;
}
