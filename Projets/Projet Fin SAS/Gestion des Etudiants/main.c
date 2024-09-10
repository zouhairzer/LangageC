#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct{
    int numero_unique;
    char nom[50];
    char prenom[50];
    char date_de_naissance[50];
    char departement[50];
    float note_general;
}Etudiants;

Etudiants Etudiant[100];
int nombre_etudiant = 0;
int i;

void Menu(){
    int choix;
    do{
        printf("\t1 --> Ajouter un ou plusieur etudiants : \n");
        printf("\t2 --> Afficher les  etudiants          : \n");
        printf("\t3 --> Supprimer un etudiant            : \n");
        printf("\t4 --> Modifier des infos d un etudiant : \n");
        printf("Entrer Votre choix : ");
        scanf("%d", &choix);

        printf("\n");

        switch(choix){
            case 1:
                AjouterEtudiant();
                break;
            case 2:
                AfficherEtudiant();
                break;
            case 3:
                SupprimerEtudiant();
                break;
            case 4:
                ModifierEtudiant();
                break;
            default:
                printf("Votre choix doit Entre 1 jusqu a 8 ");
                break;
        }
    }while(choix != 8);
}
void AjouterEtudiant(){

    int nombreEtudiant, numero_unique = i;

        if(nombre_etudiant >= 100){
            printf("espace insuffisant : ");
        }
        else{
            printf("Entrer le nombre des etudient que vous puvez ajouter : ");
            scanf("%d",&nombreEtudiant);
            printf("\n");
        for(i = 0 ; i < nombreEtudiant ; i++){
            printf("Entrer le nom de etudiant : ");
            scanf(" %[^\n]s",Etudiant[nombre_etudiant].nom);

            printf("Entrer le prenom de etudiant : ");
            scanf(" %[^\n]s",Etudiant[nombre_etudiant].prenom);

            printf("Entrer la date de naissance d etudiant : ");
            scanf(" %[^\n]s",Etudiant[nombre_etudiant].date_de_naissance);

            printf("Entrer le departement de etudiant : ");
            scanf(" %[^\n]s",Etudiant[nombre_etudiant].departement);

            printf("Entrer la note general     : ");
            scanf("%f",&Etudiant[nombre_etudiant].note_general);
            Etudiant[nombre_etudiant].numero_unique =  numero_unique++;
            nombre_etudiant ++;
            printf("\n");
        }
    }
}
void AfficherEtudiant(){
    if(nombre_etudiant > 0){
        for(i = 0; i < nombre_etudiant; i++){
            printf("Le numero unique de l etudiant  : %d\n",Etudiant[i].numero_unique);
            printf("le Nom de l etudiant : %s\n", Etudiant[i].nom);
            printf("le Prenom de l etudiant : %s\n", Etudiant[i].prenom);
            printf("la date naissance de l etudiant : %s\n", Etudiant[i].date_de_naissance);
            printf("la departement de l etudiant : %s\n", Etudiant[i].departement);
            printf("la note_general de l etudiant : %.2f\n", Etudiant[i].note_general);
            printf("\n");
        }
    }
    else
        printf("Pas des etudiants : ");

}


void SupprimerEtudiant(){

    int i, j, Trouver = 0, supprimer_etudiant;

    printf("Entrer unique numero de etudiant que vous pouvez supprimer  : ");
    scanf("%d", &supprimer_etudiant);

    for(i = 0; i < nombre_etudiant; i++){
        if(Etudiant[i].numero_unique == supprimer_etudiant){
            Trouver = 1;
            for( j = i ; j < nombre_etudiant - 1; j++){
                Etudiant[j] = Etudiant[j + 1];
            }
            nombre_etudiant --;
        }
    }

    if(!Trouver){
        printf("Etudiant Trouve pas ");
    }
}


void ModifierEtudiant(){

    int i, modifier_etudiant, Trouver = 0;

    printf("Entrer unique numero de etudiant que vous pouvez Modifier  :");
    scanf("%d",&modifier_etudiant);

    for(i = 1; i < nombre_etudiant; i++){
        if(Etudiant[i].numero_unique = modifier_etudiant){
            printf("Le numero unique de l etudiant  : %d\n",Etudiant[i].numero_unique);
            printf("le Nom de l etudiant : %s\n", Etudiant[i].nom);
            printf("le Prenom de l etudiant : %s\n", Etudiant[i].prenom);
            printf("la date naissance de l etudiant : %s\n", Etudiant[i].date_de_naissance);
            printf("la departement de l etudiant : %s\n", Etudiant[i].departement);
            printf("la note_general de l etudiant : %.2f\n", Etudiant[i].note_general);
            printf("\n");
        }
    }
}


int main()
{
    Menu();
    return 0;
}
