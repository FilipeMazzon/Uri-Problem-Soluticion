#include <stdio.h>
#include <math.h>
typedef struct ponto{
    int x, y;
} ponto;

double areaTriangulo(ponto a, ponto b, ponto c){  
    return 0.5*(a.x*b.y+a.y*c.x+b.x*c.y-c.x*b.y-a.x*c.y-b.x*a.y);  
}

int lado(ponto a,ponto b,ponto c){
	double s= areaTriangulo(a,b,c);
	if (s>0) return 1;
	if (s<0) return -1;
	return 0;
}

double distanciaPontos(ponto p1,ponto p2){
    return sqrt( pow (p1.x - p2.x, 2) + pow (p1.x - p2.x, 2));;
}
int main(){
	ponto p1,p2,p3;
	int h,s,t,planet1=0,planet2=0,planet3=0,hab1=0,hab2=0;
	scanf("%d %d %d %d %d",&p1.x,&p1.y,&p2.x,&p2.y,&t);
	double dist = distanciaPontos(p1,p2);

	while(t--){
		scanf("%d %d %d",&p3.x,&p3.y,&h);
		s= lado(p1,p2,p3);
		if(s>0){
			planet1++;
			hab1+=h;
		}
		else if(s<0){
			planet2++;
			hab2+=h;
		}
		else{
			planet3++;
		}
	}
	printf("Relatorio Vogon #35987-2\n");
	printf("Distancia entre referencias: %.2f anos-luz\n",dist);
	printf("Setor Oeste:\n");
	printf("- %d planeta(s)\n- %d bilhao(oes) de habitante(s)\n",planet1,hab1);
	printf("Setor Leste:\n- %d planeta(s)\n- %d bilhao(oes) de habitante(s)\n",planet2,hab2);
	printf("Casualidades: %d planeta(s)\n",planet3);
	
}
