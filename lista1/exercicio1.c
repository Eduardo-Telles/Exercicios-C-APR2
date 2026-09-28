#include <stdio.h>
int main()
{
    float base;
    float altura;
    printf("Digite a base do retângulo: ");
    scanf("%f",&base);
    printf("Digite a altura: ");
    scanf("%f",&altura);
    float area=base*altura;
    printf("A área do retangulo é: %f",area);
    return 0;
}