#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define max 20

typedef struct matrice{
	int n;
	int m;
	int t[max][max];
}matrice;

// prototype des fonctions
matrice lire();
void afficher(matrice M);
matrice somme(matrice M1,matrice M2);
int trace(matrice M);
matrice trans(matrice M);
matrice prod(matrice M1,matrice M2);

int main(int argc, char *argv[]) {
	
	matrice M1,M2,M3,M4;  int i,j;  int choix;
	
	do{
      	printf("---------les operations sur les matrices----------\n");
	    printf("1-lecture.\n");
	    printf("2-affichage.\n");
	    printf("3-somme.\n");
	    printf("4-produit.\n");
	    printf("5-trace.\n");
	    printf("6-trasposee.\n");
	    printf("7-quitter\n");
	    printf("---------------------------------\n");
	    printf("donner votre choix:");
	   	scanf("%d",&choix);
	   	switch(choix){
	   		case 1:M1=lire();  
	   		       M2=lire();
	   		break;
	   		case 2:afficher(M1);
	   		        printf("\n");
			       afficher(M2); 
	   		break;
	   		case 3:if(M1.n==M2.n  &&  M1.m==M2.m){
		
                  printf("la somme des deux matrices:\n");
   
                  M3=somme(M1,M2);
    
                  afficher(M3);
                   }
                   else {
	              printf("les dimensions sont incompatibles.\n");
	             }
	   		break;
	   		case 4:if(M1.m==M2.n){
	
                  printf("la produit des deux matrices:\n");
    
                   M4=prod(M1,M2);
    
                   afficher(M4);
                  }
                  else {
   	              printf("les dimensions sont incompatibles.\n");
                 }
	   		break;
	   		case 5:printf("\n les sommes des diagonales:\n");
                   printf("M1:\n");
                   trace(M1);
                   printf("M2:\n");
                   trace(M2);
                   printf("M3:\n");
                   trace(M3);
                   printf("M4:\n");
                   trace(M4);
	   		break;
	   		case 6:printf("\n les matrices trasposees:\n");
                   printf("M1:\n");
                   trans(M1);
                   printf("M2:\n");
                   trans(M2);
                   printf("M3:\n");
                   trans(M3);
                   printf("M4:\n");
                   trans(M4);
	   		break;
	   		case 7:exit(-1);
	   		break;
		   }

	  }while(choix!=6);

    
 getch();
	
	
	return 0;
}

matrice lire(){
	
	matrice M;   int i,j;
	
	printf("donner le nombre des lignes:");
	do{
		scanf("%d",&M.n);
	}while(M.n<0 || M.n>max);
	
	printf("donner le nombre des colonnes:");
	do{
		scanf("%d",&M.m);
	}while(M.m<0 || M.m>max);
	
	printf("\n");
	
	for(i=0;i<M.n;i++){
   	 for(j=0;j<M.m;j++){
   	 	printf("donner la valeur de l'element[%d][%d]:",i,j);
   	 	scanf("%d",&M.t[i][j]);
	 }
   }
        printf("\n");
  return M;
}

void afficher(matrice M){
	
	int i,j;
	for(i=0;i<M.n;i++){
     for(j=0;j<M.m;j++){
     	printf("%d ",M.t[i][j]);
     } 
     printf("\n"); 
   }
}

matrice somme(matrice M1,matrice M2){       
	 
	 matrice M3;

	 	int i,j;
	for(i=0;i<M1.n;i++){
       for(j=0;j<M1.m;j++){
        M3.t[i][j]=M1.t[i][j]+M2.t[i][j];
       } 
       printf("\n"); 
    }
     M3.n=M1.n;
     M3.m=M1.m;

     return M3;
}

int trace(matrice M){
	
	int i,j,s=0;
	if(M.m==M.n){	
	   for(i=0;i<M.n;i++){
         for(j=0;j<M.m;j++){
          if(i==j){
        	s=s+M.t[i][j];
		   }
         } 
       }
      printf("la somme de diagonale vaut:%d\n",s);
	}else{
		printf("matrice n'est pas carree.\n");
	}
  return s;	
}

matrice trans(matrice M){
	
	int i,j;  matrice B;
	for(i=0;i<M.n;i++){
        for(j=0;j<M.m;j++){
          B.t[j][i]=M.t[i][j];
        } 
    }
	for (i=0;i<M.m;i++){
        for (j=0;j<M.n;j++){
         	printf("%4d", B.t[i][j]);  
		}
         printf("\n");
    }
    return B;
}

matrice prod(matrice M1,matrice M2){
	
	int i,j,k; matrice M3;

  	for(i=0;i<M1.n;i++){
        for(j=0;j<M2.m;j++){
         M3.t[i][j]=0;
          for(k=0;k<M2.m;k++){
          	M3.t[i][j]=M3.t[i][j]+M1.t[i][k]*M2.t[k][j];
		  }
        } 
    }
    M3.n=M1.n;
    M3.m=M1.m;
    
  return M3;
}
