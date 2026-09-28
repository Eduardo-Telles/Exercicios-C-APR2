#include <stdio.h>
int main(){
    int matriz[4][4];
    for(int l=0;l<4;l++){
        for(int c=0;c<4;c++){
            printf("Digite um número para a linha %i coluna %i: ",l+1,c+1);
            scanf("%i",&matriz[l][c]);
        }
    }
    int identidade=1;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(i==j){
                if(matriz[i][j]!=1){
                    identidade=0;
                }
            }
            else{
                if(matriz[i][j]!=0){
                    identidade=0;
                }
            }
        }
    }
    if(identidade==0){
        printf("Não é matriz identidade");
    }
    if(identidade==1){
        printf("É matriz identidade!");
    }
    return 0;
}