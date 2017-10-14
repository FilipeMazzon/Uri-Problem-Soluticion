#include <bits/stdc++.h>
  
using namespace std;
 
int main()
{
    int x,tam,tam2,cont,cont1;
    char a[1000],b[1000];
      
    cin>> x;
    while(x--){
        cin >>a>>b;
        tam=strlen(b);
        tam2=strlen(a);
        cont=-1;cont1=0;
        if(tam2<tam)
            printf("nao encaixa\n");
        else{
            for(int i = tam2-tam;i<tam2;i++){
                cont++;
                if(a[i]!=b[cont]){
                    printf("nao encaixa\n");
                    break;
                }
                else{
                    cont1++;
                }
            }
            cont++;
            if(cont1 == cont)
                printf("encaixa\n");
        }   
         
    }
}
