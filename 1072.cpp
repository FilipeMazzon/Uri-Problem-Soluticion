#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <locale>   
#include <cstdlib>
          
using namespace std;
             
int main ()
{
	int N;
	int in,out,Num;
	in = 0;
	out = 0;
	cin >> Num;
	   
	for(int i =0;i<Num;i++)
	{
	    cin >> N;
	      
	    if(N >= 10 && N <= 20){
			in += 1;
		}
	    else{ 
			out += 1;
		}
	}
    cout << in << " in\n";
    cout << out << " out\n";
    return 0;      
}
