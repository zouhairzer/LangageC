#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, inverse = 0;
    printf("Entrer le nombre  : ");
    scanf("%d", &n);

    do{
        inverse = (inverse * 10) + (n%10);
        n = n/10;
    }while(n != 0);
    printf("inverse est  :  %d", inverse);

    return 0;
}
