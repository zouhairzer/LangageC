#include <stdio.h>
#include <stdlib.h>

            /*Calcul de Prime d'Assurance Auto*/

int main()
{
    int age, typeVoiture, nombreAccident;
    float prime, primeBase = 500.0;
    printf("Entrer votre Age  :  ");
    scanf("%d", &age);

    printf("Entrer votre typeVoiture  :  ");
    scanf("%d", &typeVoiture);

    printf("Entrer le nombreAccident  :  ");
    scanf("%d", &nombreAccident);

    if(age < 25)
        prime = primeBase * 1.5;
    else if(age>= 25 && age<=65)
        prime= primeBase;
    else if(age > 65 )
        prime = primeBase * 1.2;

    if(typeVoiture == 1)
        prime*=2;
    else if(typeVoiture == 1)
        prime*=1.2;
    else if(typeVoiture == 1)
        prime*=1.1;

    if(nombreAccident > 1)
        prime *=1.3;

    printf("la prime de assurence %.2f", prime);
    return 0;
}
