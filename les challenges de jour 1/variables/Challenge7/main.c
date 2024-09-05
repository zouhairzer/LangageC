#include <stdio.h>
#include <stdlib.h>

                /*Moyenne pondérée de trois nombres*/

int main()
{
    float a1,a2,a3,MP,p1,p2,p3;
    printf("Entrer le A1 : ");
    scanf("%f", &a1);

    printf("Entrer le P1 : ");
    scanf("%f", &p1);

    printf("Entrer le A2 : ");
    scanf("%f", &a2);

    printf("Entrer le P2 : ");
    scanf("%f", &p2);

    printf("Entrer le A3 : ");
    scanf("%f", &a3);

    printf("Entrer le P3 : ");
    scanf("%f", &p3);

    MP = ((a1 * p1)+(a2*p2)+(a3*p3))/(p1+p2+p3);
    printf("La moyenne ponderee de trois nombres est :  %.2f",MP);


    return 0;
}
