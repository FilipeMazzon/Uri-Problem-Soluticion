#include <iostream>
  
using namespace std;
  
int main ()
  
{
   int t,x,e[1000],y=0,var=0;
   cin >> t;
    
 
    for(int i=0;i<t-1;i++){
        cin >>x;
        e[i]=x;
         
        if(e[i]<y){
            y=e[i];
            var=i;
        }
    }
    cout << "Menor valor: "<< y << "\n";
    cout << "Posicao: "<<var << "\n";
    
}
