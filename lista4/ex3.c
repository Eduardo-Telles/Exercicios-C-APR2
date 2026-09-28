#include <stdio.h>
int main(){
    int vet[5],vet2[5];
    int temp=0;
    for(int i=0;i<5;i++){
        printf("Digite um número para o vetor 1: ");
        scanf("%i",&vet[i]);
        printf("Digite um número para o vetor 2: ");
        scanf("%i",&vet2[i]);
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if (vet[i]==vet2[j]){
                printf("%i\n",vet[i]);
            }
        }
    }
}