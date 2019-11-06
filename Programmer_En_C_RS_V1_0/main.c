#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define TAILLE 100
#define MOT "HELLO"

//Les Tableaux.


int main()
{
    /*
    int nTabInteger[TAILLE];
    float fltTabFloat[TAILLE];
    double dblTabDouble[TAILLE];

    char cTabCar[TAILLE];

    int nI=0;

    for(nI=0;nI<TAILLE;nI++)
    {
        nTabInteger[nI]=0;
        fltTabFloat[nI]=0.0;
        dblTabDouble[nI]=0.0;
        cTabCar[nI]='\0'; //Correspond au caract�re de fin de chaine.
    }
    */
    //Tout ce qu'on a d�clar� jusqu'� pr�sent est d�clar� dans la pile.

    //Faire un programme qui cr�e des cartes d'identit�s.
    //Un programme permettant de saisir un num�ro d'identification, nom, pr�nom, date de naissance, et adresse postale : "Num�ro","Nom de la rue","Code Postal", "Ville".
    //Prendre en consid�ration une chaine avec des espaces, date d'anniversaire et code postale sur un nombre limit� de chiffres et caract�res.
    //On utilise des tableaux pour illustrer les informations carte d'identit�.

    //TD carte identit�.

    printf("Nous allons creer votre carte d'identite, nous allons commencer par votre nom, puis votre prenom, ensuite votre date de naissance et votre adresse postale, composee du numero de la rue, du nom de la rue, du code postal et de la ville.\n");
    char sNomIdentite[TAILLE],sPrenomIdentite[TAILLE],sNomDeLaRue[TAILLE],sVille[TAILLE],sDateDeNaissance[11],sCodePostal[6];
    int nNumeroDeRue=0, nI=0;
    for(nI=0;nI<TAILLE;nI++)
    {
        sNomIdentite[nI]='\0'; //Correspond au caract�re de fin de chaine.
        sPrenomIdentite[nI]='\0'; //Correspond au caract�re de fin de chaine.
        sNomDeLaRue[nI]='\0'; //Correspond au caract�re de fin de chaine.
        sVille[nI]='\0'; //Correspond au caract�re de fin de chaine.
        if (nI<11)
        {
            sDateDeNaissance[nI]='\0'; //Correspond au caract�re de fin de chaine.
            if(nI<6)
            {
                sCodePostal[nI]='\0'; //Correspond au caract�re de fin de chaine.
            }
        }
    }

    printf("Veuillez tout d'abord entrer votre nom.\n");
    gets(sNomIdentite);
    fflush(stdin);
    printf("Veuillez a present entrer votre prenom.\n");
    gets(sPrenomIdentite);

    //printf("Le Nom et le Prenom %s %s",sNomIdentite,sPrenomIdentite); //Premier test concluant.

    printf("Veuillez alors entrer votre date de naissance sous la forme JJ/MM/AAAA.\n");
    gets(sDateDeNaissance);
    printf("Nous allons a present recuperer votre adresse postale.\n");
    printf("Veuillez entrer votre numero de rue.\n");
    scanf("%d",&nNumeroDeRue);
    fflush(stdin);
    printf("A present, veuillez entrer le nom de la rue.\n");
    gets(sNomDeLaRue);
    printf("Veuillez alors entrer votre code postal.\n");
    gets(sCodePostal);
    printf("Enfin, veuillez entrer le nom de la ville.\n");
    gets(sVille);

    for (nI=0;nI<80;nI++)
    {
        printf("_");
    }
    printf("\n|\n");
    printf("|   Nom : %s \n",sNomIdentite);
    printf("|   Prenom : %s \n",sPrenomIdentite);
    printf("|   Ne(e) le : %s \n",sDateDeNaissance);
    printf("|   Adressse Postale : %d %s %s %s \n",nNumeroDeRue,sNomDeLaRue,sCodePostal,sVille);
    printf("|");
    for (nI=0;nI<80;nI++)
    {
        printf("_");
    }
    return 0;
}
