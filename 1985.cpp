#include <bits/stdc++.h>


using namespace std;


int main()
{
	int cont,x,y;
	double s=0;
	cin>>cont;
	while(cont--)
	{
		
		cin>> x >>y;
		switch(x)
		{
			case 1001:
				s+=1.5 * y;
				break;
			case 1002:
				s+=2.5 * y;
				break;
			case 1003:
				s+= 3.5 * y;
				break;
			case 1004:
				s+= 4.5 *y;
				break;
			case 1005:
				s+=5.5 * y;
				break;
		}
		
	}
	cout <<fixed<<setprecision (2) << s << "\n";
	
}
