#include<iostream>

using namespace std;

typedef struct ponto{
	int x, y;
}ponto;

typedef struct no{

	ponto info;
	struct no* next;

}no;

double areaTriangulo(ponto a, ponto b, ponto c){  
    return 0.5*(a.x*b.y+a.y*c.x+b.x*c.y-c.x*b.y-a.x*c.y-b.x*a.y);  
}

int lado(ponto a, ponto b, ponto p){
    double S = areaTriangulo(a, b, p);
    if(S<0) return -1; //direita
    else if(S>0) return 1; //esquerda
    else return 0; 
}

int main(){
	
	int n;
	ponto p,px[2],py[2];
	int i;
	
	px[0].x = 100000;
	px[0].y =0;
	px[1].x = -10000;
	px[1].y = 0;
	
	py[0].x = 0;
	py[0].y= 10000;
	py[1].x =0;
	py[1].y	= -10000;
	
	int varx,vary;
	

	while(cin>> p.x >>p.y && p.x && p.y)
	{
	
		varx= lado(px[0],px[1],p);
		vary= lado(py[0],py[1],p);
		
		if(varx ==1 && vary ==1){
			printf("quarto\n");
		}
		else if(varx == 1 && vary==-1){
			printf("terceiro\n");
		}
		else if(varx == -1 && vary ==1){
			printf("primeiro\n");
		}
		else if(varx==-1 && vary == -1){
			printf("segundo\n");
		}
		else if(varx ==0 && vary== 0){
			printf("origem\n");
		}
	}
	return 0;
}
