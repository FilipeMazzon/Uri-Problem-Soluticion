#include <iostream>
#include <iomanip>
#include <cmath>
#include<string.h>
         
using namespace std;
         
int main ()
{
     
    int n;
    char a[100];
 
    cin >> n;
    while(n--){
        int led=0;
        cin >>a;
        for(int i=0;i<strlen(a);i++){       
            if (a[i] == '0'|| a[i]== '9' || a[i]== '6')
                led+=6;
            else if (a[i] == '1')
                led+=2;
            else if (a[i] =='2' || a[i]== '5' || a[i]=='3')
                led+=5;
            else if (a[i]== '4')
                led+= 4;
            else if (a[i]== '5')
                led+=5;
            else if (a[i]== '8')
                led+=7;
            else if (a[i] == '7')
                led +=3;                     
        }
        cout << led << " leds\n";
    }          
}
