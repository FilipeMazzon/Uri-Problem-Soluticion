#include<bits/stdc++.h>
#define add push_back

using namespace std;

int main(){
	vector<string> joias;
	int contadorDeJoias=0;
	string joia;
	bool aux;
	while(cin>>joia){
		if(contadorDeJoias==0){
			joias.add(joia);
			contadorDeJoias++;
		}
		else{
			aux=true;
			for(int i=0;i<joias.size();i++){
				if(joia == joias[i]){
					aux=false;
				}
			}
			if(aux){
				joias.add(joia);
				contadorDeJoias++;
			}
		}
		
	}
	cout<<contadorDeJoias<<endl;
}
