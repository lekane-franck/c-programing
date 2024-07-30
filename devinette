#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret_number, guess, attempts = 0;

    // Initialisation du générateur de nombres aléatoires
    srand(time(NULL));

    // Génération du nombre secret
    secret_number = rand() % 100 + 1;

    do {
        printf("Devinez le nombre (entre 1 et 100) : ");
        scanf("%d", &guess);
        attempts++;

        if (guess < secret_number) {
            printf("Trop petit !\n");
        } else if (guess > secret_number) {
            printf("Trop grand !\n");
        } else {
            printf("Bravo ! Vous avez deviné le nombre en %d essais.\n", attempts);
        }
    } while (guess != secret_number);

    return 0;
}