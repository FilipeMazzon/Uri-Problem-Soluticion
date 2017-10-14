#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdio>
#include <cstdlib>
    
using namespace std;
    
int main ()
{
	int N;
	while(cin >> N){
		if(0 <= N <= 100){
			if (N == 0)
			cout << "vai ter copa!" << endl;
			
			if (N != 0)
			cout << "vai ter duas!" << endl;
		}
	}
	return 0;
}
