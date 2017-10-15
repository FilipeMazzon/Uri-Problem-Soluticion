#include<bits/stdc++.h>
#define add push_back

using namespace std;
int main(){
	int espaco;
	int x,y,porcentagem;
	while(cin>>x && x){
		cin>>y>>porcentagem;
		espaco= sqrt(x*y*100/porcentagem);
		cout<<espaco<<endl;
	}
}
