#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T[4] = {1,30,5,6}, i, max;
    max = T[0];

    for(i = 0; i < 4; i++){
        if(max < T[i])
            max = T[i];
    }
    printf("Le maximum est : %d", max);
    return 0;
}
