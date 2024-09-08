#include <stdio.h>
#include <stdlib.h>


                        /*Table de Multiplication*/


int main()
{
    int N, M, i;
    printf("Entrer un nombre : ");
    scanf("%d", &N);

    for(i = 1; i <= 10 ; i++){
        M = i*N;
        printf("\t%d * %d = %d \n ", N,i, M);
    }
    return 0;
}
