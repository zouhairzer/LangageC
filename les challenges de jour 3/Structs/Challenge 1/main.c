#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct personne{
    int age;
    char nom[100];
    char prenom[100];
}personne;


int main()
{
    personne p, p2;
    p = p2;
    personne *p1 = &p;


    printf("Entrer le nom de la personne 2 : ");
    scanf(" %[^\n]s", &p2.nom);


    printf("Entrer le prenom de personne 2 : ");
    scanf(" %[^\n]s", &p2.prenom);



    printf("Entrer Age de la personne 2 : ");
    scanf("%d", &p2.age);


    printf("Entrer le nom de la personne 1 : ");
    scanf(" %[^\n]s", &p1->nom);


    printf("Entrer le prenom de personne 1 : ");
    scanf(" %[^\n]s", &p1->prenom);



    printf("Entrer Age de la personne 1 : ");
    scanf("%d", &p1->age);



    printf("******************************** les infos *********************************\n");
    printf("les infos de la personne 2 : %s - %s -%d\n", p2.nom, p2.prenom, p2.age);
    printf("******************************** les infos *********************************\n");
    printf("le nom est : %s\n",p1->nom);
    printf("le prenom de la personne 1 : %s\n", p1->prenom);
    printf("Age de personne 1 : %d", p1->age);




    return 0;
}
