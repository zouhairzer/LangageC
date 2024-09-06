#include <stdio.h>
#include <stdlib.h>

                        /*Ordre Croissant*/
int main()
{
    int i , j, T[5], X;
    for(i = 0 ; i < 5 ; i++){
        printf("Entrer les valeurs des nombre : ");
        scanf("%d", &T[i]);
    }
    for(i = 0; i < 5 ; i++){
        for(j = i + 1; j < 5 ; j++){
            if(T[i] > T[j]){
                X = T[i];
                T[i] = T[j];
                T[j] = X;
            }
        }
    }
    printf("les order croissant des nombres du tableau : ");
    for(i = 0 ; i < 5 ; i++){
        printf("%d\n", T[i]);
    }

    return 0;
}
