 #include <iostream>
#include <iomanip>
   
using namespace std;
   
int main ()
   
{
    int a;
    double X[100];
    double x;
   
    for (int a=0;a<100;a++)
    {
        cin >> x;
        X[a]=x;
         
        if (X[a] <=10)
            cout <<"A["<<a<<"] = "<< fixed <<setprecision(1) << X[a] << "\n";  
    }    
    return 0;
}
