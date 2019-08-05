#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct complexe{
	float reel;
	float img;
}complexe;

// prototype des fonctions 
complexe lire();
void affiche(complexe a);
complexe som(complexe a,complexe b);
complexe diff(complexe a,complexe b);
complexe prod(complexe a,complexe b);
complexe conju(complexe a);
float module(complexe a);


int main(int argc, char *argv[]) {
	
	complexe z1,z2;
	
	z1=lire();
	
	printf("z1=");
	affiche(z1);
	
	printf("\n");
	
	z2=lire();
	
	printf("z2=");
	affiche(z2);
	
	printf("\n");

	printf("prod=%f+i%f\n",prod(z1,z2).reel,prod(z1,z2).img);

	printf("\n");
	
	printf("som=%f+i%f\n",som(z1,z2).reel,som(z1,z2).img);
	
	printf("\n");
	
	printf("diff=%f+i%f\n",diff(z1,z2).reel,diff(z1,z2).img);
	
	printf("\n");
	
	printf("le module de z1 vaut:%f\n",module(z1));
	printf("le module de z2 vaut:%f\n",module(z2));
	
	printf("\n");
	
	printf("le conjuge de z1 vaut:%f%fi\n",conju(z1).reel,conju(z1).img);
	printf("le conjuge de z1 vaut:%f%fi\n",conju(z2).reel,conju(z2).img);
	

	return 0;
}

complexe lire(){
	
	 complexe z;
	printf("donner le nombre que vous voulez:\n");
	printf("la partie reelle:");
	scanf("%f",&z.reel);
	printf("la partie imaginaire:");
	scanf("%f",&z.img);
	
  return z;
}

void affiche(complexe a){
	
		printf("%f",a.reel);
	
	if(a.img>0){
		printf("+%fi\n",a.img);
	}else{
		printf("%fi\n",a.img);
	}
	
}

complexe som(complexe a,complexe b){
	
	complexe c;
	
	c.reel=a.reel+b.reel;
	c.img=a.img+b.img;
	
  return c;	
}

complexe prod(complexe a,complexe b){
	
	complexe c;
	
	c.reel=a.reel*b.reel-a.img*b.img;
	c.img=a.reel*b.img+b.reel*a.img;
  return c;
}

complexe diff(complexe a,complexe b){
	
	complexe c; 
	
	c.reel=a.reel-b.reel;
	c.img=a.img-b.img;
  return c;	
}

float module(complexe a){
	
	float m;
	
	m=sqrt(a.reel*a.reel+a.img*a.img);
  return m;
}

complexe conju(complexe a){
	
	a.img=-a.img;
 return a;	
}
