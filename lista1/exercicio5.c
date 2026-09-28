#include <stdio.h>
#include <math.h>
int main()
{
    float salario,reajuste,aumento;
    printf("Digite o salário: ");
    scanf("%f",&salario);
    printf("Digite a porcentagem do reajuste: ");
    scanf("%f",&reajuste);
    aumento=salario*(1+reajuste/100)-salario;
    printf("O salário com reajuste é: %.2f, ou seja o aumento foi de %.2f",salario*(1+reajuste/100),aumento);
    return 0;
}