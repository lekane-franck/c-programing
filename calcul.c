#include <stdio.h>
#define R 0.082057 // Constante R en L·atm·K−1·mol−1

int main(){
    double P, V, T, n;

    // demandez les valeurs de P, V, et T à l'utilisateur
    printf("entrez la pression en (pascal): ");
    scanf("%lf", &P);
    printf("entrez le volume en (litre): ");
    scanf("%lf", &V);
    printf("entrez la temperature en (kelvin): ");
    scanf("%lf", &T);

    // calculer le nombre de moles n
    n= (P*V)/(R*T);
    
    // afficher le resultat
    printf("le nombre de moles est : %.2f\n", n);
    return 0;
}