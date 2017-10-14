#include<bits/stdc++.h>

using namespace std;
int main()  
{  
    double t,y,ab,h,pi=3.14;
    while(cin>>t>>y)
    {
    	ab=pi*pow((y/2),2);
    	h=t/ab;
    	printf("ALTURA = %.2f\nAREA = %.2f\n",h,ab);
	}
}  
