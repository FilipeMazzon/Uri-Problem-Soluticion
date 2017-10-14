#include <iostream>
 
   
using namespace std;
   
int main (){
    unsigned long long int x,y,z=0;
      
    cin >> x >> y;
     
    z= ((x+y) * (y-x+1))/2;
   	cout << z << endl;
    return 0;
}
