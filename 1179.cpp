#include <bits/stdc++.h>
#define add         push_back
using namespace std;
  
int main()
{
    int x=15,y,u,aff;
    vector <int> par;
    vector <int> imp;
      
    while(x--){
        cin >> y;
        if(y%2==0)
            par.add(y);
        else
            imp.add(y);
        if(par.size() == 5){
            for(int i =0; i <5;i++)
                cout << "par[" << i << "] = " << par[i] << "\n";
            par.clear();
        }
        if(imp.size() ==5){
            for(int i =0; i <5;i++)
                cout << "impar[" << i << "] = " << imp[i] << "\n";
            imp.clear();
        }
    }
    for(int i=0;i<imp.size();i++)
        cout << "impar[" << i << "] = " << imp[i] << "\n";
    for(int i=0;i<par.size();i++)
        cout << "par[" << i << "] = " << par[i] << "\n";

}
