#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

typedef struct complexe{
	float reel;
	float img;
}complexe;

int main(int argc, char *argv[]) {
	
    int i,n,*p;       int *t;
	
	complexe *T;
	
/*	p=(int*)malloc(sizeof(int));
	
	printf("donner la valeur de p^:");
	scanf("%d",&(*p));
	
	printf("p^:%d\n",*p);
	printf("l'adresse:%u\n",p);*/
//-------------------------------------------------------
    /* printf("donner la valeur de n:");
     scanf("%d",&n);
     
    t=(int*)malloc(n*sizeof(int));
    
    if(t){
    	printf("le tableau est allouee.\n");
	}
	
	printf("\n");
	
	for(i=0;i<n;i++){
		printf("donner le nombre t[%d]:",i);
		scanf("%d",&t[i]);
	}
	
	printf("\n");
	
	for(i=0;i<n;i++){
		printf("le nombre t[%d] vaut:%d\n",i,t[i]);
	}
	
	       free(t);
	       
	printf("t[%d]:",i,t[i]);*/
//----------------------------------------------
      
     printf("donner la valeur de n:");
     scanf("%d",&n);

     T=(complexe*)malloc(n*sizeof(complexe));
     
      if(T){
    	printf("le tableau est allouee.\n");
	}
	
	printf("\n");
	
	for(i=0;i<n;i++){
		printf("donner le nombre t[%d]:\n",i);
		printf("donner la partie reelle:");
		scanf("%f",&T[i].reel);
		printf("donner la partie imaginaire:");
		scanf("%f",&T[i].img);
	}
	
	printf("\n");
	
	for(i=0;i<n;i++){
		printf("le nombre T[%d]vaut:%f+i%f\n",i,T[i].reel,T[i].img);
	}
	
	       free(t);
     












  getch();
	
	
	return 0;
}
