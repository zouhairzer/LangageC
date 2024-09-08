#include <stdio.h>
#include <stdlib.h>

int main()
{
    int S = 0 , i, n;
    printf("Entrer un nombre  : ");
    scanf("%d", &n);

    for(i = 0; i <= n; i++){
        S = S + i;
    }
    printf("la somme de N nombre de %d  est : %d", n,S);
    return 0;
}
