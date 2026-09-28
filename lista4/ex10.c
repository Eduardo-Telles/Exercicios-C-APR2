#include <stdio.h>
int main(){
    int matriz[3][3];
    for(int l=0;l<3;l++){
        for(int c=0;c<3;c++){
            printf("Digite um número para a linha %i coluna %i: ",l+1,c+1);
            scanf("%i",&matriz[l][c]);
        }
    }
    int naosimetrica=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(matriz[i][j]!=matriz[j][i]){
                naosimetrica=1;
                break;
            }
        }
    }
    if(naosimetrica==0){
        printf("É uma matriz simétrica");
    }
    else{
        printf("Não é uma matriz simétrica");
    }
    return 0;
}