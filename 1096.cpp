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
 
    for (int x = 1; x < 10; x+=2)
    {
        for (int y = 7; y > 4; y--)
        {
            printf("I=%d J=%d\n", x, y);
        }
    }
 
    return 0;
}
