#include <stdio.h> //En ent�te les biblioth�ques.
#include <stdlib.h>
#include <math.h>

#define TAILLE 10
#define MOT "HELLO"


//Les entr�es et sorties conversationnelles.


int main()
{
    //Affichage
    printf("%d\n",TAILLE);
    printf("%s\n",MOT);

    //Saisie

    int val;
    scanf("%d",&val);
    fflush(stdin);//Pour vider le buffer de la saisie, pour �viter qu'il valide automatiquement le caract�re.
    char car;
    scanf("%c",&car);
    fflush(stdin);
    char tabCar[TAILLE]; //De 0 � TAILLE-1
    gets(tabCar);
    //fgets(tabCar,TAILLE,stdin); //On l'utilisera pour r�cup�rer des donn�es dans des fichiers.
    printf("%s",tabCar);
    //Toujours faire attention au buffer de saisie.
    //La validation de la saisie dans le buffer se fait avec \0.
    return 0;
}
