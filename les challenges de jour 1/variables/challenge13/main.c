#include <stdio.h>
#include <stdlib.h>


                /*Paire ou Impaire*/


int main()
{
    int n;
    printf("Entrer un nombre  : ");
    scanf("%d", &n);

    if(n%2 == 0)
        printf("le nombre %d est PAIRE", n);
    else{
        printf("le nombre %d est IMAPIRE",n);
    }
    return 0;
}
