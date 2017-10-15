#include<bits/stdc++.h>
#define add push_back

using namespace std;
int main(){
	int num,pos,middle;
	while(cin>>num){
		int matriz[num][num];
		memset(matriz, 0, sizeof matriz);
		pos=num/3;
		middle=num/2;
		for(int i=0;i<num;i++){
			
			for(int j =0;j<num;j++){
				if(i==middle && j==middle){
					matriz[i][j] =4;
				}
				else if(i>=pos && i<num-pos && j>=pos && j<num-pos){
					matriz[i][j]=1;
				}
				else if(i==j){
					matriz[i][j] =2;
				}
				else if(i+j==num-1){
					matriz[i][j] =3;
				}
			}
		}
		for(int i=0;i<num;i++){
			for(int j=0;j<num;j++){
				cout<<matriz[i][j];
			}
			cout<<endl;
		}
		cout<<endl;
	}
}
