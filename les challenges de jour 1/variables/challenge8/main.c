#include <stdio.h>
#include <stdlib.h>

            /*Calcul de la moyenne géométrique*/
            /*Moyenne géométrique = (a * b * c)^(1/3)*/

int main()
{
    float a,b,c,Moyenne;
    printf("Entrer A  : ");
    scanf("%f", &a);

    printf("Entrer B  : ");
    scanf("%f", &b);

    printf("Entrer C  : ");
    scanf("%f", &c);

    Moyenne = pow((a * b * c),(1.0/3.0));
    printf("la moyenne est : %.2f", Moyenne);
    return 0;
}
