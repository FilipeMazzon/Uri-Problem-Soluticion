#include <iostream>
#include <cmath>

using namespace std;


int main()
{
	long long int n,bs,iv,ev,t,hp,atk,def,sp,s,lol=1;//t = lvl
	string b;
	cin>>n;
	while(n--){
		cin >> b >>t;
		for(int i=0;i<4;i++){
			cin >> bs>>iv>>ev;
			if(i==0){
				hp=((iv+bs+(sqrt(ev)/8)+50)*t)/50+10;
			}
			else{
				s=((iv+bs+(sqrt(ev)/8))*t)/50 +5;
				if(i==1){
					atk=s;
				}
				if(i==2){
					def=s;
				}
				if(i==3){
					sp=s;
				}
			}
		}
		cout << "Caso #" << lol << ": " << b << " nivel " << t << "\n";
		cout << "HP: " << hp << "\n";
		cout << "AT: " << atk << "\n";
		cout << "DF: " << def << "\n";
		cout  <<"SP: " << sp << "\n";
		
		lol++;
	}
}
