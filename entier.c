#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	float a,b,c,m;
	char nom[80];
	

	
	printf("veiller entrée le nom de l'apprenant(e):\n");
	scanf("%s", nom);
	
	

	printf("Entrez la 1ere note : ");
	scanf("%f", &a);
	printf("Entrez la 2eme note : ");
	scanf("%f", &b);
	printf("Entrez la 3eme note : ");
	scanf("%f", &c);
	
	m=(a+b+c)/3;
	printf("\n %s moyenne des 3 notes est %.2f\n",nom,m);
	
	printf("Mention : ");
    if(m < 10)
	{
		printf("MEDIOCRE\n");
    }	
	else if(m == 10)
	{
		printf("PASSABLE\n");
	}
    else if(m >= 12 && m <=14){
		printf("TRES BIEN\n");
    }
    else
    {
        printf("EXCELLENT");
    }
	return 0;
} 
