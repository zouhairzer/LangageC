#include <stdio.h>

int main()
{
    int i, n, S = 0;
    printf("Entrer les nombres : ");
    for(i = 0; i < 5; i++){
        scanf("%d", &n);
        S = S + n;
    }
    printf("la somme est : %d", S);
    return 0;
}
