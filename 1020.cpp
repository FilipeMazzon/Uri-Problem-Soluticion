#include <iostream>
#include <iomanip>
#include <cmath>
   
using namespace std;
   
int main (){
    int ano;
    int mes;
    int dia;
  
int N;
cin >>    N;
 
 
ano = N / 365;
mes = N % 365 / 30;
dia = N % 365 % 30;

cout << ano << " ano(s)"  << "\n";
cout << mes << " mes(es)"  << "\n";
cout << dia << " dia(s)"  << "\n";
return 0;
 
}
