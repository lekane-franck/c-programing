#include <stdio.h>
int main(){
    double num1, num2, product;
    printf("entrer the first number:");
    scanf("%lf", &num1);
    printf("entrer the second number:");
    scanf("%lf", &num2);
    product= num1*num2;
    printf("product:%.2lf \n",product);
    return 0;
}