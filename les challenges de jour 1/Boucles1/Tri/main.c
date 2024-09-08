#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T[6] = {-5,82,-3,42,71,47}, i, j, tmp;
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            if(T[i] > T[j]){
                tmp = T[i];
                T[i] = T[j];
                T[j] = tmp;
            }
        }
    }

    for(i=0; i<6;i++)
        printf("%d\n", T[i]);
    return 0;
}
