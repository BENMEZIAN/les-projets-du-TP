#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define max 30

// prototypes des fonctions
void lire(int A[max][max],int n,int m);
void afficher(int A[max][max],int n,int m);
void somme(int A[max][max],int B[max][max],int C[max][max],int n,int m);


int main(int argc, char *argv[]) {
	
	    int A[max][max],B[max][max],C[max][max];
	    int n,m;

   do{
     printf("donner la valeur de n:");
     scanf("%d",&n);
   }while(n<=0);

   do{
     printf("donner la valeur de m:");
     scanf("%d",&m);
   }while(m<=0);

   printf("LA MATRICE A:\n");
    
	lire(A,n,m);
   
   printf("\n");

    afficher(A,n,m);
   
   printf("LA MATRICE B:\n");
   
   lire(B,n,m);

   printf("\n");

   afficher(B,n,m);
   
   printf("LA MATRICE C:\n");
	
   	somme(A,B,C,n,m);
	
	afficher(C,n,m);
	
  getch();		
	
	
	return 0;
}

void lire(int A[max][max],int n,int m){
	
	int i,j;
   for(i=0;i<n;i++){
     for(j=0;j<m;j++){
       printf("donner la valeur de A[%d][%d]:",i,j);
        scanf("%d",&A[i][j]);
     }
   }
}

void afficher(int A[max][max],int n,int m){
	
	int i,j;
	for(i=0;i<n;i++){
     for(j=0;j<m;j++){
     	printf("%d ",A[i][j]);
     } 
     printf("\n"); 
   }
}

void somme(int A[max][max],int B[max][max],int C[max][max],int n,int m){
	
	int i,j;
	for(i=0;i<n;i++){
     for(j=0;j<m;j++){
     	C[i][j]=A[i][j]+B[i][j];
     } 
   }
}



