#include <stdio.h>
#include <stdlib.h>

                /*Surface d'un rectangle*/

int main()
{
    int longueur, largeur, Surface ;
    printf("Entrer le longueur : ");
    scanf("%d",&longueur);

    printf("Entrer le largeur : ");
    scanf("%d", &largeur);

    Surface  = longueur * largeur;
    printf("La surface du rectangle : %d", Surface);
    return 0;
}
