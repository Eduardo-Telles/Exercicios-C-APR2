#include <stdio.h>
#include <string.h>
#define tam 5
int main(){
    typedef struct 
    {
        char nome[30];
        float preco;
        int quantidade;
    }produto;
    produto produtos[tam];
    for(int i=0;i<tam;i++){
        printf("Digite o nome do produto %i: ",i+1);
        fgets(produtos[i].nome,sizeof(produtos[i].nome),stdin);
        produtos[i].nome[strcspn(produtos[i].nome,"\n")]=0;
        printf("Digite o preço: ");
        float prec=0;
        scanf("%f",&prec);
        produtos[i].preco=prec;
        int qntd=0;
        printf("Digite a quantidade: ");
        scanf("%i",&qntd);
        produtos[i].quantidade=qntd;
        while(getchar()!='\n' && getchar()!=EOF);
    } 
    float qntd_max=0;
    float preco_total=0;
    float capital_financeiro=0;
    for(int i=0;i<tam;i++){
        capital_financeiro=produtos[i].preco*produtos[i].quantidade;
        preco_total=preco_total+produtos[i].preco;
        printf("O capital do prod %i é : %f\n",i,capital_financeiro);
    }
    float media=preco_total/5;

    printf("A média dos produtos foi: %f\n",media);
    for(int i=0;i<tam;i++){
        if(produtos[i].preco>media){
            printf("nome: %s\n",produtos[i].nome);
            printf("preço: %f\n",produtos[i].preco);
            printf("Quantidade: %i\n",produtos[i].quantidade);
        }        
    }    
    return 0;
}
