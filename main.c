#include <stdio.h>

int main(void)
{
    int secondi, minuti, ore, calcolo;
    printf("inserisci il valore in secondi");
    scanf("%d", &calcolo);
    ore = calcolo/3600;
    minuti = (calcolo%3600)/60;
    secondi = calcolo%60;
    printf("sono: %d secondi, %d minuti, %d ore", secondi, minuti, ore);
}
