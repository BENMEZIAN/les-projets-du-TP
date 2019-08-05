#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <stdbool.h>

typedef struct intervalle{
	int inf;
	int sup;
}intervalle;

  // prototype des fonctions
intervalle lire();
intervalle intersection(intervalle a,intervalle b);
intervalle reunion(intervalle a,intervalle b);
void afficher(intervalle I);
int vide(intervalle I);
int disjoint(intervalle a,intervalle b);
int max(int a,int b);
int min(int a,int b);


int main(int argc, char *argv[]) {
	
	intervalle i1,i2;     int rep;
	
	i1=lire();
	
	afficher(i1);
		
	rep=vide(i1);
	
	printf("\n");
	
	i2=lire();
	
	afficher(i2);
	
	rep=vide(i2);
	
	printf("\n");
	
	printf("les deux intervalles sont ils intersecte ?\n");
	
	intersection(i1,i2);
	
	printf("\n");
	
	printf("les deux intervalles sont ils disjoints ?\n");
	
	disjoint(i1,i2);
	
	printf("\n");
	
	printf("la reunion est:");
	
	reunion(i1,i2);
	
	
  getch();
	
  return 0;
}

intervalle lire(){
	
	intervalle I;
	
	printf("donner les bornes de l'intervalle:\n");
	printf("la borne sup:");
	scanf("%d",&I.sup);
	printf("la borne inf:");
	scanf("%d",&I.inf);
       printf("\n");
       
  return I;
}

void afficher(intervalle I){
	
	printf("afficher les bornes:\n");
	printf("la borne sup est:%d\n",I.sup);
	printf("la borne inf est:%d\n",I.inf);
	printf("[%d,%d]\n",I.inf,I.sup);
}

int vide(intervalle I){
	
	if(I.inf>I.sup){
	  return 1;
	}else{
	  return 0;
	} 
}

intervalle intersection(intervalle a,intervalle b){
	
	if(vide(a)==0  && vide(b)==0){
		
		if(a.sup>b.inf){
			printf("Reponse:les deux intervalle intersecte.\n");
		}else{
			printf("Reponse:les deux intervalles sont disjoints.\n");
		}
	} 
	
}

int disjoint(intervalle a,intervalle b){
	
	if(vide(a)==0  && vide(b)==0){
	if(a.sup<b.inf){
		printf("Reponse:les deux intervalles sont disjoints.\n");   return 1;
	}else{
		printf("Reponse:les deux intervalles ne sont pas disjoints.\n");  return 0;
	} 
   }
}

int max(int a,int b){
	
	int m;
	if(a<b) m=b;
	else m=a;
	return m;
}

int min(int a,int b){
	
	int m;
	if(a>b) m=b;
	else m=a;
	return m;
	
}

intervalle reunion(intervalle a,intervalle b){
	
	int Min,Max;
	Min=min(a.inf,b.inf);
	Max=max(a.sup,b.sup);
	if(vide(a)==0  && vide(b)==0){
		if(vide(a)==0  && vide(b)==0){
		printf("[%d,%d]\n",Min,Max);
    	}
	}

}
