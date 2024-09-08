#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, copier[6], T[6] = {4,8,7,3,2,9};

    for(i = 0; i < 6; i++)
        copier[5-i] = T[i];

    for(i = 0; i < 6; i++)
        printf("%d\n", copier[i]);
    return 0;
}
