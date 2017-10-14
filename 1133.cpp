#include <iostream>
#include <iomanip>
#include <cmath>


using namespace std;

int main()
{
	int x,y,t,r;
	
	cin >> x >>y;
	if (x>=y){
		t=x;
		r=y;
	}
	if (x <y){
		t= y;
		r =x;
	}
    
    r++;
    
	for (int e =r;e<t;e++){
		if (e%5 ==2 || e%5 == 3)
		{
			cout << e << "\n";
		}
	}
	return 0;
}
