#include <iostream>
#include <iomanip>
#include <cmath>
#include<string.h>
          
using namespace std;
          
int main (){
    int n;
    int t;
    char a[6];
  
    cin >> n;
    while(n--){
        int o;
        cin >>a;
         
        if (strlen(a) != 3){
            t=3;
        }
        else{
            if((a[0] == 'o' && a[1] == 'n') || (a[0] == 'o' && a[2]== 'e') || (a[1] == 'n' && a[2] == 'e'))
                t=1;
            else if ((a[0] == 't' && a[1] == 'w') || (a[0] == 't' && a[2]== 'o') || (a[1] == 'w' && a[2] == 'o'))
                t=2;
        }
        cout << t << "\n";     
	}
}
