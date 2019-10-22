#include <stdio.h> //En entête les bibliothèques.
#include <stdlib.h>
#include <math.h>
//#include <ctype.h>



int main()
{
    /*char carac;
    carac=getchar();
    while ((carac>='a'&&carac<='z')||(carac>='A' && carac<='Z'))//(isalpha(carac))
    {
        printf("Veuillez entrer un caractere.\n");
        scanf("%c",&carac);
        fflush(stdin);
        printf("Votre caractere est %c.\n",carac);
    }*/

    int nI,nN,nSom;
    //Exercice 1.1
    nSom=0;
    nI=0; //Vérifier que nI soit bien différent du test.
    while (nI<4)
    {
        printf("Donnez un entier pour obtenir la somme de 4 entiers.\n");
        scanf("%d",&nN);
        fflush(stdin);
        nSom+=nN;
        nI++; //Ne pas oublier l'incrément.
    }
    printf("Somme : %d\n",nSom);

    //Exercice 1.2
    nSom=0;
    nI=0;
    do
    {
        printf("Donnez un entier pour obtenir la somme de 4 entiers.\n");
        scanf("%d",&nN);
        fflush(stdin);
        nSom+=nN;
        nI++;
    }
    while (nI<4);
    printf("Somme : %d\n",nSom);

    //Exercice 2

    double lfNote=0.0,lfTotalNote=0.0;
    int nNbnote=0;
    do
    {
        printf("Veuillez entrer une note pour obtenir la moyenne des notes entrees, ou une valeur negative pour terminer.\n");
        scanf("%lf",&lfNote);
        fflush(stdin);
        if (lfNote>=0.0)
        {
            lfTotalNote=lfTotalNote+lfNote;
            nNbnote=nNbnote+1;
        }
        else if(nNbnote>0)
        {
            printf("Calcul de la solution.\n");
            lfTotalNote=(lfTotalNote/nNbnote);
            printf("La moyenne des notes est %lf \n",lfTotalNote);
        }
        else
        {
            printf("Vous n'avez pas rentrer de notes, fin du programme.\n");
        }
    }while(lfNote>=0);



    //Exercice 3

    int nNi,nJ=1;
    nI=1;
    printf("Veuillez rentrer une taille pour le triangle. \n");
    scanf("%d",&nNi);
    fflush(stdin);
    for (nI=1;nI<=nNi;nI++)
    {
        for(nJ=1;nJ<=nI;nJ++)
        {
            printf("*");
        }
        printf("\n");
    }

    //Exercice 4

    printf("Veuiller entrer un entier pour verifier si il est premier.\n");
    int nPremier,nBoolPremier=1,nR;
    double lfResultPremier=1;
    scanf("%d",&nPremier);
    if (nPremier==1)
    {
        lfResultPremier=0;
    }
    else
    {
        for (nR=2;nR<=(nPremier/2);nR++)
        {
            lfResultPremier=(nPremier%nR);
            if (lfResultPremier==0.0)
            {
                nBoolPremier=0;
            }
        }
    }
    if (nBoolPremier==1)
    {
        printf("%d est premier.\n",nPremier);
    }
    else
    {
        printf("%d n'est pas premier.\n",nPremier);
    }

    //Exercice 5
    printf("Veuillez rentrer la n-ieme valeur que vous voulez voir dans la suite de Fibonacci.\n");
    int nNieme=1;
    scanf("%d",&nNieme);
    fflush(stdin);
    if (nNieme<=2)
    {
        printf("La valeur de %d la suite de Fibonacci est 1 \n",nNieme);
    }
    else
    {
        int nU=1,nX=0,nO=1,nP=1;
        while(nU++<nNieme)
        {
            nX=nO+nP;
            nO=nP;
            nP=nX;
        }
        printf("La valeur du numero %d de la suite de Fibonacci est %d \n",nNieme,nX);
    }

    //Exercice 6

    int nImult=1,nJmult=1,nRmult=1;
    for (nImult=1; nImult<=10; nImult++)
    {
        for (nJmult=1;nJmult<=10;nJmult++)
        {
            nRmult=nImult*nJmult;
            printf("%4d",nRmult); //%4d pour limiter ou donner une taille max à l'affichage.
        }
        printf("\n");
    }

    return 0;
}
