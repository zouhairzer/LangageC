#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char nom[100];
    char prenom [100];
    char email[100];
    char numero[100];
}Contact;

Contact contacts[100];
int nombreContact = 0;



int main(){
    Menu();
    return 0;
}


void Menu(){
    int choix;
    do{
        printf("1 --> Ajouter un ou plusieur contact  : \n");
        printf("2 --> Afficher un ou plusieur contact : \n");
        printf("3 --> Modifier Un contact             : \n");
        printf("4 --> Supprimer un contact            : \n");
        printf("5 --> Recherche un contact            : \n");
        printf("\n");
        printf(" Entrer votre choix :");
        scanf("%d",&choix);

        switch(choix){
        case 1:
            ajouterContact();
            break;
        case 2:
            afficherContact();
            break;
        case 3:
            modifierContact();
            break;
        case 4:
            supprimerContact();
            break;
        case 5:
            rechercheContact();
            break;
        default:
            printf("<-------------------Chois entre 1 a 5 :------------------->\n");
            break;
        }

    }while(choix != 6);

}

void ajouterContact(){
    int i, nombreContact, found = 0;

    printf("Entrer votre Nom : ");
    scanf(" %[^\n]s", &contacts[i].nom);
    printf("Entrer votre prenom : ");
    scanf(" %[^\n]s", &contacts[i].prenom);
    printf("Entrer votre email : ");
    scanf(" %[^\n]s", &contacts[i].email);
    printf("Entrer votre numero : ");
    scanf(" %[^\n]s", &contacts[i].numero);
    nombreContact ++;
    /*for(i = 0; i < nombreContact; i++){
        if(strcmp(contacts[i].numero,contacts.numero)==0){
            nombreContact ++;
        }
        else
           found ++;
    }*/
}

void afficherContact(){
    int i;
    for(i = 0; i < nombreContact; i++){
                printf("jjjjjjjjjjjjjjjjjjj\n");
        printf("Votre Nom est : %s\n", contacts[i].nom);
        printf("Votre prenom est : %s\n", contacts[i].prenom);
        printf("Votre Email est : %s\n", contacts[i].email);
        printf("Votre numero est : %s\n", contacts[i].numero);
    }
}
void modifierContact(){}
void supprimerContact(){}
void rechercheContact(){}


