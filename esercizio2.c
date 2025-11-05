//Esercizio 4- Caramelle 
//Dato un numero di caramelle da dividere per un certo numero di amici, 
//che ne devono ricevere tutti lo stesso numero, dire quante caramelle verranno 
//date a testa e quante ne rimangono non distribuite.

#include <stdio.h>

int main() {
    int caramelle, amici, resto, caramelle_divise;
    printf("inserisci numero caramelle:");
    scanf("%d", &caramelle);
    printf("inserisci numero di amici:");
    scanf("%d", &amici);
    caramelle_divise = caramelle/amici;
    printf("ogni amico ha %d caramelle_divise");
    resto = caramelle % amici;
    printf("rimangono %d resto");