#include <iostream>
using namespace std;
   
int main ()
{
    int N,num2=2,num1=1,num3=3;
     
    cin >> N;
      
    for (int i = 1;i<=N;i++){
        cout << num1 << " " << num2 << " " << num3 << " PUM\n";
        num1+=4;
        num2+=4;
        num3+=4;
    }
	return 0;
}
