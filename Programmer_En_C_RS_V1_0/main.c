#include <stdio.h> //En ent�te les biblioth�ques.
#include <stdlib.h>
#include <math.h>

                //Apr�s les constantes.
#define NFOIS 5 //Ecriture de constantes. (elle n'est pas typ�e)
                //Constante, g�n�r�e � l'ex�cution.
#define PI 3.14
#define NOM "Lehmann"
#define CAR 'x'

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

 //   const int cnT=10; //Constante locale au programme principal, et d�j� g�n�r�e.

 //   volatile int nVolB;

 //   static int nStatb;

    //Le choix du type de la variable d�fini la taille en octet de l'encodage choisit.

    printf("Taille de a : %d octets\n",sizeof(nA)); //sizeof retourne la taille en octet.
    printf("Taille de b : %d octets\n",sizeof(nB));
    printf("Taille de c : %d octets\n",sizeof(nC));

    //Real
    float fltReelSimple;

    double dblReelDouble;

    printf("Taille de fltReelSimple : %d octets\n",sizeof(fltReelSimple));
    printf("Taille de dblReelDouble : %d octets\n",sizeof(dblReelDouble));

    //Caract�re

    char cCaractere;
    printf("Taille de cCaractere : %d octets\n",sizeof(cCaractere));

    //Tester les Define.

    printf("Afficher le #define NFOIS : %d \n",NFOIS);
    printf("Afficher le #define PI : %f \n",PI);
    printf("Afficher le #define NOM : %s \n",NOM);
    printf("Afficher le #define CAR : %c \n",CAR);

    //Op�rateurs.

    int nI=0;
    ++nI; //pre-incrementation
    nI++;//post-incr�mentation.
    //% modulo.
    /* / division */



    //Cast
    long double ldblLongDouble=105.08933259635;
    printf("Valeur de ldblLongDouble : %lf",(double)ldblLongDouble);

    //Op�rateurs relationnels.
    // >
    // <
    // >=
    // <=
    // ==
    // !=

    //Op�rateurs logiques
    // &
    // &&
    // |
    // ||
    // !


    //Factorisation des op�rateurs.
    // +=
    // -=
    // *=
    // /=
    // %=
    // ....

    // nA+=nB;

    return 0;
}
