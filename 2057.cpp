#include <bits/stdc++.h>

using namespace std;


int main()
{
	int h1,h2,bonus;
	cin>>h1>>h2>>bonus;
	if(h1+h2+bonus>24)
		cout<< h1+h2+bonus-24<<endl;
	else if(h1+h2+bonus <0)
		cout << 24-abs(h1-h2-bonus) <<endl;
	else
		cout<<h1+h2+bonus<<endl;

}
