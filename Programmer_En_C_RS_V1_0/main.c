#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define TAILLE 5
//Les Typedef

typedef struct tpoint
{   int num;
    float x;
    float y;
} tpoint;


//LES PROTOTYPES
void exercice1();
void exercice2();
void initTableauTPoint (tpoint tpointTab[],int nTailleTab);
void scanTableauTPoint(tpoint tpointTab[],int nTailleTab);
void afficheTableauTPoint(tpoint tpointTab[],int nTailleTab);


int main()
{
    //exercice1();
    exercice2();

    return 0;
}

void exercice1()
{
    int nI;
    tpoint ptTableau[TAILLE];
    for (nI=0;nI<TAILLE;nI++)
    {
        ptTableau[nI].num=nI+1;
        ptTableau[nI].x=0.0;
        ptTableau[nI].y=0.0;
    }
    for (nI=0;nI<TAILLE;nI++)
    {
        printf("Veuillez rentrer la valeur en x du point numero %d.\n",nI+1);
        scanf("%f",&ptTableau[nI].x);
        fflush(stdin);
        printf("Veuillez rentrer la valeur en x du point numero %d.\n",nI+1);
        scanf("%f",&ptTableau[nI].y);
        fflush(stdin);
    }
    for (nI=0;nI<TAILLE;nI++)
    {
        printf("La valeur en x du point numero %d est %f.\n",nI+1,ptTableau[nI].x);
        printf("La valeur en y du point numero %d est %f.\n",nI+1,ptTableau[nI].y);
    }
}

void exercice2()
{
    tpoint ptTableau[TAILLE];
    initTableauTPoint(ptTableau,TAILLE);
    scanTableauTPoint(ptTableau,TAILLE);
    afficheTableauTPoint(ptTableau,TAILLE);
}

void initTableauTPoint (tpoint tpointTab[],int nTailleTab)
{
    int nI;
    for (nI=0;nI<nTailleTab;nI++)
    {
        tpointTab[nI].num=nI+1;
        tpointTab[nI].x=0.0;
        tpointTab[nI].y=0.0;
    }
}

void scanTableauTPoint(tpoint tpointTab[],int nTailleTab)
{
    int nI;
    for (nI=0;nI<TAILLE;nI++)
    {
        printf("Veuillez rentrer la valeur en x du point numero %d.\n",nI+1);
        scanf("%f",&tpointTab[nI].x);
        fflush(stdin);
        printf("Veuillez rentrer la valeur en x du point numero %d.\n",nI+1);
        scanf("%f",&tpointTab[nI].y);
        fflush(stdin);
    }
}

void afficheTableauTPoint(tpoint tpointTab[],int nTailleTab)
{
    int nI;
    for (nI=0;nI<TAILLE;nI++)
    {
        printf("La valeur en x du point numero %d est %f.\n",nI+1,tpointTab[nI].x);
        printf("La valeur en y du point numero %d est %f.\n",nI+1,tpointTab[nI].y);
    }
}
