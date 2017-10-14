#include <iostream>
#include <iomanip>
#include <cmath>
  
using namespace std;
  
int main ()
{
    int n;
    int z =0;
      
    cin >> n;
      
    while (n--){
        int x,y;
        cin >> x>> y;
        z=0;  
        if (x%2 != 0){
            for(int a =1;a<=y;a++){
                z+=x;
                x+=2;
            }
            cout << z<< "\n";
        }          
        if (x%2 == 0){
            x++;
            for(int a =1;a<=y;a++){
                z+=x;
                x+=2;
            }
            cout << z<< "\n";      
        }                   
    }
}
