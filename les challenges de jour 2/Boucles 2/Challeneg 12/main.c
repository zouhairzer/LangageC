#include <stdio.h>
#include <stdlib.h>


                        /*Tri a bulles*/


int main()
{
    int i, j, tmp, n;

    printf("Entrer la taille de tableau T : ");
    scanf("%d", &n);

    int T[n];

    printf("Remplir le tableau : \n");

    for(i = 0; i < n ; i++){

        scanf("%d", &T[i]);
    }

    for(i = 0; i < n - 1; i++){
        for(j = 0 ; j < n-i-1; j++){
            if(T[j] > T[j+1]){
                tmp = T[j];
                T[j] = T[j+1];
                T[j+1] = tmp;
            }
        }
    }

    printf("order croissant est : \n");

    for(i = 0; i < n; i++){
        printf("%d\n",T[i]);
    }

    return 0;
}
