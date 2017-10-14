#include <iostream>
    
using namespace std;
    
int main ()
    
{
    int a,b=0;
    double X[21];
    double x;
     
    for (int u=19 ;u >= 0; u--){
        cin >> x;
        X[u]=x;
    }
      
    for (int a = 0; a < 20; a++)     
        cout <<"N["<<a<<"] = "<< X[a] << "\n";
    
      
    return 0;
}
