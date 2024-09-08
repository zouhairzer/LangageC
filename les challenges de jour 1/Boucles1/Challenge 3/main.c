#include <stdio.h>
#include <stdlib.h>


                            /*Somme des Éléments*/


int main()
{
    int T[4] = {54,19,-8,-32};
    int i, S;
    S = 0;

    for(i = 0; i < 4; i++){
        S = S + T[i];
    }
    printf("La somme est : %d", S);

    return 0;
}
