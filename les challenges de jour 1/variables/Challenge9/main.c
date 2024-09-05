#include <stdio.h>
#include <stdlib.h>

            /*Calcul de la distance entre deux points dans un espace 3D*/

int main()
{
    int x1,x2,y1,y2,z1,z2, Distance;
    printf("Entrer le X1 : ");
    scanf("%d", &x1);

    printf("Entrer le X2 : ");
    scanf("%d", &x2);

    printf("Entrer le Y1 : ");
    scanf("%d", &y1);

    printf("Entrer le Y2 : ");
    scanf("%d", &y2);

    printf("Entrer le Z1 : ");
    scanf("%d", &z1);

    printf("Entrer le Z2 : ");
    scanf("%d", &z2);

    Distance = sqrt(pow((x2-x1),2) + pow((y2-y1),2) + pow((z2-z1),2));

    printf("La distance entre les deux points est  :  %d", Distance);
    getch();
    return 0;
}
