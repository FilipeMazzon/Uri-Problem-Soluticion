#include <iostream>
 
 
using namespace std;
 
int main ()
{
    int mary;
    int john;
    int x;
    while (cin >>x && x)
    {   
    	mary=0;
    	john=0;

        while (x--)
        {
            int y;
             
            cin >>y;
			
			if(y== 0)
				mary++;
            if (y == 1)
                john++;
        }
        cout << "Mary won " << mary << " times and John won " << john << " times\n";  
    }

        
}
