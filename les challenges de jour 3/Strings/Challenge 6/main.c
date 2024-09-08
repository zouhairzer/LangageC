#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c, T[1949];
    int i, count = 0;

    printf("Entrer des caracteres : ");
    gets(T);

    printf("Entrer le caracter que vous avez trouvez  : ");
    scanf("%c", &c);

    for(i = 0; T[i] != '\0'; i++){
        if(T[i] == c)
            count++;
    }
    if(count != 0)
        printf("Il se trouve %d fois ", count);
    else
        printf("Trouve pas");
    return 0;
}
