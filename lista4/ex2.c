#include <stdio.h>
int main(){
    int vet[6];
    int temp=0;
    for(int i=0;i<6;i++){
        printf("Digite um número para o vetor: ");
        scanf("%d",&vet[i]);
    }
    for(int i=0;i<6/2;i++){
        temp=vet[i];
        vet[i]=vet[5-i];
        vet[5-i]=temp;
    }
    for(int i=0;i<6;i++){
        printf("%d,",vet[i]);
    }
}