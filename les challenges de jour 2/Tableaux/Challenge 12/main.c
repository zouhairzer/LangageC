#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i , nbr=0, n, PA[10];
    printf("Entrer le nombre les elements de tableau : ");
    scanf("%d", &n);
    int T[n];
    for(i = 0; i < n ; i++){
        printf("les elements de tableau : ");
        scanf("%d", &T[i]);
    }
    for(i = 0 ; i < n ; i++){
        if(T[i] % 2 == 0){
            PA[nbr]= T[i];
            printf("%d\n", PA[nbr]);
            nbr++;
        }
    }
    return 0;
}
