#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
    int i= 0,n=2;
    char code[25];
    int tab[4] = {123,456,789,543};
    int  verif_saisie ( char reponse[ 25 ])
{
    // déclaration du compteur de la chaine de caractère
    int comptage= 0 ;
    for ( int i = 0 ; i < strlen (reponse); i++)
    {
        if (reponse[i]>= '0' && reponse[i] <= '9' )
        {
            comptage++ ;
        }
    }
        if (comptage == strlen (reponse))
        {
            return 1 ;
        }
        else
        {
            return 0 ;
        }
}
    
    
    printf("veiller saisir le code secret \n");
    scanf("%s", code);
    while (verif_saisie(code) == 0)
    {
        if (n == 2)
        {
            printf("veiller saisir un entier \n");
            scanf("%s", code);
        }
        // vérification nbre de tentative
        if (n == 1)
        {
            printf("il vous reste %d tentative\n",n);
            scanf("%s", code);
        }
        if (n == 0)
        {
            printf("Compte bloqué");
            return 0;
        }
        
        n--;
    }
    // lorsque en saisie un entier on peut rentrée dans cette boucle 
    // mm si le code ne pas correct 
    while (atoi(code)!=tab[i])
    {
        if (i<4)
        {
            i++;
        }
        else
        {
            if (n>0)
            {
            printf("il vous reste %d tentative\n",n);
                scanf("%s", code);
                n--;
                i=0;
            }
            else
            {
                printf("utilisateur bloqué");
                return 0;
            }
            while (verif_saisie(code) == 0)
            {
               // vérification nbre de tentative après la 2èm tentative 
                if (n == 2)
                {
                    printf("veiller saisir un entier \n");
                    scanf("%s", code);
                }
                
                if (n == 1)
                {
                    printf("il vous reste %d tentative\n",n);
                    scanf("%s", code);
                }
                if (n == 0)
                {
                    printf("Compte bloqué");
                    return 0;
                }
                
                n--;
            }
        }
        
    }
        
        printf("code correct");
        /*if (scanf("%d",&code) !=1)
        {
            printf("veiller saisir un entier");
            scanf("%d",&code);

        }*/
        
        return 0;
 }       

