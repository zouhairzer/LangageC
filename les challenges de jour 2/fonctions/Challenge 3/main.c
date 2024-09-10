#include <stdio.h>
#include <stdlib.h>

int Maximum(int a, int b);

int main()
{
    int a, b;
    Maximum(a,b);
    return 0;
}

int Maximum(int a, int b){

    int max;

    printf("Entrer la valeur de A : ");
    scanf("%d", &a);

    printf("Entrer la valeur de B : ");
    scanf("%d", &b);


    if( a > b)
        printf("le maximum est A : %d", a);

    else if(a < b )
        printf("le maximum est B : %d", b);

    else
        printf("la valeur de %d = %d ", a,b);

}
