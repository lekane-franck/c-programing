#include <stdio.h>
#include <math.h>

int main() {
    float side1, side2, side3;

    // Demander à l'utilisateur d'entrer les trois côtés du triangle
    printf("Entrez les trois côtés du triangle :\n");
    printf("Côté 1 : ");
    scanf("%f", &side1);
    printf("Côté 2 : ");
    scanf("%f", &side2);
    printf("Côté 3 : ");
    scanf("%f", &side3);

    // Vérifier le type de triangle
    if (side1 == side2 && side2 == side3) {
        printf("Le triangle est équilatéral.\n");
    } else if (side1 == side2 || side1 == side3 || side2 == side3) {
        printf("Le triangle est isocèle.\n");
    } else if (pow(side1, 2) + pow(side2, 2) == pow(side3, 2) ||
               pow(side1, 2) + pow(side3, 2) == pow(side2, 2) ||
               pow(side2, 2) + pow(side3, 2) == pow(side1, 2)) {
        printf("Le triangle est rectangle.\n");
    } else {
        printf("Le triangle est quelconque.\n");
    }

    return 0;
}