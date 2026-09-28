#include <stdio.h>
int main(){
    float distancia,qnt_combustivel_consumida_Litros,consumo_medio_veiculo_km;
    printf("Digite a distância percorrida pelo veículo em km: ");
    scanf("%f",&distancia);
    printf("Digite a quantidade de combustivel consumida: ");
    scanf("%f",&qnt_combustivel_consumida_Litros);
    consumo_medio_veiculo_km=distancia/qnt_combustivel_consumida_Litros;
    printf("O consumo médio é de: %f km/l",consumo_medio_veiculo_km);
}