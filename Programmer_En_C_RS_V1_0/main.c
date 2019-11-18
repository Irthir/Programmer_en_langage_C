#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define TAILLE 100

//Les pointeurs
char *tabCar(char cChaine[100]); //prend en argument une chaine de 0 à 99.
int *ntabInt(int nEntier[100]); //on manipule un tableau d'entier à travers le pointeur d'entier.
int *ntabInt2D(int nEntier[10][10]); //on manipule aussi un pointeur, mais un tableau à 2 dimensions.


//Les tableaux 2 dimensions et procédures
int main()
{
    char cSaisie[100]={"Votre Nom"};
    char *cNom;
    //Formalisme tableau
    cNom=tabCar(cSaisie);

    printf("Votre Nom %s.\n",cNom);

    //Tableau d'entiers
    int nEntier[100]={0};
    ntabInt(nEntier);

    int nEntier2D[10][10];
    int *pInt=ntabInt2D(nEntier2D);

    int i;
    int *p;
    for (i=0; i<100;i++)
    {
        printf("%d",*(pInt)++);
        p=pInt;
    }


	return 0;
}

char *tabCar (char cChaine[100]) //Un tableau est un pointeur.
{
    printf("Entrez votre nom.\n");
    scanf("%s",cChaine);

    return cChaine;
} //Cette fonction retourne un tableau à 1 dimension.

int *ntabInt(int nEntier[100])
{
    int nI;
    //formalisme pointeur
    for (nI=0;nI<100;nI++)
    {
        *(nEntier+nI)=0; //Ecriture bizarre, c'est l'adresse en mémoire qu'on incrémente pour affecter la valeur.
        //nEntier[nI]=0;

    }

    return nEntier;
}

int *ntabInt2D(int nEntier[10][10])
{
    int i,j;

    //formalisme pointeur.
    for (i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            *(*(nEntier+i)+j)=10; //nEntier[i][j]=10;
        }
    }
    return (int*)nEntier;
}
