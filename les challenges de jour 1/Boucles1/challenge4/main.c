#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, count;
    printf("Entrer un nombre : ");
    scanf("%d", &n);
    count = 1;
    for(i = 0; i < n;  i++){
        printf("%d\n", count);
        count+=2;
    }
    return 0;
}
