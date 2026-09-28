#include <stdio.h>
int main(){
    int matriz[3][2];
    for(int l=0;l<3;l++){
        for(int c=0;c<2;c++){
            printf("Digite um número para a linha %i coluna %i: ",l+1,c+1);
            scanf("%i",&matriz[l][c]);
        }
    }
    int matrizT[2][3];
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            matrizT[i][j]=matriz[j][i];
        }
    }
    for(int linha=0;linha<2;linha++){
        for(int coluna=0;coluna<3;coluna++){
            printf("%i ",matrizT[linha][coluna]);
        }
        printf("\n");
    }
    return 0;
}