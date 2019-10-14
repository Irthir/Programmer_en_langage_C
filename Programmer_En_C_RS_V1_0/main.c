#include <stdio.h> //En entête les bibliothèques.
#include <stdlib.h>
#include <math.h>

                //Après les constantes.
#define NFOIS 5 //Ecriture de constantes. (elle n'est pas typée)

//Exemple de programme en C

int main() //Programme principal qui est une fonction qui retourne un entier.
{
    //Note : Utiliser la doc http://www.cplusplus.com/

    int i;
    float x;
    float racx;

    printf("Bonjour\n");//printf pour écrire dans un affichage formaté. On pourra plus tard justifier la notion de formats. Il a besoin de la bibliothèque <stdio.h>.
    printf("Calcule de %d racines carree \n",NFOIS); //Le %d sert à spécifier le former de la donnée.

    for(i=0; i<NFOIS; i++)
    {
        printf("Donnez un nombre :");
        scanf("%f",&x); //Fonction servait à récupérer la saisie de donnée d'un certaon type. %f pour le float. Le &x est la référence de la variable x. On demande un float et on le met dans x avec la référence de x.
        if (x<0.0) //.0 important car c'est un réel
            printf("Le nombre %f ne possede pas de racine carree\n",x);
        else
        {
            racx=sqrt(x);
            printf("Le nombre %f a pour racine carree : %f\n",x,racx);
        }
    }

    printf("Travail Termine - Au revoir."); //On évite les accents sur la console.

    /*
    racx=sqrt(x);
    printf("Je vais vous calculer la racine carree %lf",sqrt(x));//On va définir le former de la valeur de sqrt à afficher. Il qualifie la valeur correspondant à ce % en passant la référence de l'argument après la virgule.
    */

    return 0; //L'entier retourné.
}//Si le programme principal est une fonction on retourne, sinon on ferme juste les accolades.
