#include <iostream>
#include <iomanip>
#include <cmath>
 
using namespace std;
  
int main() {
	int N,S;

	cin >> N;
		 
	for(int c = 2; c<=10000;c+= N)
    {
		S = c;
		cout << S << "\n";
    }

    return 0;
}
