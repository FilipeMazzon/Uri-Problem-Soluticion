#include <iostream>
#include <iomanip>
#include <cmath>
  
using namespace std;
  
int main ()
{
    double x;
     
    cin >> x;
     
    for (int i=0;i<100;i++){
        cout << fixed << setprecision(4);
        cout << "N["<< i << "] = " << x << "\n";
        x/=2;
    }
}
