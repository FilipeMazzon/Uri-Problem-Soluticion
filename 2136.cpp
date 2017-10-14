#include<bits/stdc++.h>
#define add push_back
using namespace std;

int main(){
	string resp,nome;
	int tamanho=0;
	vector<string> bffs;
	vector<string> friends;
	vector<string> nofriends;
	while(cin>> nome && nome !="FIM"){
		bool vdd = true;
		cin>>resp;
		for(int i =0;i<friends.size();i++)
		{	
			if(nome == friends[i])
			{
				vdd=false;
			}
		}
		if(vdd)
		{
			for(int i =0;i<nofriends.size();i++)
			{
				if(nome == nofriends[i])
				{
					vdd=false;
				}
			}
		}
		if(resp == "YES"){
			if(vdd){
				friends.add(nome);
			}
			if(nome.size() > tamanho){
				tamanho =nome.size();
				bffs.clear();
				bffs.add(nome);
			}
			if(nome.size() == tamanho){
				bffs.add(nome);
			}
		}
		if(resp =="NO"){
			if(vdd){
				nofriends.add(nome);
			}
		}
	}
	sort(friends.begin(),friends.end());
	sort(nofriends.begin(),nofriends.end());
	for(int i =0;i<friends.size();i++){
		cout<<friends[i]<<endl;
	}
		for(int i =0;i<nofriends.size();i++){
		cout<<nofriends[i]<<endl;
	}
	
	
	cout<<"\nAmigo do Habay:\n"<<bffs[0]<<endl;
	
}
