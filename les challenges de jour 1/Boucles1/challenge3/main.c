#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, x, S=0;
    printf("Entrer des nombres : ");
    scanf("%d", &n);
    for(i=0; i < n ;i++){
        scanf("%d",&x);
        S = S + x;
    }
    printf("la somme de nombre : %d", S);
    return 0;
}
