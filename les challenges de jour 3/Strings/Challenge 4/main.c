#include <stdio.h>
#include <stdlib.h>

int main()
{
    char T[] = "ZERZKHANE";
    char A[] = "ZOUHAIR";
    strcmp(T,A);

    if(strcmp(T,A) == 0)
        printf("A egale B");
    else if(strcmp(T,A) > 0)
        printf("T plus que A");
    else
        printf("T moins que A");
    return 0;
}
