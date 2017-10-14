#include <bits/stdc++.h>
#define add       push_back  
using namespace std;
   
int main(){
    int x,y;
    vector <int>lol;
    while(cin>>x){
        y=pow(x,2);
        for(int i=0;i<x;i++){
            for(int l=0;l<x;l++){	
            	if(l+i==x-1)
            		lol.add(2);	
                else if(l==i)
                    lol.add(1);
                else
                	lol.add(3);		
            }
        }   
        for(int i=1;i<=y;i++){
           if(i%x)
                printf("%d",lol[i-1]);    
            else
                printf("%d\n",lol[i-1]);                  
        }
        lol.clear();
    }         
    return 0;
}
