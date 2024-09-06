#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, x, n, count = 0;
    printf("Entrer des nombres : ");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        scanf("%d", &x);
        count++;
    }
    printf("les fois que le nombre %d repeter est %d", n,count);
    return 0;
}
