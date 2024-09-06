#include <stdio.h>
#include <stdlib.h>

            /* Copier un tableau */
int main()
{
    int i, T[6]= {1,2,3,5,6,7} ;
    int CopierT[6];

    for(i = 0 ; i < 6 ; i++){
        CopierT[i] = T[i];
    }

    printf("Les valeaurs de tableau original : \n");

    for(i = 0 ; i < 6 ; i++){
        printf("Tableau[%d] = %d\n", i,T[i]);
    }
    printf("Les valeaurs de tableau Copier : \n");

    for(i = 0; i < 6 ; i++)
        printf("CopierT[%d] = %d\n", i, CopierT[i]);

    return 0;
}
