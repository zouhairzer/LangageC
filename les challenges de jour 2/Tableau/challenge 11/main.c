#include <stdio.h>
#include <stdlib.h>

                /* Remplacer un Élément */

int main()
{
    int i, n, nouvell, precedent;

    printf("Entrer le nomber des elements dans le tableau : ");
    scanf("%d", &n);

    int T[n] ;

    printf("Entrer les elements de tableau : \n");
    for(i = 0; i < n ; i++){
        printf("Element %d\t :", i+1);
        scanf("%d", &T[i]);
    }

    printf("Entrer precedent valeur : ");
    scanf("%d", &precedent);
    printf("Entrer nouvell valeur : ");
    scanf("%d", &nouvell);

    for(i = 0 ; i < n ; i++){
        if(T[i] == precedent){
            T[i] = nouvell;
        }
    }
    for(i = 0 ; i < n ; i++){
        printf("T[%d] : %d\n", i, T[i]);
    }
    return 0;
}
