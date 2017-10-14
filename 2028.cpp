#include<bits/stdc++.h>

using namespace std;
int main()
{
    int y,u=0;
    while(cin>>y){
    	int num=1;
    	u++;
    	num += ((y*(y + 1)) / 2);  
        if(y == 0)
			printf("Caso %d: %d numero\n", u, num);  
        else 
			printf("Caso %d: %d numeros\n", u, num);  
        printf("0");
		for(int i=1; i<=y; i++)  {  
            for(int j=1; j<=i; j++)  
                printf(" %d", i);  
        }  
		     
		cout<<endl<<endl;
    }
                                 
}
