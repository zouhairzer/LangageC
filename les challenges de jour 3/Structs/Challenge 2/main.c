#include <stdio.h>
#include <stdlib.h>


                                /*Structure avec Tableau*/

typedef struct{
    char nom[50];
    char prenom[50];
    int note[3];
}Etudiant;

int main()
{
    int i,n;
    Etudiant e1;

    e1.note[0] = 15;
    e1.note[1] = 10;
    e1.note[2] = 14;
    e1.note[3] = 17;

    printf("Entrer le nom : ");
    scanf(" %[^\n]s", &e1.nom);

    printf("Entrer le prenom : ");
    scanf(" %[^\n]s", &e1.prenom);

    printf("le nom de etudiant 1 est : %s\n", e1.nom);
    printf("le nom de etudiant 1 est : %s\n", e1.prenom);

    for(i = 0; i <= 3; i++){
        printf("les notes de etudiant 1 sont : %d\n", e1.note[i]);
    }

    return 0;
}
