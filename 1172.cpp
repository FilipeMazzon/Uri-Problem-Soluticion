#include <iostream>
  
using namespace std;
  
int main ()
  
{
    int a,X[10],x;
  
	for (int a=0;a<10;a++){
		cin >> x;
		if (x <=0)
			X[a] =1;
		else
			X[a] = x;  
		cout << "X[" <<a << "] = "<< X[a] << "\n";
	}
      
    return 0;
}
