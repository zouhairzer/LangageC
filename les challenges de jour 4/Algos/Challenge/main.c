#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T[7] = {8,9,45,12,4,5,10}, i,j,tmp;

    printf("le Tableau avant le triage : \n");
    for(i = 0; i < 7 ; i++)
        printf("T[%d] : %d\n", i, T[i]);

    for(i = 0; i < 6 ; i++){
        for(j = 0; j < 7-i-1; j++){
            if(T[j] > T[j+1]){
                tmp = T[j];
                T[j]=T[j+1];
                T[j+1]=tmp;
            }
        }
    }

    printf("Le tableau apres le triage : \n");

    for(i = 0; i<7; i++){
        printf("T[%d] = %d\n", i ,T[i]);
    }


    return 0;
}
