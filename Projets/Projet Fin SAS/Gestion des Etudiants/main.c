#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char nom[50];
    int count_etudiant;
    float moyenne;
}Departement;


Departement Departements[100];
int nombre_departements = 0;


typedef struct{
    int numero_unique;
    char nom[50];
    char prenom[50];
    char date_de_naissance[50];
    Departement departements;
    float note_general;
}Etudiant;


Etudiant Etudiants[100];


int nombre_etudiant = 0;
int i;
int numero_unique = 1;

void Menu(){
    int choix;
    do{
        printf("\t1 --> Ajouter un ou plusieur etudiants      : \n");
        printf("\t2 --> Afficher les  etudiants               : \n");
        printf("\t3 --> Supprimer un etudiant                 : \n");
        printf("\t4 --> Modifier des infos d un etudiant      : \n");
        printf("\t5 --> Rchercher sur un etudiant             : \n");
        printf("\t6 --> Calculer la Moyenne d une departement : \n");
        printf("\t7 --> Statistique un etudiant               : \n");
        printf("\t8 --> Exit                                  : \n");
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
                    printf("\t 1--> Recherche pqr le nom : \n");
                    printf("\t 2--> Recherche tous les inscrit dans une departement  : \n");
                    printf("Entrer votre choix : \n");
                    int choix_recherch;
                    scanf("%d", &choix_recherch);
                 switch(choix_recherch){
                     case 1:
                        RechercheEtudiant();
                     break;
                     case 2:
                        RechercheList();
                     break;
                     default:
                        printf("le choix doit etre entre 1 et 2\n");
                    }
                break;
            case 6:
                CalculerMoyenne();
                break;
            case 7:
                        printf("choisi un trie : \n");
                        int choix_trie;
                        printf("\t 1-->Trier par alphabetique : \n");
                        printf("\t 2-->Trier par moyenne generale : \n");
                        printf("\t 3-->Trie par selon le statut  : \n");
                        printf("Entrer votre choix : ");
                        scanf("%d",&choix_trie);
                    switch(choix_trie){
                        case 1:
                            TriEtudiantAlph();
                            break;
                        case 2:
                            TriEtudiantMG();
                            break;
                        case 3:
                            TriEtudiantNoteG();
                            break;
                        default:
                            printf("choix doit etre entre 1 et 3");
                            break;
                        }
                break;
            case 8:
                StatistiqueEtudiant();
                    int choix_statique;
                        printf("\t 1-->Nombre Total des etudiant : \n");
                        printf("\t 2--> les trois meilleur etudiants : \n");
                        printf("\t 3-->Nombre Total des etudiant : \n");
                        printf("Entrer votre Choix : ");
                        scanf("%d", &choix_statique);
                    switch(choix_statique){
                        case 1:
                            NombreTotal();
                            break;
                        case 2:
                            MeuilleurEtudiant();
                            break;
                        default:
                            printf("le choix doit enter 1 ou 4\n");
                            break;
                        }
                break;
            default:
                printf("Votre choix doit Entre 1 jusqu a  ");
                break;
        }
    }while(choix != 10);
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
            int count = 0;
            printf("Entrer le nom de etudiant : ");
            scanf(" %[^\n]s",Etudiants[nombre_etudiant].nom);

            printf("Entrer le prenom de etudiant : ");
            scanf(" %[^\n]s",Etudiants[nombre_etudiant].prenom);

            printf("Entrer la date de naissance d etudiant : ");
            scanf(" %[^\n]s",Etudiants[nombre_etudiant].date_de_naissance);

            printf("Entrer le departement de etudiant : ");
            scanf(" %[^\n]s",Etudiants[nombre_etudiant].departements.nom);

            for(i = 0; i < nombre_etudiant ;i++){
                if(strcmp(Etudiants[i].departements.nom,Etudiants[nombre_etudiant].departements.nom)==0){
                    count++;
                }
            }
            if(count == 0){
                strcpy(Departements[nombre_departements].nom,Etudiants[nombre_etudiant].departements.nom);
                nombre_departements++;
            }

            printf("Entrer la note general     : ");
            scanf("%f",&Etudiants[nombre_etudiant].note_general);


            Etudiants[nombre_etudiant].numero_unique =  numero_unique++;


            printf("\n");
            nombre_etudiant ++;

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
                printf("la departement de l etudiant : %s\n", Etudiants[i].departements.nom);
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
        printf("Etudiant Trouve pas \n");
        printf("\n");
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
            scanf(" %[^\n]s",Etudiants[i].departements.nom);

            printf("Modifier la note general     : ");
            scanf("%f",&Etudiants[i].note_general);

            Trouver = 1;
            break;
        }

        if(!Trouver){
            printf("Etudiant Trouve pas \n");
            printf("\n");
            break;
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
            printf("la departement de l etudiant : %s\n", Etudiants[i].departements.nom);
            printf("la note_general de l etudiant : %.2f\n", Etudiants[i].note_general);
            printf("\n");
        }
    }
    if(!Trouver){
        printf("Aucune Nom que apporter ce nom : ");
    }
}

void RechercheList(){
    char chercher_departement[50];
    int Trouver = 0;
    printf("Entrer le nom la departement : ");
    scanf(" %[^\n]", chercher_departement);


    for(i = 0; i < nombre_etudiant; i++){
        if(strcmp(Etudiants[i].departements.nom,chercher_departement)==0){
            Trouver = 1;
            printf("Le numero unique de l etudiant  : %d\n",Etudiants[i].numero_unique);
            printf("le Nom de l etudiant : %s\n", Etudiants[i].nom);
            printf("le Prenom de l etudiant : %s\n", Etudiants[i].prenom);
            printf("la date naissance de l etudiant : %s\n", Etudiants[i].date_de_naissance);
            printf("la departement de l etudiant : %s\n", Etudiants[i].departements.nom);
            printf("la note_general de l etudiant : %.2f\n", Etudiants[i].note_general);
            printf("\n");
        }
    }
    if(!Trouver)
        printf("La departement exist pas ");
}

int StatistiqueEtudiant(){
    return 0;
}

int NombreTotal(){
    printf("%d",nombre_etudiant);
    return 0;
}



void CalculerMoyenne(){

    for(i = 0; i < nombre_departements; i++){
        int count = 0;
        float moyenne=0 ;
        float tous_notes = 0;
        for(int j = 0; j < nombre_etudiant; j++){
            if(strcmp(Etudiants[j].departements.nom, Departements[i].nom)== 0){
                tous_notes +=Etudiants[j].note_general;
                count++;
            }
        }
       if (count > 0) {
            moyenne = tous_notes / count;
            Departements[i].moyenne = moyenne;
            Departements[i].count_etudiant = count;

        }
        printf("la moyenne genereal de la departement %s est  : %.2f\n",Departements[i].nom, Departements[i].moyenne);
        printf("le nombre total des etudiants dans la departement %s est %d\n", Departements[i].nom, count);

    }
}


void MeuilleurEtudiant(){
    int i,j;
    int tmp[50] = {0};
    for(i = 0; i < nombre_etudiant; i++){
        for(j = i + 1; j < nombre_etudiant; j++){
            if(Etudiants[i].note_general < Etudiants[j].note_general){
                tmp[i] = Etudiants[i].note_general;
                Etudiants[i].note_general = Etudiants[j].note_general;
                Etudiants[j].note_general = tmp[i];
            }
        }
    }

    for(i = 0; i < 3; i++){
        printf("Le numero unique de l etudiant  : %d\n",Etudiants[i].numero_unique);
        printf("le Nom de l etudiant : %s\n", Etudiants[i].nom);
        printf("le Prenom de l etudiant : %s\n", Etudiants[i].prenom);
        printf("la date naissance de l etudiant : %s\n", Etudiants[i].date_de_naissance);
        printf("la departement de l etudiant : %s\n", Etudiants[i].departements.nom);
        printf("la note_general de l etudiant : %.2f\n", Etudiants[i].note_general);
        printf("\n");
    }
}


void TriEtudiantAlph(){
    int i,j;
    Etudiant tmp ;
    for(i = 0; i < nombre_etudiant; i++){
        for(j = i + 1; j < nombre_etudiant ; j++){
            if(strcasecmp(Etudiants[i].nom,Etudiants[j].nom)>0){
                tmp = Etudiants[i];
                Etudiants[i] = Etudiants[j];
                Etudiants[j] = tmp;
            }
        }
    }

    for(i=0; i < nombre_etudiant; i++){
        printf("Le numero unique de l etudiant  : %d\n",Etudiants[i].numero_unique);
        printf("le Nom de l etudiant : %s\n", Etudiants[i].nom);
        printf("le Prenom de l etudiant : %s\n", Etudiants[i].prenom);
        printf("la date naissance de l etudiant : %s\n", Etudiants[i].date_de_naissance);
        printf("la departement de l etudiant : %s\n", Etudiants[i].departements.nom);
        printf("la note_general de l etudiant : %.2f\n", Etudiants[i].note_general);
        printf("\n");
    }
}

void TriEtudiantMG() {
    int i, j;
    float tmp_moyenne[50]={0};
    char tmp_nom[50];
    for (i = 0; i < nombre_departements ; i++) {
        for (j = i + 1; j < nombre_departements; j++) {
            if (Departements[i].moyenne < Departements[j].moyenne) {

                tmp_moyenne[i] = Departements[i].moyenne;
                Departements[i].moyenne = Departements[j].moyenne;
                Departements[j].moyenne = tmp_moyenne[i];

            }
        }
    }

    printf("triage par moyenne generale :\n");
    for (i = 0; i < nombre_departements; i++) {
        printf("Departement %s : %f\n", Departements[i].nom, Departements[i].moyenne);
    }
}

void TriEtudiantNoteG(){
    int j;
    float tmp;
    char tmp_nom[50];
    for(i = 0; i < nombre_etudiant - 1; i++){
        for(j = i+1; j < nombre_departements; j++){
            if( Etudiants[i].note_general > Etudiants[i].note_general){
                tmp = Etudiants[i].note_general;
                Etudiants[i].note_general = Etudiants[j].note_general;
                Etudiants[j].note_general = tmp;

                strcpy(tmp_nom, Etudiants[i].nom);
                strcpy(Etudiants[i].nom, Etudiants[j].nom);
                strcpy(Etudiants[j].nom, tmp_nom);
            }
        }
    }
    for(i = 0; i < nombre_etudiant; i++){
        if(Etudiants[i].note_general >= 10)
            printf("Les etudiant qui va passer a anne suivat sont %s  :  %.2f\n",Etudiants[i].nom, Etudiants[i].note_general);
    }
}

getch();

int main()
{
    Menu();
    return 0;
}

