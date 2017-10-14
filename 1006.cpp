#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main () {
	
	float A,B,C,MEDIA;
	
	cin >> A>>B>>C;

	MEDIA = 0.2 * A + 0.3 * B + 0.5* C; 
	cout << "MEDIA = " << fixed << setprecision(1) << MEDIA << endl;
}
