#include<bits/stdc++.h>

using namespace std;
int main()
{
	int t;
    cin>>t;
    while(t--)
    {
    	string y,u;
    	cin>>y>>u;
    	if(y== "pedra" && u== "pedra")
    		printf("Sem ganhador\n");
    	else if(y== "ataque" && u!= "ataque")
    		printf("Jogador 1 venceu\n");
    	else if(y != "ataque" && u== "ataque")
    		printf("Jogador 2 venceu\n");
    	else if(y== "ataque" && u== "ataque")
    		printf("Aniquilacao mutua\n");
    	else if(y== "papel" && u== "papel")
    		printf("Ambos venceram\n");
    	else if(y== "pedra" && u== "papel")
    		printf("Jogador 1 venceu\n");
    	else if(u== "pedra" && y== "papel")
    		printf("Jogador 2 venceu\n");
    	
	}
                                 
}
