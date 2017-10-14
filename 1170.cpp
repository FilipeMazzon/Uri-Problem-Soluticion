#include <iostream>
 
using namespace std;
 
int main()
{
    int x;
     
    cin >>x ;
     
    while(x--){
        int var=0;
        double y;
        cin >> y;
        
        while (y>1){
            y/=2;
            var++;
        }
        cout << var << " dias\n";
    }
    return 0;
}
