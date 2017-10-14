#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <locale>   
       
using namespace std;
          
int main (){
	int N;
	cin >> N;
	while(cin >> N)
	{
	    if(N < 0 && (N % 2) == 0)
	   		cout << "EVEN NEGATIVE" << "\n";
	    else if (N > 0 && (N % 2) == 0)
	        cout << "EVEN POSITIVE" << "\n";
	    else if (N < 0 && (N % 2) != 0)
	       cout <<  "ODD NEGATIVE" << "\n";
	    else if (N >0 && (N % 2) != 0)
	        cout << "ODD POSITIVE" << "\n";
	    else if (N == 0)
	        cout << "NULL" << "\n";
	}
}
