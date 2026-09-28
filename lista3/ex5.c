#include <stdio.h>
int main(){
    float x,v1,v2,km_percorridos,valor;
    printf("Digite a distância máxima para cobrar V1: ");
    scanf("%f",&x);
    printf("Digite o valor que cobrará até %f km: ",x);
    scanf("%f",&v1);
    printf("Digite o valor que cobrará após %f km: ",x);
    scanf("%f",&v2);
    printf("digite quantos km foram percorridos: ");
    scanf("%f",&km_percorridos);
    if (km_percorridos<=x){
        valor=km_percorridos*v1;
        printf("O valor a ser pago será de: %.2f",valor);
    }
    else{
        valor=km_percorridos*v2;
        printf("O valor a ser pago será de: %.2f",valor);
    }
}