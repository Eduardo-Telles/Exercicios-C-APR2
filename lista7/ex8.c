#include <stdio.h>
void lerMatriz(int matriz[5][5]){
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            printf("Digite um numero para a matriz na posição linha %i coluna %i : ",i+1,j+1);
            scanf("%i",&matriz[i][j]);
        }
    }
}
void MostrarMatriz(int matriz[5][5]){
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            printf("%i,",matriz[i][j]);
        }
        printf("\n");
    }
}
void multiplicarMatriz(int matriz[5][5], int num){
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            matriz[i][j]=matriz[i][j]*num;
        }
    }
}
int main(){
    int matriz[5][5];
    lerMatriz(matriz);
    MostrarMatriz(matriz);
    printf("Digite um numero para multiplicar os numeros da matriz: ");
    int num=0;
    scanf("%i",&num);
    multiplicarMatriz(matriz,num);
    MostrarMatriz(matriz);
    return 0;
}