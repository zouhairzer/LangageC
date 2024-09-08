#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, T[8], n, x;
    printf("Rempli le tableau : \n");
    for(i = 0; i < 8 ; i++){
        printf("T[%d] : ", i);
        scanf("%d", &T[i]);
    }

    printf("Trouver un numero : ");
    scanf("%d", &n);
    x = 0;
    for(i = 0 ; i < 8 ; i++){
        if(T[i] == n)
            x++;
    }
    if(x == 0)
        printf("le numero %d se trouve pas  ", n);
    else
        printf("le numero %d se trouve  ", n);
    return 0;
}
