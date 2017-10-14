#include <iostream>
#include <iomanip>
#include <cmath>
  
using namespace std;

int QualOMaior(int a,int b,int c){
	int maiorAB=(a+b+abs(a-b))/2;
	return (maiorAB+c+abs(maiorAB-c))/2;
}

int main (){
	int a,b,c;

	cin >> a>>b>>c;
	cout<<QualOMaior(a,b,c) << " eh o maior"<<endl;
	return 0;
}
