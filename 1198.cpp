#include <iostream>
#include <iomanip>
#include <cmath>
    
using namespace std;
    
int main() {
	long long int x;
	long long int y;
	long long int c;
	while (cin >> x >> y){
	    c=abs(y - x);
	    cout << c << "\n";
	}
    return 0;
}
