#include <stdio.h>
int main(){
    int vet[10];
    for(int i=0;i<10;i++){
        printf("Digite um número para o vetor na posição %i: ",i+1);
        scanf("%i",&vet[i]);
    }
    int tam=10;
    for(int i=0;i<tam;i++){
        for(int j=1+i;j<tam;j++)
            if(vet[i]==vet[j]){
                for(int k=j;k<tam-1;k++){
                    vet[k]=vet[k+1];
                }
                tam--;
                j--;
            }
    }
    for(int x=0;x<tam;x++){
        printf("%i ",vet[x]);

    }
    return 0;
}