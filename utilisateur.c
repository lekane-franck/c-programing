#include <stdio.h>
int main(){
    int num1, num2;
    // demandez a l'utilisateur d'entrer les deux nombres
    printf("entrez le premier nimbre: ");
    scanf("%d", &num1);
    printf("entrez le deuxieme nombre: ");
    scanf("%d", &num2);

    // comparez les deux nombre et afficher le resultat
    if (num1==num2) {
        printf("les deux chiffre son identiques.\n");
    }else if (num1>num2) {
        printf("le plus grand nombre est: %d\n", num1);
        printf("le plus petit nombre est: %d\n", num2);
    }else {
        printf("le plus grand nombre est: %d\n", num2);
        printf("le plus petit nombre est: %d\n", num1);
    }
    return 0;
}