#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    double N1, N2, R, num, somme = 0, mul=1;
    int operation, revenu, len1, i;
    debut:
    printf("menu :\n");
    printf("1. Addition\n");
    printf("2. Soustraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Moyenne\n");
    printf("6. Valeur absolue\n");
    printf("7. Exponentiation\n");
    printf("8. Racine carrée\n");
    printf("choisir une operation a effectuer : ");
    scanf("%d", &operation);
    switch (operation) {
        case 1:
            printf("Combien de nombre souhaitez-vous ajouter :");
            scanf("%d", &len1);
            for(i=0;i<len1;i++){
            printf("Entrer le %deme nombre : ",i+1);
            scanf("%lf", &num);
            somme=somme+num;
            }
            printf("%.2lf\n",somme);
            break;
        case 2:
            printf("Entrer le 1er nombre : ");
            scanf("%lf", &N1);
            printf("Entrer le 2eme nombre : ");
            scanf("%lf", &N2);
            R = N1 - N2;
            printf("%.2lf\n",R);
            break;
        case 3:
            printf("Combien de nombre souhaitez-vous multiplier :");
            scanf("%d", &len1);
            for(i=0;i<len1;i++){
            printf("Entrer le %deme nombre : ",i+1);
            scanf("%lf", &num);
            mul=mul+num;
            }
            printf("%.2lf\n",mul);
            break;
        case 4:
             printf("Entrer le 1er nombre : ");
            scanf("%f", &N1);
            printf("Entrer le 2eme nombre : ");
            scanf("%f", &N2);
            R = N1 / N2;
            printf("%.lf\n",R);
            break;
        case 5:
            int nombre_notes, i;
            float note, somme = 0, moyenne;
            printf("Entrez le nombre de notes : ");
            scanf("%d", &nombre_notes);
            for (i = 1; i <= nombre_notes; i++) {
                printf("Entrez la note %d : ", i);
                scanf("%f", &note);
                somme += note ;
            }
            moyenne = somme / nombre_notes;
            printf("%.2f\n", moyenne);
            break;
        case 6:
            printf("entrer le nombre : ");
            scanf("%lf", &N1);
            R = abs(N1);
            printf("%.2lf\n", R);
            break;
        case 7:
            printf("Entrez la base : ");
            scanf("%lf", &N1);
            printf("Entrez l'exposant : ");
            scanf("%lf", &N2);
            R = pow(N1,N2);
            printf("%.2lf",R);
            break;
        case 8:
            double  racine;
            printf("Entrez un nombre positif : ");
            scanf("%lf", &N1);
            if (N1 < 0) {
                printf("La racine carrée d'un nombre négatif n'est pas définie.\n");
            } else {
                racine = sqrt(N1);
                printf("%.2lf\n", racine);
            }
            break;
        default:
                printf("Choix n'est pas valide.\n");
                goto debut;
    } 
    fine:
    printf("choisir 0 ou 1 pour quitter ou bien revenir au menu pricipal \n");
    printf("0. quitter le programme\n");
    printf("1. revenir au menu principal\n");
    scanf("%d",&revenu);
    if (revenu == 1)
        goto debut ;
    else if (revenu == 0)
        printf("merci");
    else 
        goto fine ;
    return 0;
}