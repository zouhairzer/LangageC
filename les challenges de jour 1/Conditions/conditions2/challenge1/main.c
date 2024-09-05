#include <stdio.h>
#include <stdlib.h>


                    /*Évaluation d'un Prêt*/

int main()
{
    int revenu, duree, Score;
    printf("Entrer le revenu(en euro) : ");
    scanf("%d", &revenu);

    printf("Entrer le duree (en annee) : ");
    scanf("%d", &duree);

    printf("Entrer le Score (sur 1000) : ");
    scanf("%d", &Score);

    if(revenu >= 30000 && duree <= 10 && Score >= 700 )
        printf("Eligible");
    else if(revenu >= 30000 && duree <= 15 && Score >= 650 )
        printf("Eligible avec conditions : ");
    else if(revenu >= 30000 && duree > 15 && Score < 650 )
        printf("Non Eligible : ");
    else{
        printf("PAS DE CHOIX");
    }
    return 0;
}
