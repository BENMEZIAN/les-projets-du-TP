#include<stdio.h>
#define max 20

int min(int T[],int taille);

int main(int argc, char *argv[]) {
	
	int A[max][max],i,j,n,m;     int Vmin[max];
	
	printf("donner la valeur de n:");
	
	do{
		scanf("%d",&n);
	}while(n<=0  ||  n>max);
	
	printf("donner la valeur de m:");
	
	do{
		scanf("%d",&m);
	}while(m<=0  ||  m>max);
	
	printf("\n");
	
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("donner l'element A[%d][%d]:",i,j);
			scanf("%d",&A[i][j]);
		}
	}
	
	printf("\n");
	
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d ",A[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	
	for(i=0;i<n;i++){
		Vmin[i]=min(A[i],m);
		printf("la valeur minimale du ligne numero %d est:%d\n",i,Vmin[i]);
	}
	
	return 0;
}

int min(int T[],int taille){
	
	int i,min;
	
	min=T[0];
	
	for(i=1;i<taille;i++){
		if(T[i]<min){
			min=T[i];
		}
	}
	
	return min;	
}
