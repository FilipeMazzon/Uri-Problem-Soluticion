#include <bits/stdc++.h>

using namespace std;


int main()
{
	int pag,quant;
	cin>>pag>>quant;
	string com;
	while (quant--)
	{
		cin>>com;
		if(com=="fechou")
			pag++;
		else
		{
			if(pag>0)
				pag--;
		}		
	}
	cout<<pag <<endl;
}
