#include <iostream>
#include <iomanip>


using namespace std;


int main()
{
	int x;
	int y;
	int c;
	int num,a,b;
	c=0;
	cin >> num ;
	for(int i =0;i<num;i++){
		cin>> x >> y;
	
		if (x>y){
			a=x;
			b=y;
		}
		if (x<y){
			a=y;
		 	b=x;
		}
		b++;
			
		for (b;b<a;b++){ 	
			if (b%2 !=0)
				c+=b;	
		}
		cout << c << "\n";
		c =0;
	}

}
