#include <stdio.h>
#include <stdlib.h>


                            /*Factorielle d'un Nombre*/

int main()
{
    int n, i, f = 1;
    printf("Enter nombre : ");
    scanf("%d", &n);

    for(i = 1; i<=n ; i++)
        f = f * i;
    printf("%d", f);

    return 0;
}
