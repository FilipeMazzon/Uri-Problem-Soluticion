#include <iostream>
#include <cmath>
    
using namespace std;
    
int main ()
{
    int N,num2=1,num1=1,num3=1;
    cin >> N;
       
    for (int i = 1;i<=N;i+=1)
    {
        cout << num1 << " " << lol << " " << num3 << "\n";
        num1 +=1;
        num2 = pow (num1,2);
        num3 = pow(num1,3);
    }
	return 0;
}
