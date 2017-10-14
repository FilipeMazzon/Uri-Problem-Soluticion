#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	string x;//nome e forca
	int Num,y;
	cin >> Num;
	for(int a=1;a<=Num;a++){
		cin >> x >>y;
		if (x == "Thor")
			cout << "Y\n";
		else
			cout << "N\n";		
	}

}
