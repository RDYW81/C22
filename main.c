#include <stdio.h>

int main (){
    int i;
    int d, m, y;
    int mwst = 5;
    int skon = 50;
    float eingabebetrag;
    float zwischensumme;
    float skonto;
    float euro;


        printf("Nettopreis eingeben: ");
        scanf("%f", &eingabebetrag);
        zwischensumme = eingabebetrag / mwst;
        printf("Nettopreis           Euro %4f\n", eingabebetrag);
        euro = eingabebetrag + zwischensumme;;
        printf("+ 20%% MwSt           Euro %4f\n", zwischensumme);
        printf("===================================\n");
        printf("Bruttopreis          Euro %4f\n", euro);
        skonto = euro / skon;
        printf("- 2%% Skonto          Euro %4f\n", skonto);
        printf("===================================\n");
        euro = euro - skonto;
        printf("Rechnungsbetrag      Euro %4f\n", euro);

}