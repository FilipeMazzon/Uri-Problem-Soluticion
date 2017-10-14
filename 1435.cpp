#include <bits/stdc++.h>
#define add       push_back  
using namespace std;
   
int main()
{
    int x,y=0,z=0,u=1;
    int matriz[101][101];
    while(cin>>x && x){
    	y=0;z=0;u=1;
    	int haha=x;
        while(haha>=1){
			for(int i=z;i<x-y;i++){
	            for(int l=z;l<x-y;l++){
	            	matriz[i][l]=u;
	            }
	        }
	        haha-=2;
	        z++;
	        y++;
	        u++;
   		}
        for(int i=0;i<x;i++){ 
			int cont=1;
			for(int j=0;j<x;j++){
		    	if(cont==x)
                printf("%3i\n",matriz[i][j]);    
           		else{
					printf("%3i ",matriz[i][j]); 
            	    cont++;
            	}
		 	}
        }
        printf("\n");
    }         
    return 0;
}
