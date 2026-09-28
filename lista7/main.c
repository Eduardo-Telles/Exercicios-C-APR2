#include <stdio.h>
#include <string.h>
typedef struct
{
    char nome[30];
    float preco;
    int qnt;
}produtos;
produtos leituraDados(produtos produto[5]){
    for(int i=0;i<5;i++){
        printf("digite o nome do produto %i: ",i+1);
        fgets(produto[i].nome,sizeof(produto[i].nome),stdin);
        produto[i].nome[strcspn(produto[i].nome,"\n")]=0;
        printf("digite o preço do produto %i: ",i+1);
        scanf("%f",&produto[i].preco);
        printf("digite a quantidade do produto %i para o estoque: ",i+1);
        scanf(" %i",&produto[i].qnt);
    }
    return produto[5];
}
void exibicaoDados(produtos array[5]){
    for(int i=0;i<5;i++){
        printf("Nome: %s",array[i].nome)

    }
}
int main(){
    produtos produto[5];
    produtos array=leituraDados(produto);
    exibicaoDados(array);
    return 0;
}