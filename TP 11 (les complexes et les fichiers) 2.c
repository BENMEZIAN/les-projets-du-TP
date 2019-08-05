#include <stdio.h>
#include <stdlib.h>

typedef struct complexe{
	float reel;
	float img;
}complexe;

// prototype des fonctions 
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
	
	FILE *f;  int x;  complexe z;
	
	f=fopen("TP 11.txt","w");
	
	do{
	printf("donner un complexe:\n");
	printf("la partie reelle:");
	scanf("%f",&z.reel);
	printf("la partie imaginaire:");
	scanf("%f",&z.img);
	fprintf(f,"%f",z.reel);
	fprintf(f,"+%fi\n",z.img);
	printf("donner x:");
	scanf("%d",&x); 
	}while(x>0);
	
	fclose(f);
}

void display(){
	
	FILE *f;          char caractere;
	
	f=fopen("TP 11.txt","r");
	
	while(!feof(f)){
		caractere = fgetc(f); 
        printf("%c",caractere);
	}
	
	fclose(f);
	
}
