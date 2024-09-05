#include <stdio.h>
#include <stdlib.h>

            /*Conversion d'Année*/

int main()
{
    int annee ,jour= 365, mois = 12 , heur = 24, minute = 60, second = 60;
    printf("Entrer une Annee : ");
    scanf("%d", &annee);
    if(annee > 1){
        mois = annee*(jour/mois);
        jour = annee * jour;
        heur = jour * heur;
        minute = heur * minute;
        second = minute * second;
    }
    printf("%d mois \n %d Heurs\n %d min\n %d second", mois, jour, heur, minute, second);



    return 0;
}
