#include <stdio.h>
int main(){
    int matriz[4][3];
    for(int linha=0;linha<4;linha++){
        for(int coluna=0;coluna<3;coluna++){
            printf("Digite o núemro de vendas do vendedor %i do produto %i: ",linha+1,coluna+1);
            scanf("%i",&matriz[linha][coluna]);
        }
    }
    int maior=0,vendedor=0;
    for(int i=0;i<4;i++){
        int vendas=0;
        for(int j=0;j<3;j++){
            vendas=vendas+matriz[i][j];
            if(i==0 && j==2){
                maior=vendas;
                vendedor=i+1;    
            }
            if(vendas>maior){
                maior=vendas;
                vendedor=i+1;
            }
        }
        printf("O vendedor %i vendeu: %i produtos\n",i+1,vendas);
    }
    int maior_vend_prod=0,produto=0;
    for(int c=0;c<3;c++){
        int vendas_prod=0;
        for(int l=0;l<4;l++){
            vendas_prod=vendas_prod+matriz[l][c];
            if(c==0 && l==0){
                maior_vend_prod=vendas_prod;
                produto=c+1;
            }
            if(vendas_prod>maior_vend_prod){
                maior_vend_prod=vendas_prod;
                produto=c+1;
            }
        }
        printf("O produto %i vendeu: %i unidades\n",c+1,vendas_prod);
    }
    printf("O vendedor com maior número de vendas foi o vendedor %i\n",vendedor);
    printf("O produto que apresentou a maior quantidade de unidades vendidas foi o produto %i\n",produto);
    int soma=0;
    for(int lin=0;lin<4;lin++){
        for(int col=0;col<3;col++){
            soma+=matriz[lin][col];
        }
    }
    printf("O total de unidades vendidas pela empresa foi de %i unidades",soma);
    return 0;
}