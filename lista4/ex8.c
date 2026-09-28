#include <stdio.h>
int main(){
    int matriz[3][3];
    for(int linha=0;linha<3;linha++){
        for(int coluna=0;coluna<3;coluna++){
            printf("Digite um número para a linha %i coluna %i: ",linha+1,coluna+1);
            scanf("%i",&matriz[linha][coluna]);
        }
    }
    int menos=0;
    for(int l=0;l<3;l++){
        for(int c=0+menos;c<3;c++){
            printf("%i ",matriz[l][c]);
        }
        printf("\n");
        menos++;
    }
    return 0;
}