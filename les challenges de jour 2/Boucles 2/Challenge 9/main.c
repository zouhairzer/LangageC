#include <stdio.h>
#include <stdlib.h>


                        /*Calcul de la Puissance*/


int main()
{
    int b, e, i, P ;
    printf("Entrer la base : ");
    scanf("%d", &b);

    printf("Entrer l esposant : ");
    scanf("%d", &e);

    i = 0;

    while(i <= e){
        if(b != 0 )
            P = pow(b,i);
        i++;

    }
    printf("la puissance est : %d", P);
    return 0;
}
