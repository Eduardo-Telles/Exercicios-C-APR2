#include <stdio.h>
#include <math.h>
void criarvetor(int vetor[],int N){
    for(int i=0;i<N+2;i++){
        vetor[i]=i;
    }
}
void mostrarVetor(int vetor[],int N){
    for(int i=2;i<=N;i++){
        printf("%i  ",vetor[i]);
    }
}
void usandoEratóstenes(int vetor[],int N){
    vetor[0]=0;
    vetor[1]=0;
    for(int i=2;i<=sqrt(N);i++){
            for(int j=2*i;j<=N;j+=i){
                    vetor[j]=0;
            }
    }
}
int main(){
    int N=0;
    int c;
    printf("Digite um número para N e descubra os números primos de 2 ate N usando o método de Eratóstenes: ");
    scanf("%d",&N);
    while((c=getchar())!='\n' && c!=EOF);
    int vetor[N+1];
    criarvetor(vetor,N);
    mostrarVetor(vetor,N);
    usandoEratóstenes(vetor,N);
    printf("\n");
    mostrarVetor(vetor,N);
    return 0;
}