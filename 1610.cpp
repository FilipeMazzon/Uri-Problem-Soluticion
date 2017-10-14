#include <bits/stdc++.h>
#define add push_back
using namespace std;



vector <int> vetor[100000];
int vis[100000];
bool ciclo;

void dfs(int ini)
{
	vis[ini]=1;
	int tam= vetor[ini].size();
	for(int i =0;i<tam;i++){
		int v = vetor[ini][i];
		if(vis[v]==0){
			dfs(v);
		}
		else if(vis[v]==1){
			ciclo=1;
		}
	}
	vis[ini]=2;
}
int main()
{
	int x,v,a,y,z;
	cin>> x;
	while(x--){
		ciclo=0;
		cin>>v>>a;
		for(int i=0;i<a;i++){
			cin>>z>>y;
			y--;z--;
			vetor[y].add(z);
		}
		for(int i =0;i<v;i++){
			vis[i]=0;
		}
		
		for(int i =0;i<v;i++){
			if(vis[i]==false)
				dfs(i);
		}
		
		if(ciclo){
			printf("SIM\n");
		}
		else{
			printf("NAO\n");
		}
		for(int i=0;i<v;i++){
			vetor[i].clear();
		}
	}
}
