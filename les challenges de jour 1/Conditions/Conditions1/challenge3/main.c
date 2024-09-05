#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, S, T;
    printf("Entrer un numero : ");
    scanf("%d", &a);

    printf("Entrer un numero : ");
    scanf("%d", &b);

    if( a == b){
        T = (a+b)*3;
        printf("Le triple de la some (A + B) est  : %d", T);
    }

    else{
        S = a + b;
        printf("La somme de A + B = %d", S);
    }
    return 0;
}
