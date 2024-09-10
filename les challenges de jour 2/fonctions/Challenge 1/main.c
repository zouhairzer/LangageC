#include <stdio.h>
#include <stdlib.h>

int somme(int a,int b);


int main()
{
    int a,b,S;
    somme(a,b);
    return 0;
}
int somme(int a, int b){

    int S;
    printf("Entrer la valeur de A :");
    scanf("%d", &a);

    printf("Entrer la valeur de B : ");
    scanf("%d", &b);

    S = a+b;
    printf("la somme de %d + %d = %d", a,b,S);

    return S;
}

