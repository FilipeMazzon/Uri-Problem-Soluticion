#include<bits/stdc++.h>
#define add push_back

using namespace std;
//ESTA INCOMPLETO
bool sortbysec(const pair<int,int> &a,const pair<int,int> &b)
{
    return (a.second < b.second);
}


int main(){
	int NumDeTeste;
	double NumDePessoas,gastoPorCasa,totalPessoas,totalGasto;
	double consumoMedio;
	int cont=1;
	vector<pair<double,double>> casa;
	vector<pair<double,double>> final;//numeros de pessoas por casa 2° numero medio de gasto
	pair<double,double>total;//1°pessoas // 2°gasto de agua
	while(cin>>NumDeTeste && NumDeTeste){
		total = make_pair(0,0);
		while(NumDeTeste--){
			cin>>NumDePessoas >>gastoPorCasa;
			casa.add(make_pair(NumDePessoas,gastoPorCasa));
			final.add(make_pair(0,0));
		}
		for(int i =0; i<casa.size();i++){
			total.first += casa[i].first;
			total.second += casa[i].second;
			final[i].first =casa[i].first;
			final[i].second = floor(casa[i].second/casa[i].first);
			cout<<final[i].first<<"   "<<final[i].second<<endl;
				
		}
		cout<<total.first <<"    "<<total.second <<endl;
		totalPessoas=total.first;
		totalGasto = total.second;
		consumoMedio = total.second / total.first;
		cout<< "Cidade# " << cont<<":"<<endl;
		sort(final.begin(),final.end(),sortbysec);
		cout<<fixed<<setprecision(0);
		for(int i=0;i<final.size();i++){
			if(i==final.size()-1){
				cout<<final[i].first<<"-"<<final[i].second<<endl;
			}
			else{
				cout<<final[i].first<<"-"<<final[i].second<<" ";
			}

		}
		
		cout<<"Consumo medio: "<<fixed<<setprecision(2)<<consumoMedio<<" m3"<<endl;
		cont++;
		final.clear();
		casa.clear();
	}
}
