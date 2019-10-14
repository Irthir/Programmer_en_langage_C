#include <stdio.h> //En ent�te les biblioth�ques.
#include <stdlib.h>
#include <math.h>

                //Apr�s les constantes.
#define NFOIS 5 //Ecriture de constantes. (elle n'est pas typ�e)

//Exemple de programme en C

int main() //Programme principal qui est une fonction qui retourne un entier.
{
    //Note : Utiliser la doc http://www.cplusplus.com/

    int i;
    float x;
    float racx;

    printf("Bonjour\n");//printf pour �crire dans un affichage format�. On pourra plus tard justifier la notion de formats. Il a besoin de la biblioth�que <stdio.h>.
    printf("Calcule de %d racines carree \n",NFOIS); //Le %d sert � sp�cifier le former de la donn�e.

    for(i=0; i<NFOIS; i++)
    {
        printf("Donnez un nombre :");
        scanf("%f",&x); //Fonction servait � r�cup�rer la saisie de donn�e d'un certaon type. %f pour le float. Le &x est la r�f�rence de la variable x. On demande un float et on le met dans x avec la r�f�rence de x.
        if (x<0.0) //.0 important car c'est un r�el
            printf("Le nombre %f ne possede pas de racine carree\n",x);
        else
        {
            racx=sqrt(x);
            printf("Le nombre %f a pour racine carree : %f\n",x,racx);
        }
    }

    printf("Travail Termine - Au revoir."); //On �vite les accents sur la console.

    /*
    racx=sqrt(x);
    printf("Je vais vous calculer la racine carree %lf",sqrt(x));//On va d�finir le former de la valeur de sqrt � afficher. Il qualifie la valeur correspondant � ce % en passant la r�f�rence de l'argument apr�s la virgule.
    */

    return 0; //L'entier retourn�.
}//Si le programme principal est une fonction on retourne, sinon on ferme juste les accolades.
