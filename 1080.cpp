#include <iostream>
#include <iomanip>
#include <cmath>
 
using namespace std;
 
int main()
{
    int x,t;
    int p=0;
    int w=0;
     
    for(int a =1;a <=100;a++)
    {   
        cin >> x;
        if(x>p)
        {
            p= x;
            w=a;
                     
        } 
    }
	cout << p << "\n" << w << "\n";
}
