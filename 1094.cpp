#include <iostream>
#include <iomanip>
#include <cmath>
  
using namespace std;
  
int main () 
{
	int number;
	int N;
	double c=0,r=0,s=0,total;
	double percs=0,percc=0,percr=0;
	
	cin >> N;
	string lala;
	
	if(N > 0)
	{	
		for(int b =1; b <= N;b++)
		{
			int f;
			string e;
	
			cin >> f >> e;
	
			if (e == "C")
				c+= f;
			if (e == "R")
				r+=f;
			if (e == "S")
				s+= f;	
			total = c+r+s;
	
			percs = (s * 100) /total;
			percc = (c * 100) /total;
			percr = (r * 100) /total;
	
		}
		cout << "Total: " << total << " cobaias\n";
		cout << "Total de coelhos: " << c << "\n";
		cout << "Total de ratos: " << r << "\n";
		cout << "Total de sapos: " << s << "\n";
		cout << fixed << setprecision(2);
		cout << "Percentual de coelhos: " << percc << " %\n";
		cout << "Percentual de ratos: " << percr << " %\n";
		cout << "Percentual de sapos: " << percs << " %\n";	
	}
}
