#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x;
    printf("Taper un caracter  : ");
    scanf("%c", &x);

    if((x>='A' && x<='Z')||(x>='a' && x<='z')){
        if(x>='A' && x<='Z')
            printf("le %c est un caractere MAJISCULE  ", x);
        else
            printf("le %c est un caractere MINISCULE  ", x);
    }
    else
        printf("la caracter non alphabetique  ");

    return 0;
}
