#include <iostream>
using namespace std;
   
int main()
{
	int n,r;
	cin >>n;
	for (int a =1;a<=n;a++)
	{
		if (n%a==0)
			cout << a << "\n";
		
	}
	return 0;
}
