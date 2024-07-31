#include <stdio.h>

int main() {
    int score;

    printf("Entrez le score de l'élève (0-100) : ");
    scanf("%d", &score);

    switch (score / 10) {
        case 10:
        case 9:
            printf("La note de l'élève est : A\n");
            break;
        case 8:
            printf("La note de l'élève est : B\n");
            break;
        case 7:
            printf("La note de l'élève est : C\n");
            break;
        case 6:
            printf("La note de l'élève est : D\n");
            break;
        default:
            printf("La note de l'élève est : E\n");
            break;
    }

    return 0;
}