#include <stdio.h>
int main()
{
    float peso,altura,imc;
    printf("Digite o peso: ");
    scanf("%f",&peso);
    printf("Digite a altura: ");
    scanf("%f",&altura);
    imc=peso/(altura*altura);
    printf("O imc é: %f",imc);
    return 0;
}