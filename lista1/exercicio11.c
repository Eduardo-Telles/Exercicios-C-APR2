#include <stdio.h>
int main()
{
    float salario_minimo,qntd_kw_na_residencia,valor_kw,valor_a_ser_pago_pela_residencia;
    printf("Digite o salário mínimo: ");
    scanf("%f",&salario_minimo);
    printf("Digite a quantidade de kw consumida por uma residência: ");
    scanf("%f",&qntd_kw_na_residencia);
    valor_kw=salario_minimo*1.0/5.0;
    printf("O valor do Kw é de: %2.f\n",valor_kw);
    valor_a_ser_pago_pela_residencia=valor_kw*qntd_kw_na_residencia;
    printf("O valor a ser pago por essa residência é de R$%2.f",valor_a_ser_pago_pela_residencia);
    return 0;
}