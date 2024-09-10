#include <stdio.h>
#include <stdlib.h>


                        /*pyramide d'étoile*/


int main()
{
    int L, i, j,C;
    printf("Entrer le nombre des ligne : ");
    scanf("%d", &L);

    for(i = 1; i<=L; i++){
        for(j = 0 ;j <= L-i; j++)
            printf("  ");
        for(j = 1; j <= i ; j++)
            printf("   *");
        printf("\n");
    }


    return 0;
}
