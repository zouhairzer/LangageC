#include <stdio.h>
#include <stdlib.h>

int main()
{
    int taille, i,x, found = -1;

    printf("Entere la taille de tableua : ");
    scanf("%d",&taille);

    int T[taille];

    printf("Remplir le tableau : \n");
    for(i = 0; i < taille; i++)
        scanf("%d", &T[i]);

    printf("les tableaux : \n");

    for(i = 0; i < taille; i++)
        printf("T[%d] : %d\n", i, T[i]);

    printf("Chercher sur un element : ");
    scanf("%d", &x);

    for(i = 0; i < taille ;i++){
        if(T[i] == x){
            found = i;
                break;
        }
    }

    if(found == -1)
        printf("le nombre %d se trouve pas :", x);
    else
        printf("Le nombre %d se trouve dans indice :  %d",x, found);

    return 0;
}
