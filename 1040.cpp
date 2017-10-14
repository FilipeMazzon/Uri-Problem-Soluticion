#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdio>
#include <cstdlib>
      
using namespace std;
      
int main (){
	double N1,N2,N3,N4,MEDIA,N5,MEDIAF;
	cin >> N1>>N2>>N3>>N4;

	MEDIA = 0.2 * N1 + 0.3 * N2 + 0.4 * N3 + 0.1 * N4;

	if (MEDIA >= 7){
		cout << "Media: " << fixed << setprecision (1) << MEDIA << "\n";
		cout << "Aluno aprovado." << "\n";
	} 
	if (MEDIA < 5)	{
		cout << "Media: " << fixed << setprecision (1) << MEDIA << "\n"; 
		cout << "Aluno reprovado." << "\n";
	} 
	if (MEDIA >= 5 && MEDIA < 7)
	{  
		cout << "Media: " << fixed << setprecision (1) << MEDIA << "\n"; 
		cout << "Aluno em exame." << "\n";
		
		cin >> N5;
		
		MEDIAF = (MEDIA + N5) / 2;
		cout << "Nota do exame: " << fixed << setprecision (1) << N5 << "\n";
		if (MEDIAF >=5)
		{ 
			cout << "Aluno aprovado." << endl;
			cout << "Media final: " << fixed << setprecision (1) << MEDIAF << "\n";
		}
		if (MEDIAF < 5)
		{
			cout << "Aluno reprovado." << endl;
			cout << "Media final: " << fixed << setprecision (1) << MEDIAF << "\n";
		}
	}
	return 0;
}
