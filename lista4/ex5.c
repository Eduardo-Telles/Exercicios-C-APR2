#include <stdio.h>
int main(){
    int matriz[4][3];
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            printf("Digite um número para a linha %i e coluna %i: ",i+1,j+1);
            scanf("%i",&matriz[i][j]);
        }
    }
    for(int x=0;x<4;x++){
        int contador=0;
        for(int z=0;z<3;z++){
            if(matriz[x][z]%2==0)
                contador++;            
        }
        printf("A quantidade de números pares da linha %i é de: %i\n",x+1,contador);

    }
    for(int c=0;c<3;c++){
        float temp=0;
        for(int l=0;l<4;l++){
            temp+=matriz[l][c];
        }
        float media=temp/4.0;
        printf("A média da coluna %i é de: %f\n",c+1,media);
    }
    return 0;
}