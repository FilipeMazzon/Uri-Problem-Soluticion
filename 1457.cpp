#include<iostream>
#include<string.h>

using namespace std;

int main(){
	char a[21];
	int cont=0, s, z, d, b, j=1;
	unsigned long long r;
	cin>>z;
	while(z--){
		j=1;
		cont=0;
		cin>>s>>a;
		if(s==1)
			cout<<"1"<<endl;
		else{
			for(int i=0;i<strlen(a);i++){
				cont=cont+1;
			}
			r=s;
			d=cont;
			b=20;
			if(s<=d)	
				cout<<s<<"\n";
			else{
				while(b>=1){
					r=r*(s-(j*d));
					j=j+1;
					b=(s-(j*d));
				}
				cout<<r<<"\n";
			}
		}
	}
	return 0;
}
