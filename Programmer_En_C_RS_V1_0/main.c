#include <stdio.h> //En entête les bibliothèques.
#include <stdlib.h>
#include <math.h>

                //Après les constantes.
#define NFOIS 5 //Ecriture de constantes. (elle n'est pas typée)
                //Constante, générée à l'exécution.
#define PI 3.14
#define NOM "Schlotter"
#define CAR 'x'

#define TAILLE 5

//Exemple de programme en C

//Commentaire en ligne.
/*Commentaire
Paragraphe*/


int main() //Programme principal qui est une fonction qui retourne un entier.
{
    //Integer
    short int nA; //short sn (shortinteger)
    int nB;
    long int nC; //long ln (longinteger)

 //   const int cnT=10; //Constante locale au programme principal, et déjà générée.

 //   volatile int nVolB;

 //   static int nStatb;

    //Le choix du type de la variable défini la taille en octet de l'encodage choisit.

    printf("Taille de a : %d octets\n",sizeof(nA)); //sizeof retourne la taille en octet.
    printf("Taille de b : %d octets\n",sizeof(nB));
    printf("Taille de c : %d octets\n",sizeof(nC));

    //Real
    float fltReelSimple;

    double dblReelDouble;

    printf("Taille de fltReelSimple : %d octets\n",sizeof(fltReelSimple));
    printf("Taille de dblReelDouble : %d octets\n",sizeof(dblReelDouble));

    //Caractère

    char cCaractere;
    printf("Taille de cCaractere : %d octets\n",sizeof(cCaractere));

    //Tester les Define.

    printf("Afficher le #define NFOIS : %d \n",NFOIS);
    printf("Afficher le #define PI : %f \n",PI);
    printf("Afficher le #define NOM : %s \n",NOM);
    printf("Afficher le #define CAR : %c \n",CAR);

    //Opérateurs.

    int nI=0;
    ++nI; //pre-incrementation
    nI++;//post-incrémentation.
    //% modulo.
    /* / division */



    //Cast
    long double ldblLongDouble=105.08933259635;
    printf("Valeur de ldblLongDouble : %lf \n",(double)ldblLongDouble);

    //Opérateurs relationnels.
    // >
    // <
    // >=
    // <=
    // ==
    // !=

    //Opérateurs logiques
    // &
    // &&
    // |
    // ||
    // !


    //Factorisation des opérateurs.
    // +=
    // -=
    // *=
    // /=
    // %=
    // ....

    // nA+=nB;

    //Structures conditions et boucles.

    int bool=1;
    printf("Si bool=1 alors écrire 10, sinon ecrire 100, ici bool=%d \n",bool);

    //La condition.
    if (bool==1) //Parenthèses obligatoires.
    {
        printf("10 \n");
    }
    else //Le sinon.
    {
        printf("100 \n");
    }

    bool=0;
    printf("Si bool=1 alors écrire 10, sinon ecrire 100, ici bool=%d \n",bool);
    if (bool==1)
    {
        printf("10 \n");
    }
    else
    {
        printf("100 \n");
    }

    //Condition avec les opérateurs logiques.
    int a=0,b=0,c=0,d=0;

    if ((a==b) && (a==c))
    {
        printf("Ils sont tous egaux\n");
    }
    else
    {
        printf("Ils sont differents\n");
    }

    if ((a==b)||(a==c))
    {
        printf("Ils sont egaux\n");
    }
    else
    {
        printf("Ils sont differents\n");
    }

    if ((a==b)||(a==c))
    {
        printf("Ils sont egaux\n");
    }
    else if((a==c) && (a!=d))
    {
        printf("blabla...\n");
    }
    else
    {
        printf("Ils sont differents\n");
    }

    printf("Pour i de 1 a 5 ecrire i. \n");

    //Boucle

    int i=0;

    for (i=1;i<= TAILLE;i++)
    {
        printf("%d \n",i);
    }

    //Le tant que

    printf("Tant que i<=10 ecrire i, en incrementant a la fin de la boucle. \n");

    const int t=10; //C'est pour être sûr d'avoir une valeur qui ne bougera pas.

    while (i<=t)
    {
        printf("%d \n",i);
        i++;
    }

    printf("Faire ecrire i Tant que i>0, en decrementant en debut de boucle. \n");

    do
    {
        i--;
        printf("%d \n",i);
    }
    while(i>0);

    //Les cas alternatifs de la condition.

    //Le switch case.

    int choix=-1; //Pour modifier après et ne pas avoir un des choix du cas.
    printf("Veuillez entrer votre choix.\n");
    scanf("%d",&choix);
    switch (choix)
    {
        case 0:printf("Quitter\n"); break;
        case 1:printf("Calculer\n"); break;
        case 2:printf("Jouer\n");break;
        default:printf("Defaut\n");break;
    }

    // test ?:instruction 1 : instruction 2

    a==b? printf("Egaux\n"):printf("Diff\n");

    printf("Test ternaire si i vaut 1 le numero prend la valeur 7, sinon il prend la valeur 14, puis ecrire le numero. \n");
    int lenumero;
    lenumero = (i==1) ? 7: 14;
    printf("%d \n",lenumero);

    i=1;
    lenumero = (i==1) ? 7: 14;
    printf("%d \n",lenumero);

    //L'instruction Break :

    for (i=1;i<= TAILLE;i++)
    {
        printf("%d \n",i);
        if(i==3)
        {
            break;
        }
    }

    //L'instruction Continue :

    for (i=1;i<= TAILLE;i++)
    {
        printf("%d \n",i);
        if(i<3)
        {
            printf("continue\n");
            continue;
        }
    }


    return 0;
}
