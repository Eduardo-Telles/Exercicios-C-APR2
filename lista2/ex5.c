#include <stdio.h>
int main(){
    float distancia_percorrida,tempo_gasto;
    printf("Digite a distância percorrida: ");
    scanf("%f",&distancia_percorrida);
    printf("Digite o tempo gasto em horas: ");
    scanf("%f",&tempo_gasto);
    float velocidade_media=distancia_percorrida/tempo_gasto;
    printf("A velocidade média foi de: %f",velocidade_media);
    return 0;
}