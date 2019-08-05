#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float Newton(float ,float );

main() {
	     
	     float tab[10];int n,i;  float R,precision=0.001;
	     
	         printf("donner la valeur de n:");
	         do{
	         	scanf("%d",&n);
			 }while(n<=0 ||  n>10);
			 
			 for(i=0;i<n;i++){
			 	printf("l'element tab[%d] est:",i);
			 	scanf("%f",&tab[i]);
			 }
			 
			 printf("\n");
			 
			  for(i=0;i<n;i++){
			 	printf("l'element tab[%d] est:%f\n",i,tab[i]);
			 }
			 
			  printf("\n");
			 
			  for(i=0;i<n;i++){
			 R=Newton(tab[i],precision);
			 printf("la racine de %d vaut:%f\n",tab[i],R); 
			 }
			 
			 
	return 0;
}


float Newton(float a,float eps){
	
	float u,v,d;
	
	u=a/2;
	v=0.5*(u+a/u);
	d=fabs(u-v);
	while(d>=eps){
		u=v;
		v=0.5*(u+a/u);
		d=fabs(u-v);
	}
	return v;
}
