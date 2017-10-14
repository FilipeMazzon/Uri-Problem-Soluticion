#include <iostream>
  
using namespace std;

int produto(int A,int B){
	return A*B;
}

int main() {
  
	int A,B;
	
	cin >> A >> B;
	
	cout << "PROD = " <<produto(A,B)<< endl;
	
	return 0;
}
