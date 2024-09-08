#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i,S = 0, M;

    printf("Entrer la taille un tableau : ");
    scanf("%d", &n);

    int T[n];

    printf("Remplir le tableau : \n");
    for(i = 0; i < n; i++){
        scanf("%d", &T[i]);
    }

    for(i = 0; i < n; i++){
        S = S + T[i];
        M = S/n;
    }
    printf("la moyenne de tableau est  :  %d", M);
    return 0;
}
