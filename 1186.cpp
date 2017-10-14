#include<bits/stdc++.h>
    
using namespace std;
    
int main() 
{
    double M[12][12],k=0,u,lol=0;
    int o;
    string b;
     
    cin>> b; 
    for(int l=0;l<12;l++){
        for(int i=0;i<12;i++){
            cin >>M[l][i];
        }
    }
    for(int j=0;j<12;j++){
        for(int i =0;i<12;i++){
            if(i+j>=12){
                k+=M[j][i];
                lol++;      
            }
        }
    }
    if(b == "S")
        cout <<fixed << setprecision(1)<< k << "\n";
        
    if (b == "M"){
        u= k/lol;
        cout<<fixed <<setprecision(1)<< u << "\n";
    }
    return 0;
}
