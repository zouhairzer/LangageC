#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, x, i, max;

    printf("entrer le size de tableau T : ");
    scanf("%d", &n);

    int T[n];


    printf("remplir le tableau :\n");

    for(i = 0; i < n ; i++){
        scanf("%d", &T[i]);
    }

    max = T[0];

    for(i = 0; i < n; i++){
        if(max < T[i])
            max = T[i];
    }
    printf("Le maximum est : %d", max);
    return 0;
}
