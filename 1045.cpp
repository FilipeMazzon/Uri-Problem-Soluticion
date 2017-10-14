#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <locale>   
    
using namespace std;

int main ()
{
	double A,B,C,x,y,z;
	
	cin >> x>>y>>z;

	//ordenação simples
	if (x > y && x >z)
	{
		A= x;
		B= y;
		C = z;
	}
	else if (y>x && y > z)
	{
		A= y;
		B = x;
		C = z;
	}
	else if (z>x && y < z)
	{
		A= z;
		B = x;
		C = y;
	}
	else { 
		A = x;
		B = y;
		C = z;
	}
	
	//editificar o tipo de triangulo
	if (A >= B + C)
	{cout << "NAO FORMA TRIANGULO" << endl;}
	else {
	
	if (pow(A,2) == pow (B,2) + pow (C,2))
	{cout << "TRIANGULO RETANGULO" << endl;}
	if (pow (A,2) > (pow (B,2) + pow (C,2)))
	{cout << "TRIANGULO OBTUSANGULO" << endl;}
	
	if (pow (A,2) < (pow (B,2) + pow (C,2)))  
	
	{cout << "TRIANGULO ACUTANGULO" << endl;}
	if (A == B && A == C)
	{cout << "TRIANGULO EQUILATERO" << endl;}
	if (A == B)
	{if(B != C && A !=C)
	{cout << "TRIANGULO ISOSCELES" << endl;} } 
	if (B == C)
	{if (A != B && A != C) 
	{    cout << "TRIANGULO ISOSCELES" << endl;} }
	if(A == C)
	{ if (B != A && B != C)
	{   cout << "TRIANGULO ISOSCELES" << endl;} }
	}

   
return 0;
}
