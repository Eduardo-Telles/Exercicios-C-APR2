#include <stdio.h>
int main(){
    int matriz[5][4];
    for(int linha=0;linha<5;linha++){
        for(int coluna=0;coluna<4;coluna++){
            printf("Digite um número para a linha %i colu %i: ",linha+1,coluna+1);
            scanf("%i",&matriz[linha][coluna]);
        }
    }
    int linha1[1][4];
    for(int l=1;l<4;l+=2){
        for(int c=0;c<4;c++){
            if(l==1){
                linha1[0][c]=matriz[l][c];
            }
            if(l==3){
                matriz[1][c]=matriz[4][c];
            }
        }
    }
    for(int lin=0;lin<1;lin++){
        for(int col=0;col<4;col++){
            matriz[4][col]=linha1[0][col];
        }
    }
    for(int linha=0;linha<5;linha++){
        for(int coluna=0;coluna<4;coluna++){
            printf("%i ",matriz[linha][coluna]);
        }
        printf("\n");
    }
    return 0;
}