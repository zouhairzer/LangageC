#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Up = 1, Upp = 0, U, i, n;

    printf("Entrer le nombre N : ");
    scanf("%d", &n);

    for(i = 0; i < n; i++){
        if(n < 2){
            return U;
        }
        else{
            U = Upp+Up;
            printf("%d\n", U);
            Upp=Up;
            Up=U;
        }
    }
    return 0;
}
