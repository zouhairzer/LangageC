#include <stdio.h>
#include <stdlib.h>

int cherche(int T[], int taille, int x){
   for(int i = 0; i < taille; i++)
        if(T[i] == x)
            return i;
   return -1;
}


int main()
{
    int taille, x, i;

    printf("saisirla taille de tableau : ");
    scanf("%d", &taille);

    int T[taille];

    printf("Reamplir le tableau : \n");

    for(i = 0; i < taille ; i++){
        scanf("%d", &T[i]);
    }

    printf("Chercher sur un nombre : ");
    scanf("%d", &x);

    int result = cherche(T, taille, x);

    if(result == -1)
        printf("Trouve Pas");
    else
        printf("Le nombre %d il setrouve dans indice : %d ", x, result);

    return 0;
}
