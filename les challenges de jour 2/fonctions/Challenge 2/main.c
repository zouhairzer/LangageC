#include <stdio.h>
#include <stdlib.h>


int Produit(int a, int b);


int main()
{
    int a, b,P;
    Produit(a,b);
    return 0;
}

int Produit(int a, int b){

    int P;

    printf("Entrer la valeur de A : ");
    scanf("%d", &a);

    printf("Entrer la valeur de B : ");
    scanf("%d", &b);

    P = a * b;

    printf("le produit de %d * %d = %d", a,b,P);

    return P;
}
