#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tmp, i, j;
    int T[5] = {5,8,7,1,-6};

    for(i = 0; i< 5 ;i++){
        for(j = i + 1; j < 5; j++){
            if(T[i] > T[j]){
                tmp = T[i];
                T[i] = T[j];
                T[j] = tmp;
            }
        }
    }
    for(i=0; i< 5; i++){
        printf("%d\n", T[i]);
    }

    return 0;
}
