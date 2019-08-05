#include<stdio.h>
#include<conio.h>
#include<stdbool.h>
#define max 20

int search1(int T[],int taille,int val);
int search2(int T[max][max],int n,int m,int val);

int main(int argc, char *argv[]) {
	
	int A[max][max],i,j,n,m;     int val;
	
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
	
	printf("donner la valeur a rechercher:");
	scanf("%d",&val);
	
	printf("\n");
	printf("chercher par ligne:\n"); 
	
	for(i=0;i<n;i++){
		search1(A[i],m,val);
	}
	
	printf("\n");
	printf("chercher globalement(toute la matrice):\n");
	
		search2(A,n,m,val);
	
	return 0;
}
      // chercher par ligne 
int search1(int T[],int taille,int val){
	
	int i;  bool trouve=false;
	
	for(i=0;i<taille;i++){
		if(T[i]==val){
			trouve=true;
			break;
		}
	}
	if(trouve==false){
		printf("la valeur %d n'existe pas.\n",val);
	}else{
		printf("la valeur %d existe.\n",val);
	}
	
	return 0;	
}
     // chercher globalement 
int search2(int T[max][max],int n,int m,int val){
	
	int i,j;  bool trouve=false;
	
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(T[i][j]==val){
			trouve=true;
			break;
		}
	  }
	}
	if(trouve==false){
		printf("la valeur %d n'existe pas.\n",val);
	}else{
		printf("la valeur %d existe.\n",val);
	}
	
	return 0;	
}

