#include <stdio.h>
 
int main(){
       
    long long int n,dig;
    
    scanf("%lld", &n);
       
    dig = (n*(n-3))/2;
       
    printf("%lld\n",dig);
    return 0;
       
}
