#include <stdio.h>
#include <stdlib.h>

                    /*Passage de Structure en Argument*/
typedef struct{
    int longueur;
    int largueur;
}Rectangle;

void airRectangle(Rectangle *r){

        printf("Entrer la langueur de Rectangle : ");
        scanf("%d", &r->longueur);

        printf("Entrer la largeure de rectangla : ");
        scanf("%d", &r->largueur);

        printf("Air de rectangle est : %d", r->longueur * r->largueur);



}
int main()
{
    int x;
    Rectangle r;
    airRectangle(&r);
    return x;
}
