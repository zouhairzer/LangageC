#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, Table[6], P;
    P = 1;
    printf("Saisir les valeurs de tableau : ");
    for(i = 0; i < 6; i++){
        scanf("%d",&Table[i]);
        P = P * Table[i];
    }
    printf("Le produit de tableau est : %d", P);
    return 0;
}
