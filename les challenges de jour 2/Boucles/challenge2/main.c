#include <stdio.h>
#include <stdlib.h>


                        /*pyramide d'étoile*/

int main()
{
    int i, j,l;
    printf("Entrer L :");
    scanf("%d", &l);

    for(i = 1; i <= l; i++){
        for(j = 1; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
