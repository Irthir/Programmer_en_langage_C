#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define TAILLE 100

//Les prototypes
void FormalismeTableau();
void FormalismePointeur();
void Exercice1();

void Exercice2();
void MaxMinTableau(int nTailleTab,int nTab[],int *nMinTab,int *nMaxTab);

void Exercice3();
void RangeTableau(int nTailleTab,int nTab[]);

void Exercice4();
void SommeMatrice(int nTaille,double nMatrice1[],double nMatrice2[],double nMatrice3[]);


//Les exercices.
int main()
{
    //Exercice1();

    //Exercice2();

    //Exercice3();

    Exercice4();


	return 0;
}

void Exercice1()
{
    FormalismeTableau();
    FormalismePointeur();
}

void FormalismeTableau()
{
	int nTabMax[10]={0};
	for (int i = 0; i < 10; i++)
	{
		printf("Veuillez entrer la valeur numero : %d.\n",i+1);
		scanf("%d",&nTabMax[i]);
	}
    int nI;
    int nMax=nTabMax[0];
    int nMin=nTabMax[0];
    //formalisme pointeur
    for (nI=1;nI<10;nI++)
    {
        if (nTabMax[nI]>nMax)
        {
            nMax=nTabMax[nI];
        }
        if (nTabMax[nI]<nMin)
        {
            nMin=nTabMax[nI];
        }
    }
    printf("Minimum = %d Maximum = %d.\n",nMin,nMax);
}

void FormalismePointeur()
{
	int nTabMax[10]={0};
	for (int i = 0; i < 10; i++)
	{
		printf("Veuillez entrer la valeur numero : %d.\n",i+1);
		scanf("%d",nTabMax+i);
	}
    int nI;
    int nMax=*(nTabMax);
    int nMin=*(nTabMax);
    //formalisme pointeur
    for (nI=1;nI<10;nI++)
    {
        if (*(nTabMax+nI)>nMax)
        {
            nMax=*(nTabMax+nI);
        }
        if (*(nTabMax+nI)<nMin)
        {
            nMax=*(nTabMax+nI);
        }
    }
    printf("Minimum = %d Maximum = %d.\n",nMin,nMax);
}

void Exercice2()
{
    int nTailleTableau=15;
    int nTabMin[nTailleTableau];
    int nMin=0;
    int nMax=0;

    MaxMinTableau(nTailleTableau,nTabMin,&nMin,&nMax);

    printf("Minimum = %d Maximum = %d.\n",nMin,nMax);
}

void MaxMinTableau(int nTailleTab,int nTab[],int *nMinTab,int *nMaxTab)
{
    int nI=0;
    for (nI=0;nI<nTailleTab;nI++)
    {
        nTab[nI]=nI;
    }
    *nMinTab=nTab[0];
    *nMaxTab=nTab[0];
    for (nI=1;nI<nTailleTab;nI++)
    {
        if (nTab[nI]>*nMaxTab)
        {
            *nMaxTab=nTab[nI];
        }

        if (nTab[nI]<*nMinTab)
        {
            *nMinTab=nTab[nI];
        }
    }
}

void Exercice3()
{
    int nTailleTableau=15;
    int nTabMin[nTailleTableau];

    RangeTableau(nTailleTableau,nTabMin);

    printf("Minimum = %d Maximum = %d.\n",nTabMin[0],nTabMin[nTailleTableau-1]);
}

void RangeTableau(int nTailleTab,int nTab[])
{
    int nI=0;
    for (nI=0;nI<nTailleTab;nI++)
    {
        nTab[nI]=nI+50;
    }
    int nTemp=0;
    int nJ=0;
    for (nJ=1;nJ<nTailleTab;nJ++)
    {
        for (nI=0;nI<nTailleTab-1;nI++)
        {
            if (nTab[nI]>nTab[nI+1])
            {
                nTemp=nTab[nI];
                nTab[nI]=nTab[nI+1];
                nTab[nI+1]=nTemp;
            }
        }
    }
}

void Exercice4()
{
    int nTaille=10;
    int nX=0;
    double nMatrice1[nTaille];
    double nMatrice2[nTaille];
    double nMatrice3[nTaille];
    for (nX=0;nX<nTaille;nX++)
    {
        nMatrice1[nX]=nX*3.0;
        nMatrice2[nX]=nX*5.0;
        nMatrice3[nX]=0.0;
    }
    SommeMatrice(nTaille,nMatrice1,nMatrice2,nMatrice3);

    for (nX=0;nX<nTaille;nX++)
    {
        printf("%4.4lf \n",nMatrice3[nX]);
    }
}

void SommeMatrice(int nTaille,double nMatrice1[],double nMatrice2[],double nMatrice3[])
{
    int nY=0;
    for (nY=0;nY<nTaille;nY++)
    {
        nMatrice3[nY]=nMatrice1[nY]+nMatrice2[nY];
    }
}
