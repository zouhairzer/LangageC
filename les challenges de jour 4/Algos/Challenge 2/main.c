#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T[5] = {14,-8,19,7};
    int i, j, tmp;

    printf("le tableau avant : \n");

    for(i = 0; i < 4 ;i++)
        printf("T[%d] = %d\n", i, T[i]);

    for(i = 1; i < 4; i++){
        tmp = T[i];
        j = i-1;
        while(tmp < T[j] && j >= 0){
            T[j + 1] = T[j];
            j--;
        }
        T[j+1] = tmp;
    }
    printf("Le tableau apres le triage : \n");
    for(i = 0; i < 4; i++)
        printf("T[%d] = %d \n",i, T[i]);

    return 0;
}
