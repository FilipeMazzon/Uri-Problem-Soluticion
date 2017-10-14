#include <bits/stdc++.h>

using namespace std;

int main()
{
	int x,y,z,var=0,time1=0,time2=0,empate=0;
	
	while(cin >>x>>y>>z)
	{
		var++;
		if (x>y){
			time1++;
		}
		else if (x<y){
			time2++;
		}
		else if (x==y){
			empate++;
		}
		cout <<"Novo grenal (1-sim 2-nao)\n";
		if(z==2){
			break;
		}
	}
	cout << var << " grenais\nInter:" << time1 <<"\nGremio:" << time2 << "\nEmpates:" <<empate <<"\n";
	if(time1>time2){
		cout << "Inter venceu mais\n";
	}
	else if(time1 <time2){
		cout << "Gremio venceu mais\n";
	}
	else if(time1==time2){
		cout << "Nao houve vencedor\n";
	}
}
