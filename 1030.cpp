#include<bits/stdc++.h>
#define add push_back
using namespace std;

int saltos(int num, int pulo) { 
   int res = 0; 
    for (int i = 2; i <= num; i++) 
        res= (res + pulo) % i; 

   return res; 
 } 
 
 
 int main(){ 
    int num, a, b; 
      
     scanf("%d",&num); 
      
    for(int i = 0; i < num; i++){ 
           scanf("%d %d",&a,&b); 
           printf("Case %d: %d\n",i+1,saltos(a,b)+1); 
   } 
    return 0; 
 } 
