#include <bits/stdc++.h>
#define add       push_back  
using namespace std;
  
int main(){
    int x,y;
    vector <int>lol;
    while(cin>>x && x){
        y=pow(x,2);
        for(int i=0;i<x;i++){
            for(int l=0;l<x;l++){
                if(l==i)
                    lol.add(1);
                else if(i>l)
                    lol.add(i-l+1);
                else if (i<l)
                    lol.add(l-i+1);
            }
        }   
        for(int i=1;i<=y;i++){
           if(i%x)
            	printf("%3i ",lol[i-1]);    
            else
                printf("%3i\n",lol[i-1]);                  
        }
        printf("\n");
        lol.clear();
    }        
    return 0;
}
