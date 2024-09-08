#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*sup = taille-1*/
    int i = 0 , n, sup =5  ,inf = 0, mil , T[6] = {9,10,14,19,20,34}, found=-1;

    printf("Trouver un element : ");
    scanf("%d",&n);

    while(inf <= sup){
        mil = (inf+sup)/2;
        if(T[mil] == n){
            found = mil;
            break;
        }
        else if(T[mil] > n)
            sup = mil -1;
        else
            inf = mil + 1;

        i++;
    }
    if(found == -1)
        printf("Ne Trouve Pas");
    else
        printf("Le nombre %d se trouve dans indice %d ", i, found);
    return 0;
}
