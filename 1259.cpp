#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    vector<int> imp;
    vector<int> par;
     
    int x,a;
    cin >> x;
    while(x--){
        cin >>a;
        if(a%2==0)
            par.push_back(a);
        else{
            imp.push_back(a);
        }
    }
    sort(par.begin(),par.end());
    sort(imp.begin(),imp.end());
    reverse(imp.begin(),imp.end());
     
    for(int b=0;b<par.size();b++){
        cout << par[b] << "\n";
    }
    for(int c=0;c<imp.size();c++){
        cout << imp[c] << "\n";
    }
}
