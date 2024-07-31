#include <stdio.h>

int main() {
    int n, i, factorial = 1;

    printf("Entrez un entier positif : ");
    scanf("%d", &n);

    i = 1;
    while (i <= n) {
        factorial *= i;
        i++;
    }

    printf("La factorielle de %d est : %d\n", n, factorial);

    return 0;
}