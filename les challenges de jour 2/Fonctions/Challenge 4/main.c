#include <stdio.h>
#include <stdlib.h>


int Factorille(int a);

int main()
{
    int a,f,i;
    Factorille(a);
    return 0;
}

int Factorille(int a){

    int f = 1,i;
    printf("Entrer le nombre : ");
    scanf("%d", &a);

    for(i = 1; i <= a; i++){
        f = f*i;
    }
    printf("le factorielle de %d est  : %d", a, f);
    return f;
}
