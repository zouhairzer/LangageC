#include <stdio.h>

int main()
{
    int i, n, x;
    printf("Entrer le nombre N : ");
    scanf("%d", &n);

    x = 1;

    for(i = 0; i< n ; i++){
        printf("%d\n", x);
        x+=2;
    }

    return 0;
}
