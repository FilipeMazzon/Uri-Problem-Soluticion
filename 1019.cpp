#include <iostream>
#include <iomanip>
#include <cmath>
  
using namespace std;
  
int main (){
	int hr;
	int min;
	int seg;
	
	int N;
	cin >>	N;
	
	hr=N /3600;
	min =( N - hr * 3600)/ 60;
	seg =( N - hr * 3600 - min*60 );
	
	cout <<hr <<":" <<min <<":" << seg <<endl;
	
	
	return 0;

}
