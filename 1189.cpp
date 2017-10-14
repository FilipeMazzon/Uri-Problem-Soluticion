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
        	if(i==0 && j>0 && j<11){
				k+=M[j][i];
                lol++;  
			}
            else if(i==1 && j>1 && j<10){
                k+=M[j][i];
                lol++;      
            }
            else if(i==2 && j>2 && j<9){
                k+=M[j][i];
                lol++;      
            }
            else if(i==3 && j>3 && j<8){
                k+=M[j][i];
                lol++;      
            }
            else if(i==4 && j>4 && j<7){
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
