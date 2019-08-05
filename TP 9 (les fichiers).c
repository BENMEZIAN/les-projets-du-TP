#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

  /*    LES FONCTIONS DE LA MANIULATION DES FICHIERS
    a-déclaration d'un fichier  :   FILE *<fichier>;
  
   b-l'ouverture du fichier    :   <fichier>=fopen("nom de fichier","mode d'ouverture");
                                   mode d'ouverture : "r"=> lire
                                                      "w"=> écrire
                                                      "a"=> ajouetr
                                   
   c-l'ecriture dans un fichier:   fwrite(&variable,sizeof(bloc),nbBloc,<fichier>);  fichier binaire 
                                  fprintf(f,"%d",&variable);                        // // // texte
                                  
   d-la lecture d'un fichier   :   fread(&variable,sizeof(bloc),nbBloc,<fichier>);       fichier binaire 
                                  fscanf(f,"%d",&variable);                             // // // texte
                                  
   e-tester la fin de fichier  :   feof(<fichier>));
  
   f-la fermeture du fichier   :   fclose(<fichier>);                 
  */
void creation();
void display();

int main(int argc, char *argv[]) {
	     

    creation();
	printf("ok,merci beaucoup.\n");
	display();
	
  getch();	
	
	return 0;
}

void creation(){
	
	FILE *f;  int x;
	
	f=fopen("TP 9 essaye.txt","w");
	
	do{
		printf("donner un entier:");
		scanf("%d",&x);
		fprintf(f,"%d\n",x);
	}while(x>0);
	
	fclose(f);
} 

void display(){
	
	FILE *f;          char caractere;
	
	f=fopen("TP 9 essaye.txt","r");
	
	while(!feof(f)){
		caractere = fgetc(f); 
        printf("%c",caractere);
	}
	
	fclose(f);
	
}
