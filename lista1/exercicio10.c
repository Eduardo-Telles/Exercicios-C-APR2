#include <stdio.h>
int main()
{
    float peso_raçao_kg,qntd_diaria_raçao_fornecida_gato1,qntd_raçao_fornecida_gato2,consumo_em_kg_apos_5dias_gato1,consumo_em_kg_apos_5dias_gato2,restante_da_raçao_pós_5dias;
    printf("Digite o peso em kg da ração comprada: ");
    scanf("%f",&peso_raçao_kg);
    printf("Digite a quantidade de ração fornecida ao gato1 em gramas: ");
    scanf("%f",&qntd_diaria_raçao_fornecida_gato1);
    printf("Digite a quantidade de ração fornecida ao gato2 em gramas: ");
    scanf("%f",&qntd_raçao_fornecida_gato2);
    consumo_em_kg_apos_5dias_gato1=qntd_diaria_raçao_fornecida_gato1*5/1000;
    consumo_em_kg_apos_5dias_gato2=qntd_raçao_fornecida_gato2*5/1000;
    printf("A quantidade de ração em kg dadas ao gato1 em 5dias foi de: %f, já a quantidade de ração fornecida ao gato2 em kg em 5 dias foi de: %f ",consumo_em_kg_apos_5dias_gato1,consumo_em_kg_apos_5dias_gato2);
    restante_da_raçao_pós_5dias=peso_raçao_kg-(consumo_em_kg_apos_5dias_gato1+consumo_em_kg_apos_5dias_gato2);
    printf("restará %f kg da ração após os 5 dias",restante_da_raçao_pós_5dias);
    return 0;
}