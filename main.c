#include <stdio.h>

int main (){
    int mwst = 5;
    int skon = 50;
    float eingabebetrag;
    float zwischensumme;
    float skonto;
    float euro;

        /*
         * Hier findet die Preisberechnung statt.
         * Als Eingabe erwartet wird ein Nettopreis (als int oder float)
         * In erster Folge werden 20% MwSt hinzugefuegt.
         * In zweiter Folge werden 2& Skonto abgezogen.
         * Ausgabe: Rechnungsbetrag.
         */
        printf("Nettopreis eingeben: ");
        scanf("%f", &eingabebetrag);
        zwischensumme = eingabebetrag / mwst;
        printf("Nettopreis           Euro %4.2f\n", eingabebetrag);
        euro = eingabebetrag + zwischensumme;
        printf("+ 20%% MwSt           Euro %4.2f\n", zwischensumme);
        printf("==================================\n");
        printf("Bruttopreis          Euro %4.2f\n", euro);
        skonto = euro / skon;
        printf("- 2%% Skonto          Euro %4.2f\n", skonto);
        printf("==================================\n");
        euro = euro - skonto;
        printf("Rechnungsbetrag      Euro %4.2f\n", euro);

}