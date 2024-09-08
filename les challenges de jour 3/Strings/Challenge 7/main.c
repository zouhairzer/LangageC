#include <stdio.h>
#include <stdlib.h>

int main()
{
    char T[]="zerzkhane";
    char A[] = "ZOUHAIR";
    strupr(T);
    strlwr(A);
    puts(strupr(T));
    puts(strlwr(A));
    return 0;
}
