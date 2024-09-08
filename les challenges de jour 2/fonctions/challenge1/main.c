#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, count;
    printf("Entrer un nombre : ");
    scanf("%d", &n);

    for(i = 1; i <= 100; i++){
        if(n%1 == n && n%n == 0 && n%3 == 0)
            count++;
    }

    if(count != 0)
        printf("les nombres premier sont : %d\n", i);
    else
        printf("les nombres non premier : ");
    return 0;
}




