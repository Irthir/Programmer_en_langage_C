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

    int i,n,som;
    //Exercice 1.1
    som=0;
    i=0;
    while (i<4)
    {
        printf("Donnez un entier pour obtenir la somme de 4 entiers.\n");
        scanf("%d",&n);
        fflush(stdin);
        som+=n;
        i++;
    }
    printf("Somme : %d\n",som);

    //Exercice 1.2
    som=0;
    i=0;
    do
    {
        printf("Donnez un entier pour obtenir la somme de 4 entiers.\n");
        scanf("%d",&n);
        fflush(stdin);
        som+=n;
        i++;
    }
    while (i<4);
    printf("Somme : %d\n",som);

    //Exercice 2

    double note=0.0,totalnote=0.0;
    int nbnote=0;
    while(note>=0)
    {
        printf("Veuillez entrer une note pour obtenir la moyenne des notes entrees, ou une valeur negative pour terminer.\n");
        scanf("%lf",&note);
        fflush(stdin);
        if (note>=0.0)
        {
            totalnote=totalnote+note;
            nbnote=nbnote+1;
        }
        else if(nbnote>0)
        {
            printf("Calcul de la solution.\n");
            totalnote=(totalnote/nbnote);
            printf("La moyenne des notes est %lf \n",totalnote);
        }
        else
        {
            printf("Vous n'avez pas rentrer de notes, fin du programme.\n");
        }
    }



    //Exercice 3

    int ni;
    printf("Veuillez rentrer une taille pour le triangle. \n");
    scanf("%d",&ni);
    fflush(stdin);
    const int compteur=ni;
    i=1;
    int j=1;
    for (i=1;i<=compteur;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }

    //Exercice 4

    printf("Veuiller entrer un entier pour verifier si il est premier.\n");
    int premier;
    scanf("%d",&premier);
    int boolpremier=1;
    double resultpremier=1;
    int r;
    if (premier==1)
    {
        resultpremier=0;
    }
    else
    {
        for (r=2;r<=(premier/2);r++)
        {
            resultpremier=(premier%r);
            if (resultpremier==0.0)
            {
                boolpremier=0;
            }
        }
    }

    if (boolpremier==1)
    {
        printf("%d est premier.\n",premier);
    }
    else
    {
        printf("%d n'est pas premier.\n",premier);
    }

    //Exercice 5
    printf("Veuillez rentrer la n-ieme valeur que vous voulez voir dans la suite de Fibonacci.\n");
    int nieme=1;
    scanf("%d",&nieme);
    fflush(stdin);
    if (nieme<=2)
    {
        printf("La valeur de %d la suite de Fibonacci est 1 \n",nieme);
    }
    else
    {
        int u=1;
        int x=0;
        int o=1;
        int p=1;
        for (u=2;u<nieme;u++)
        {
            x=o+p;
            o=p;
            p=x;
        }
        printf("La valeur du numero %d de la suite de Fibonacci est %d \n",nieme,x);
    }

    int imult=1;
    int jmult=1;
    int rmult=1;
    for (imult=1; imult<=10; imult++)
    {
        for (jmult=1;jmult<=10;jmult++)
        {
            rmult=imult*jmult;
            printf(" %d ",rmult);
        }
        printf("\n");
    }

    return 0;
}
