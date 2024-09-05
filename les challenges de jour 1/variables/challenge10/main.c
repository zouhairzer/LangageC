#include <stdio.h>
#include <stdlib.h>

                /*Volume d'une sphère*/
int main()
{
    float p = 3.14;
    float r, Volume;
    printf("Entrer la valeur de Rayon : ");
    scanf("%f", &r);
    Volume = (4/3) * p * pow(r,3);
    printf("Le volume de sphere est : %.2f", Volume);
    return 0;
}
