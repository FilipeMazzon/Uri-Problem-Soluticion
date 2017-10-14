#include <bits/stdc++.h>
  
using namespace std;
  
int main()
{
    long long int x,y;
	long double t;
    cin>>x;
    while(x--){
        cin >>y;
        t=(sqrt(1+ 8* y)-1)/2;
        printf ("%d\n",(int)t);
    }
      
}
