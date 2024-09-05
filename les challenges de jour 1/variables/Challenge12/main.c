#include <stdio.h>
#include <stdlib.h>
                    /*Nombre entier à quatre chiffres en ordre inverse*/


void invers(int n)
{
   printf("%d", n%10);
    if(n/10 != 0){
        invers(n/10);
    }

}
int main()
{
    int n;
    printf("Entrer quatre nombre : \n");
    scanf("%d", &n);
    invers(n);
    return 0;
}
