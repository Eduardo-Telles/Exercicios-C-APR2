#include <stdio.h>
int main(){
    int matriz[2][2];
    
    for(int linha=0;linha<2;linha++){
        for(int coluna=0;coluna<2;coluna++){
            printf("Digite um número para a linha %i coluna %i: ",linha+1,coluna+1);
            scanf("%i",&matriz[linha][coluna]);
        }
    }
    int maior=matriz[0][0];
    for(int l=0;l<2;l++){
        for(int c=0;c<2;c++){
            if(maior<matriz[l][c]){
                maior=matriz[l][c];
            }
        }
    }
    int matrizR[2][2];
    for(int lin=0;lin<2;lin++){
        for(int col=0;col<2;col++){
            matrizR[lin][col]=matriz[lin][col]*maior;
        }
    }
    for(int linh=0;linh<2;linh++){
        for(int colu=0;colu<2;colu++){
            printf("%i ",matrizR[linh][colu]);
        }
        printf("\n");
    }
    return 0;
}