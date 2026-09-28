#include <stdio.h>
#include <math.h>
int main()
{
    float Capital_aplicado,Taxa_juros_anual,tempo_aplicacao_em_anos,montante;
    printf("Digite o capital aplicado: ");
    scanf("%f",&Capital_aplicado);
    printf("Digite a taxa de juros anual: ");
    scanf("%f",&Taxa_juros_anual);
    printf("Digite o tempo de aplicação em anos: ",&tempo_aplicacao_em_anos);
    scanf("%f",&tempo_aplicacao_em_anos);
    montante=Capital_aplicado*pow((1+Taxa_juros_anual/100),tempo_aplicacao_em_anos);
    printf("O montante acumulado será de: %f",montante);
    return 0;
}