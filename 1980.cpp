#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
unsigned long long int tam,b[16];
	char a[16];
	b[0] = 1;
	b[1] = 1;
	b[2] = 2;
	b[3]= 6;
	b[4] = 24;
	b[5] = 120;
	b[6] = 720;
	b[7] = 5040;
	b[8] = 40320;
	b[9] = 362880;
	b[10] = 3628800;
	b[11] = 39916800;
	b[12] = 479001600;
	b[13] = 6227020800;
	b[14] = 87178291200;
	b[15] = 1307674368000;
 
	while(scanf("%s", &a) != EOF)
	{
		if(a[0] == '0') return 0;
		 
		tam = strlen(a);
		printf("%llu\n",b[tam]);
	}
    
}
