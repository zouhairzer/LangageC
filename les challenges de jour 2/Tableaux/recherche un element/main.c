#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, T[4]={5,8,3,9}, x,n;

    printf("Rchercher sur un element : ");
    scanf("%d", &n);

    x = 0;
    for(i = 0; i < 4; i++){
        if(n == T[i])
            x++;
    }

    if(x != 0){
        printf("le nombre %d il se trouve dans le tableau  ", n);
    }
    else
        printf("il ne trouve pas ");
    return 0;
}
