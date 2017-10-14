#include <bits/stdc++.h>
#define add   push_back  
using namespace std;
 
vector <int>lol;
int m;
 
int busca(int i,int j,int g)
{
    if(i > j) return -1;
    
    m= (i+j)/2;
    if (lol[m]== g) return m;
    else if(lol[m]> g) return busca(i,m - 1,g);
    else return busca(m + 1,j,g);
}  
int main()
{
    int x,y,z,u,tam,cont=1,res;
     
    while(cin>>x>>y && x  && y)
    {
        while(x--)
        {
            cin>>z;
            lol.add(z);
        }
        sort(lol.begin(),lol.end());
        tam=lol.size()-1;
        printf("CASE# %d:\n",cont);
        while(y--)
        {
            cin>>u;
            if(busca (0,tam,u)!=-1)
            {
                while (m > 0 && lol[m] == lol[m - 1]) m--;
        		m++;
                printf("%d found at %d\n",u,m);
            }
            else
            {
                printf("%d not found\n",u); 
            }
        }
        cont++;
        lol.clear();
    } 
    return 0;
}
