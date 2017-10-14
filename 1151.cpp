#include <iostream>
  
     
using namespace std;
        
int main ()
{
    long long int x[50],u;
    x[0]=0;
    x[1]=1;
 
     for (int y=2;y<=46;y++)
     {
        x[y]= x[y-1] +x[y-2];
     }
     cin >> u;
      
     for(int i=0;i<u;i++)
     {
        if (i==0)
        {
                cout << x[i];
         }
        else
        {
            cout << " " << x[i];    
        }
     }
    cout << "\n";               
    return 0;
}
