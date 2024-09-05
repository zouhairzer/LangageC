#include <stdio.h>
#include <stdlib.h>

int main()
{
    char caracter;

    printf("Entrer un Caracter : ");
    scanf("%c", &caracter);

    switch(caracter){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("le caractere %c : VOYELLE", caracter);
        break;
        default:
            printf("le caracter %c  : NON VOYELLE", caracter);
        break;
    }
    return 0;
}
