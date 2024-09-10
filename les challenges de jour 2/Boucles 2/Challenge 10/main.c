#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n,T[10]={'A','b','c','d','E','F','H','n','M','z'};

    printf("entere la longeur : ");
    scanf("%d", &n);

    for(i = 1; i < n ; i++){
        printf("%d%c", rand()%5, T[rand()%n]);
    }

    return 0;
}
