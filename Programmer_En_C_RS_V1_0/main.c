#include <stdio.h>
#include <stdlib.h>

#define LONGMAX 1000000000
#define N 5
#define M 3

//Exercices.

//Les Prototypes.
void Exercice1();
void f1();
void f2(int nNbf2);
int f3(int nNbf3);

void Exercice2(); //Affiche 5 n(global) puis 3 n(local)
void fct(int p);

void Exercice3();
void CompteAppel(long nlLeCompteurAppel);

void Exercice32();
void CompteAppel2();

void Exercice4();
int Ackermann(int nM,int nN);

int main()
{
	printf("Exercice1 : \n");
	Exercice1();

	//Affiche 5 n(global) puis 3 n(local)
	printf("Exercice2 : \n");
    Exercice2();
    printf("\n");


    //Utiliser le mot clef static pour
	printf("Exercice3 : \n");
	Exercice3();

	printf("Exercice3 second essaie :\n");
	Exercice32();

    printf("Exercice4 : \n");
	Exercice4();

    return 0;
}

void Exercice1()
{
	f1();
    f2(5);
    f3(5);
}

void f1()
{
    printf("Bonjour.\n");
}

void f2(int nNbf2)
{
	int nI = 0;
    for(nI=0;nI<nNbf2;nI++)
    {
        printf("Bonjour.\n");
    }
}

int f3(int nNbf3)
{
	int nI = 0;
    for(nI=0;nI<nNbf3;nI++)
    {
        printf("Bonjour.\n");
    }
    return 0;
}

//Début de l'exercice 2.
//Affiche 5 n(global) puis 3 n(local)
int n=5;

void Exercice2()
{
	void fct (int p);
	int n=3;
	fct(n);
}

void fct(int p)
{
	printf("%d %d",n,p);
}

void Exercice3()
{
	//On va par puissance de 10 de 1 jusqu'à 1 000 000 000, car 10 000 000 000 est au-dessus d'un long qu'il soit signé ou non.
	long nlCompteurAppel=0;
	while (nlCompteurAppel<=4)
	{
		nlCompteurAppel++;
		CompteAppel(nlCompteurAppel);
	}
}

void CompteAppel(long nlLeCompteurAppel)
{
	int nBoolAppel=0;
	switch(nlLeCompteurAppel)
	{
		case 1 : nBoolAppel=1;
		break;

		case 10 : nBoolAppel=1;
		break;

		case 100 : nBoolAppel=1;
		break;

		case 1000 : nBoolAppel=1;
		break;

		case 10000 : nBoolAppel=1;
		break;

		case 100000 : nBoolAppel=1;
		break;

		case 1000000 : nBoolAppel=1;
		break;

		case 10000000 : nBoolAppel=1;
		break;

		case 100000000 : nBoolAppel=1;
		break;

		case 1000000000 : nBoolAppel=1;
		break;

		default :
		break;
	}

	if (nBoolAppel==1)
	{
		printf("Appel %ld fois.\n",nlLeCompteurAppel);
	}
}


void Exercice32()
{
	//On va par puissance de 10 de 1 jusqu'à 1 000 000 000, car 10 000 000 000 est au-dessus d'un long qu'il soit signé ou non.
	long nlCompteurAppel=0;
	while (nlCompteurAppel<=4)
	{
		nlCompteurAppel++;
		CompteAppel2();
	}
}


void CompteAppel2()
{
    static int nAppel=0;
    //Utilisation du mot clef static pour que la variable existe toujours à la fin de l'appel de la fonction et qu'elle ne soit pas réinitialisée en revoyant ce mot.
    nAppel++;
    printf("Le nombre d'appel actuel est : %d.\n",nAppel);
}

void Exercice4()
{
    int nResultAckermann=0;
    printf("Test de la fonction d'Ackermann pour m=%d et n=%d. \n",M,N);
    nResultAckermann=Ackermann(M,N);

    printf("La fonction d'Ackermann pour m=%d et n=%d ressort : %d.\n",M,N,nResultAckermann);
}

int Ackermann(int nM,int nN)
{
    if (nM>=0 && nN>=0) //Ackermann n'est définit que si m et n sont supérieurs ou égaux à 0.
    {
       if (nM==0) //Si M vaut 0 on est à la fin du calcul et on renvoie le résultat, on est dans le cas A(0,n).
        {
            return nN+1;
        }
        else if (nN==0) //Si N vaut 0 et que M ne vaut pas 0 on est dans le cas A(m,0).
        {
            return Ackermann(nM-1,1);
        }
        else //Si N et M sont supérieurs à 0 alors on est dans le cas A(m,n).
        {
            return Ackermann(nM-1,Ackermann(nM,nN-1));
        }
    }
    return -1; //Si on est sur un cas impossible, -1 sert de message d'erreur.
}
