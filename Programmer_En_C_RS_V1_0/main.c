#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define TAILLE 100

//Les includes du sleep.
#include <windows.h> // notice this! you need it! (windows)
//Les prototypes
/*
typedef struct tPoint{ //Signature du type def.
    int nX;
    int nY;
}tPoint; //D�claration du nouveau type.

typedef struct tDroite{
    tPoint tabPoint[TAILLE];
}tDroite;

//Mutateurs.
void setX(tPoint *pt,int nNewX);
void setY(tPoint *pt,int nNewY);
//Accesseurs.
int getX(tPoint pt);
int getY(tPoint pt);

void creaDroite(tDroite *dt, tPoint pt,int nIndex);

//D�placePoint
tPoint deplacePoint(tPoint pnt,int nV, int nW);
*/
int main()
{
    int i=0;
    for (i=0;i<10;i++)
    {
        printf("\a");
        Sleep(1000);
    }

/*    tPoint newPoint={0,0};
    tPoint neoPoint={0,0};
    setX(&newPoint,5);
    setY(&newPoint,8);

    printf("x : %d\n",getX(newPoint));
    printf("y : %d\n",getY(newPoint));

    tDroite dt;
    int i;
    for (i=0;i<TAILLE;i++)
    {
        creaDroite(&dt,newPoint,i);
    }

    neoPoint=deplacePoint(newPoint,2,3);

    printf("x : %d\n",getX(neoPoint));
    printf("y : %d\n",getY(neoPoint));
*/
	return 0;
}
/*
void setX(tPoint *pt,int nNewX)
{
    pt->nX=nNewX;
}

void setY(tPoint *pt,int nNewY)
{
    pt->nY=nNewY;
}

int getX(tPoint pt)
{
    return pt.nX;
}

int getY(tPoint pt)
{
    return pt.nY;
}

void creaDroite(tDroite *dt, tPoint pt,int nIndex)
{
    dt->tabPoint[nIndex].nX=pt.nX+nIndex;//On passe par la r�f�rence de dt pour atteindre le point.
    dt->tabPoint[nIndex].nY=pt.nY+nIndex;//le +nIndex c'est pour avoir un nX et nY diff�rents.

    //dt->tabPoint[nIndex]=pt; //Autre possibilit�.
}

tPoint deplacePoint(tPoint pnt,int nV, int nW)
//BUT : D�placer un point.
//ENTREE : Le point � d�placer, la valeur de d�placement en X puis celle en Y.
//SORTIE : Le point d�plac�.
{
    //Si on n'a qu'un seul m�canisme d'assignation, �a va.
    setX(&pnt,(nV+getX(pnt))); //pnt.nX+=nV;
    setY(&pnt,(nW+getY(pnt))); //pnt.nY+=nW;
    return pnt;
}
*/
