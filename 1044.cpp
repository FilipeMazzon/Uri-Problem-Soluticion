#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdio>
#include <cstdlib> 
 
using namespace std;
bool multiplos(int A,int B){
	if(A % B == 0 || B % A == 0) return true;
	return false;
}   
int main () 
{
	int A,B;
	cin>> A >>B;
	if(multiplos(A,B))
		cout << "Sao Multiplos"<< endl;
	else
		cout << "Nao sao Multiplos" << endl ; 
	
	return 0;
}
