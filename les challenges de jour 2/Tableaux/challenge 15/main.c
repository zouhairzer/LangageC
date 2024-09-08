#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, A[5], B[5], C[10];
    int na, nb, nc;

    printf("Enterer la taille de tableau A : ");
    scanf("%d", &na);

    printf("Enterer la taille de tableau B : ");
    scanf("%d", &nb);


    printf("Rmplir le tableau A: \n");
    for(i = 0; i < na; i++){
        scanf("%d", &A[i]);
    }

    printf("Rmplir le tableau B: \n");
    for(i = 0; i < nb; i++){
        scanf("%d", &B[i]);
    }

    for(i = 0; i<na ; i++){
        C[i] = A[i];
    }
    nc = nb+na;
    for(i = 0, j = na ; j < nc && i < nb; i++, j++)
        C[j] = B[i];

    for(i = 0; i < nc ; i++)
        printf("les elements de tableau son C[%d] = %d\n", i,C[i]);






    return 0;
}
