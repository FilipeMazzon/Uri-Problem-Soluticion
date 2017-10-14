#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main  ()
{
	
	float A,B;
	double MEDIA ;
	
	cin >> A >>B;
	
	A *= 3.5;
	B *= 7.5;
	MEDIA = ((A + B )/ 11);
	
	cout << "MEDIA = "<< fixed << setprecision (5) << MEDIA << endl;	
}
