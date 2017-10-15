#include <bits/stdc++.h>
#define add push_back
using namespace std;

int main(){
	int y=0;
	int x;
	int aux=0;
	int travar=0;
	while(cin>>x){
		if(aux==0){
			y =x;
			aux++;
		}
		else {
			if(travar==0 && x>y){
				y=x;
			}
			else{
				travar=1;
			}
		}
			
	}
	cout<<y+1<<endl;
}
