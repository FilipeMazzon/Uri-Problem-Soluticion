#include<bits/stdc++.h>
    
using namespace std;
    
int main() 
{
    double M[12][12],k=0,u;
    int o;
    string b;
     
    cin>> o >> b; 
    for(int l=0;l<12;l++){
        for(int i=0;i<12;i++){
            cin >>M[l][i];
        }
    }
    for(int i =0;i<12;i++)
        k+=M[o][i];
    if(b == "S")
        cout <<fixed << setprecision(1)<< k << "\n";
        
    if (b == "M"){
        u= k/12;
        cout<<fixed <<setprecision(1)<< u << "\n";
    }
    return 0;
}
