#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int base, exposant, i,puissance;
    printf("Entrer la base : ");
    scanf("%d", &base);

    printf("Entrer lexposant : ");
    scanf("%d", &exposant);

    for(i = 1; i < exposant; i++);
    {
        puissance = pow(base,i);
    }
    printf("%d", puissance);
    return 0;
}
