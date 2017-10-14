#include <iomanip>
#include <iostream>


using namespace std;

int main()
{
	int x;
	cin >> x;
	while(x--){
		int t;
		cin >>t;
		
		while(t--){
		
		int y;
		cin >> y;
		
		if(y==1)
			cout << "Rolien\n";
		if (y==2)
			cout << "Naej\n";
		if(y==3)
			cout << "Elehcim\n";
		if (y==4)
			cout <<"Odranoel\n";		
		}
	}
}
