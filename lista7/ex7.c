#include <stdio.h>
#include <string.h>
#include <math.h>
#define tamanho 10
void lerVet(float vet[],int tam){
    for(int i=0;i<tam;i++){
    printf("Digite um número para o vetor: ");
    scanf("%f",&vet[i]);
    }
}
void exibirVetor(float vet[],int tam){
    for(int i=0;i<tam;i++){
        printf("%f,",vet[i]);
    }
}
float calcularAMedia(float vet[],int tam){
    float soma=0;
    for(int i=0;i<tam;i++){
        soma=soma+vet[i];
    }
    return soma/tam;
}
float calcularEretornarVariancia(int tam,float vet[],float media){
    float variancia=0;    
    for(int i=0;i<tam;i++){
        variancia=variancia+(vet[i]-media)*(vet[i]-media);
    }
    return variancia/tam;
}
float desvioPadrao(float variancia){
    return pow(variancia,1.0/2.0);
}
void atualizarValoresAbaixoMedia(float vet[],float media,int tam){
    printf("Informe em quantos porcento você quer aumentar os numeros abaixo da média: ");
    float porcentagem=0;
    scanf("%f",&porcentagem);
    for(int i=0;i<tam;i++){
        if(vet[i]<media){
            vet[i]=vet[i]*(porcentagem/100+1);
        }
    }
}
int main(){
    float vetor[tamanho];
    float media=0;
    float variancia=0;
    float desvio=0;
    lerVet(vetor,tamanho);
    exibirVetor(vetor,tamanho);
    media=calcularAMedia(vetor,tamanho);
    printf("%f\n",media);
    variancia=calcularEretornarVariancia(tamanho,vetor,media);
    printf("%f\n",variancia);
    desvio=desvioPadrao(variancia);
    printf("%f\n",desvio);
    atualizarValoresAbaixoMedia(vetor,media,tamanho);
    exibirVetor(vetor,tamanho);
    return 0;
}