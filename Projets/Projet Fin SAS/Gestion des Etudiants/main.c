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
}Etudiant;


typedef struct{
    char nom_departement[50];
    char nom_etudiant[50];
    float note_general;
}Departemen;

Etudiant Etudiants[100];
Departemen Departemens[100];

int nombre_etudiant = 0;
int i;
int numero_unique = 1;

void Menu(){
    int choix;
    do{
        printf("\t1 --> Ajouter un ou plusieur etudiants : \n");
        printf("\t2 --> Afficher les  etudiants          : \n");
        printf("\t3 --> Supprimer un etudiant            : \n");
        printf("\t4 --> Modifier des infos d un etudiant : \n");
        printf("\t5 --> Rchercher sur un etudiant        : \n");
        printf("\t6 --> Statistique un etudiant        : \n");
        /*printf("\t6 --> Calculer la Moyenne d une departement        : \n");*/
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
            case 5:
                RechercheEtudiant();
                break;
            case 6:
                StatistiqueEtudiant();
                    int choix_statique;
                    printf("\t 1-->Nombre Total des etudiant : \n");
                    printf("\t 2--> les trois meilleur etudiants : \n");
                    printf("\t 3-->Nombre Total des etudiant : \n");
                    printf("Entrer votre Choix");
                    scanf("%d", &choix_statique);
                    switch(choix_statique){
                        case 1:
                            NombreTotal();
                            break;
                        /*case 2:
                            MeuilleurEtudiant();
                            break;*/
                        default:
                            printf("le choix doit enter 1 ou 2");
                    }
                break;
            default:
                printf("Votre choix doit Entre 1 jusqu a 8 ");
                break;
        }
    }while(choix != 8);
}

void AjouterEtudiant(){

    int nombreEtudiant;

        if(nombre_etudiant >= 100){
            printf("espace insuffisant : ");
        }
        else{
            printf("Entrer le nombre des etudient que vous puvez ajouter : ");
            scanf("%d",&nombreEtudiant);
            printf("\n");
        for(i = 0 ; i < nombreEtudiant ; i++){
            printf("Entrer le nom de etudiant : ");
            scanf(" %[^\n]s",Etudiants[nombre_etudiant].nom);

            printf("Entrer le prenom de etudiant : ");
            scanf(" %[^\n]s",Etudiants[nombre_etudiant].prenom);

            printf("Entrer la date de naissance d etudiant : ");
            scanf(" %[^\n]s",Etudiants[nombre_etudiant].date_de_naissance);

            printf("Entrer le departement de etudiant : ");
            scanf(" %[^\n]s",Etudiants[nombre_etudiant].departement);

            printf("Entrer la note general     : ");
            scanf("%f",&Etudiants[nombre_etudiant].note_general);

            nombre_etudiant ++;
            Etudiants[nombre_etudiant].numero_unique =  numero_unique++;
            printf("\n");
        }
    }
}


void AfficherEtudiant(){
    if(nombre_etudiant > 0){
        for(i = 0; i < nombre_etudiant; i++){
            printf("Le numero unique de l etudiant  : %d\n",Etudiants[i].numero_unique);
            printf("le Nom de l etudiant : %s\n", Etudiants[i].nom);
            printf("le Prenom de l etudiant : %s\n", Etudiants[i].prenom);
            printf("la date naissance de l etudiant : %s\n", Etudiants[i].date_de_naissance);
            printf("la departement de l etudiant : %s\n", Etudiants[i].departement);
            printf("la note_general de l etudiant : %.2f\n", Etudiants[i].note_general);
            printf("\n");
        }
    }
    else
        printf("---------------------> Pas des etudiants <--------------------- ");
}


void SupprimerEtudiant(){

    int i, j, Trouver = 0, supprimer_etudiant;

    printf("Entrer unique numero de etudiant que vous pouvez supprimer  : ");
    scanf("%d", &supprimer_etudiant);

    for(i = 0; i < nombre_etudiant; i++){
        if(Etudiants[i].numero_unique == supprimer_etudiant){
            Trouver = 1;
            for( j = i ; j < nombre_etudiant - 1; j++){
                Etudiants[j] = Etudiants[j + 1];
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

    for(i = 0; i < nombre_etudiant; i++){
        if(Etudiants[i].numero_unique == modifier_etudiant){
            printf("Modifier le nom de etudiant : ");
            scanf(" %[^\n]s",Etudiants[i].nom);

            printf("Modifier le prenom de etudiant : ");
            scanf(" %[^\n]s",Etudiants[i].prenom);

            printf("Modifier la date de naissance d etudiant : ");
            scanf(" %[^\n]s",Etudiants[i].date_de_naissance);

            printf("Modifier le departement de etudiant : ");
            scanf(" %[^\n]s",Etudiants[i].departement);

            printf("Modifier la note general     : ");
            scanf("%f",&Etudiants[i].note_general);

            Trouver = 1;
            break;
        }

        if(!Trouver){
            printf("Etudiant Trouve pas ");
        }

    }
}

void RechercheEtudiant(){
    int Trouver = 0;
    char chercher_etudiant[50];

    printf("Taper le nom que vous peuvez trouver  : ");
    scanf(" %[^\n]s", chercher_etudiant);

    for(i=0; i < nombre_etudiant; i++){
        if(strcmp(Etudiants[i].nom, chercher_etudiant) == 0 ){
            Trouver = 1;
            printf("Le numero unique de l etudiant  : %d\n",Etudiants[i].numero_unique);
            printf("le Nom de l etudiant : %s\n", Etudiants[i].nom);
            printf("le Prenom de l etudiant : %s\n", Etudiants[i].prenom);
            printf("la date naissance de l etudiant : %s\n", Etudiants[i].date_de_naissance);
            printf("la departement de l etudiant : %s\n", Etudiants[i].departement);
            printf("la note_general de l etudiant : %.2f\n", Etudiants[i].note_general);
            printf("\n");
        }
    }
    if(!Trouver){
        printf("Aucune Nom que apporter ce nom : ");
    }
}


void StatistiqueEtudiant(){

}

int NombreTotal(){
    printf("%d",nombre_etudiant);
    return 0;
}

/*int MeuilleurEtudiant(){
   for(i = 0; i < 3; i++){
        if(Etudiants[i].note_general >0){
            printf("Modifier le nom de etudiant : ");
            scanf(" %[^\n]s",Etudiants[i].nom);

            printf("Modifier le prenom de etudiant : ");
            scanf(" %[^\n]s",Etudiants[i].prenom);

            printf("Modifier la date de naissance d etudiant : ");
            scanf(" %[^\n]s",Etudiants[i].date_de_naissance);

            printf("Modifier le departement de etudiant : ");
            scanf(" %[^\n]s %[^\n]",Etudiants[i].departement,Departemens[i].nom_departement);

            printf("Modifier la note general     : ");
            scanf("%f",&Etudiants[i].note_general);

            break;
        }
}*/

/*void CalculerMoyenne(){
    int Somme = 0, count;
    for(i = 0; i < nombre_etudiant; i++){
        if(strcmp(Etudiants[i].departement, Departemens[i].nom_departement)==0){
            count ++;
            Departemens[i].note_general = Etudiants[i].note_general;
            Somme += Departemens[i].note_general;
        }

    }
    printf("%d",Somme);
}*/



int main()
{
    Menu();
    return 0;
}
