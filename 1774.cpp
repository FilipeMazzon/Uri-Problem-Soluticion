#include<stdio.h>
#include<stdlib.h>

typedef struct arestas{
	int u,v,w;
}arestas;

int cmp(const void *a,const void *b){
	arestas *A = (arestas*)a;
	arestas *B = (arestas*)b;
	if(A->w < B->w) return -1;
	return 1;
}

void init(int *pai,int n){
	while(n--) pai[n]=n;
}

int findset(int *pai,int x){
	if(pai[x] !=x)	pai[x] =findset(pai,pai[x]);
	return pai[x];

}
void unionset(int*pai,int x,int y){
	int i=findset(pai,x);
	int j= findset(pai,y);
	pai[j] = i;
}
int sameset(int *pai,int x,int y){
	return findset(pai,x) ==findset(pai,y);
}

int kruskal(arestas*a,int n,int m){
	int pai[n+1];
	int i;
	int ret=0;
	qsort(a,m,sizeof(arestas),cmp);
	init(pai,n+1);
	
	for(i=0;i<m;i++){
		if(!sameset(pai,a[i].u,a[i].v)){
			ret+= a[i].w;
			unionset(pai,a[i].u,a[i].v);
		}
		
	}
	return ret;
}

int main(){
	int n,m;//nVertices, nArestas
	arestas a[1000];
	int i;
	scanf("%d %d",&n,&m);
	
	for(i=0;i<m;i++)	scanf("%d %d %d", &a[i].u,&a[i].v,&a[i].w);

	int ans = kruskal (a,n,m);
	
	printf("%d\n",ans);
	return 0;
}
