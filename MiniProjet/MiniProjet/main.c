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
int nombre = 0;

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
     }while(choix != 6 );

}

void AjouterLivre(){

    int i,x;
        printf("Entrer le nombre des livres que vous pouvez ajouter  :");
        scanf("%d", &x);
        for(i = 0; i < x ; i++){
            printf("Entrer le Titre de livre    : ");
            scanf(" %[^\n]s",&livre[nombre].Titre);

            printf("Entrer  Auteur de livre     : ");
            scanf(" %[^\n]s",&livre[nombre].Auteur);

            printf("Entrer le prix de livre     : ");
            scanf("%f",&livre[nombre].prix);

            printf("Entrer la Quantite de livre : \n");
            scanf("%d",&livre[nombre].Quantite);

            nombre++;
        }

}
void AfficherLivres(){
    int i;
    for(i = 0; i <= nombre; i++){
        printf("le Titre de livre    est :  %s\n",livre[i].Titre);
        printf("Auteur de livre      est : %s\n", livre[i].Auteur);
        printf("le prix de livre     est : %.2f\n", livre[i].prix);
        printf("la Quantite de livre est : %d", livre[i].Quantite);
    }
}
void ModifierQuLinvre(){}
void SupprimerLivre(){}
void AfficherTotal(){}

int main()
{
    Menu();
    return 0;
}
