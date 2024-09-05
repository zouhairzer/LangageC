#include <stdio.h>
#include <stdlib.h>

                /* Affichage des valeurs binaire et hexadécimale équivalentes */

void binaire(int N)
{
    if(N > 1)
        binaire(N/2);
    printf("%d", N%2);
}
int main()
{
    int N;
    printf("Entrer un nombre N : ");
    scanf("%d", &N);

    printf("le hexadecimal de %d est  :  %X\n", N, N);
    printf("Le binaire de %d est : ", N);
    binaire(N);
    return 0;
}
