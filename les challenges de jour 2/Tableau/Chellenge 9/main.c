#include <stdio.h>
#include <stdlib.h>


                 /*Inversion d'un Tableau*/

int main()
{
    int T[4], i, CopierT[4];
    printf("Entrer les valeurs de ce tableau : \n");
    for(i = 0 ; i < 4 ; i++){
        scanf("%d", &T[i]);
    }
    for(i = 0 ; i < 4; i++){
        CopierT[3-i] = T[i];
    }
    for(i = 0; i < 4 ; i++){
        printf("Inversion de T[%d]  =  %d\n", i, CopierT[i]);
    }
    return 0;
}
