#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char Auteur[50];
    char Titre[50];
    float prix;
    int Quantite;
}Livre;

Livre livre[100];
int nombreLivre = 0;

void Menu(){
    int choix;
    do{
        printf("****************************************** Gerer votre librairie****************************************\n");
        printf("1-> Ajouter un livre                    : \n");
        printf("2-> Afficher tous les  livres           : \n");
        printf("3-> Modifier la quantite d un livre     : \n");
        printf("4-> Supprimer un livre                  : \n");
        printf("5-> Afficher le nombre total d un livre : \n");

        printf("++++++++++++++++++++++++++++++++++++++++++++\n");
        printf("     Taper votre Choix   : ");
        scanf("%d",&choix);
        printf("\n");
        switch(choix){
            case 1:
                AjouterLivre();
                break;
            case 2:
                AfficherLivres();
                break;
            case 3:
                ModifierQuLinvre();
                break;
            case 4:
                SupprimerLivre();
                break;
            case 5:
                AfficherTotal();
                break;
            default:
                printf("------>Taper un choix entre 1 et 5 s il vous plait :<------\n");
                break;
            }
     }while(choix != 0 );

}

void AjouterLivre(){

    int i,x;
        printf("Entrer le nombre des livres que vous pouvez ajouter  :");
        scanf("%d", &x);
        for(i = 0; i < x ; i++){
            printf("Entrer le Titre de livre    : ");
            scanf(" %[^\n]s",&livre[i].Titre);

            printf("Entrer  Auteur de livre     : ");
            scanf(" %[^\n]s",&livre[i].Auteur);

            printf("Entrer le prix de livre     : ");
            scanf("%f",&livre[i].prix);

            printf("Entrer la Quantite de livre : ");
            scanf("%d",&livre[i].Quantite);
            printf("\n");

            nombreLivre++;
        }

}
void AfficherLivres(){
    int i;
    for(i = 0; i < nombreLivre; i++){
        printf("le Titre de livre    est :  %s\n",livre[i].Titre);
        printf("Auteur de livre      est : %s\n", livre[i].Auteur);
        printf("le prix de livre     est : %.2f\n", livre[i].prix);
        printf("la Quantite de livre est : %d\n", livre[i].Quantite);
        printf("\n");
    }
}
void ModifierQuLinvre(){
    int i;
    char chercher[50];

    printf("Chercher sur un titre un livre  : ");
    scanf(" %[^\n]s",&chercher);

    for(i = 0; i < nombreLivre; i++){
        if(strcmp(livre[i].Titre,chercher) == 0){
            printf("Modifier la Quantite de livre : ");
            scanf("%d",&livre[i].Quantite);
        break;
        }
    }
}
void SupprimerLivre(){

    int i, Trouver = 0;
    char supTitre[50];
    printf("Supprimer un element  : ");
    scanf(" %[^\n]s", &supTitre);
    for(i = 0 ; i < nombreLivre; i++){

        if(strcmp(livre[i].Titre,supTitre) == 0){
            Trouver = 1;
                for(int j = i; j < nombreLivre - 1; j++){
                    strcpy(livre[j].Titre,livre[j+1].Titre);
                }
                    nombreLivre --;
                break;
        }
    }
    if(!Trouver)
        printf("le titre trouve pas essayer une autre fois  : ");
}

void AfficherTotal(){

    int i, quntiteTotal = 0;

    for(int i = 0; i < nombreLivre; i++){
        quntiteTotal = quntiteTotal + livre[i].Quantite;
    }
    printf("Les livres dans la bibliothique sont : %d\n", nombreLivre);
    printf("\n");
    printf("La quantite total des livres : %d\n", quntiteTotal);


}

int main()
{
    Menu();
    return 0;
}
