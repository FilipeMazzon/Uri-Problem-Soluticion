#include <iostream>
#include <iomanip>
 
 
using namespace std;
 
 
int main()
{
    int x,y,c,a,b;
    c=0;
    cin >> x >> y;
     
    if (x>y){
        a=x;
        b=y;
    }
    if (x<y)
    {
        a=y;
        b=x;
    }
     
    b++;
     
    for (;b <a;b++)
    { 
        if (b%2 !=0)
        {  
            c+=b;
        }
    }  
    cout << c << "\n";
	
	return 0;
}
