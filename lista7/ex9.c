#include <stdio.h>
#include <string.h>
 typedef struct{
        char placa[9];
        char marca[30];
        char modelo[30];
        int ano_fabricacao;
    }Veiculos;
Veiculos leituraDados(Veiculos structVeiculo){
    printf("Digite a placa do carro: ");
    fgets(structVeiculo.placa,sizeof(structVeiculo.placa),stdin);
    structVeiculo.placa[strcspn(structVeiculo.placa,"\n")]=0;
    printf("Digite a marca do carro: ");
    fgets(structVeiculo.marca,sizeof(structVeiculo.marca),stdin);
    structVeiculo.marca[strcspn(structVeiculo.marca,"\n")]=0;
    printf("Digite o modelo do carro: ");
    fgets(structVeiculo.modelo,sizeof(structVeiculo.modelo),stdin);
    structVeiculo.modelo[strcspn(structVeiculo.modelo,"\n")]=0;
    printf("Digite o ano de fabricação: ");
    scanf("%i",&structVeiculo.ano_fabricacao);
    while(getchar()!='\n' && getchar()!=EOF);
    return structVeiculo;
}
void exibicaodados(Veiculos veiculo){
    printf("Placa: %s\n",veiculo.placa);
    printf("Marca: %s\n",veiculo.marca);
    printf("Modelo: %s\n",veiculo.modelo);
    printf("Ano de Fabricação: %i\n",veiculo.ano_fabricacao);
}
Veiculos atualizacaoDados(Veiculos veiculo){
    printf("Digite a atualização da placa: ");
    fgets(veiculo.placa,sizeof(veiculo.placa),stdin);
    veiculo.placa[strcspn(veiculo.placa,"\n")]=0;
    printf("Digite a atualização da marca: ");
    fgets(veiculo.marca,sizeof(veiculo.marca),stdin);
    veiculo.marca[strcspn(veiculo.marca,"\n")]=0;
    printf("Digite a atualização do modelo: ");
    fgets(veiculo.modelo,sizeof(veiculo.modelo),stdin);
    veiculo.modelo[strcspn(veiculo.modelo,"\n")]=0;
    printf("Digite a atualização da data de ano de fabricação: ");
    scanf("%i",&veiculo.ano_fabricacao);
    while(getchar()!='\n' && getchar()!=EOF);
    return veiculo;
}
int main(){
   Veiculos veiculo;
    veiculo=leituraDados(veiculo);
    exibicaodados(veiculo);
    veiculo=atualizacaoDados(veiculo);
    exibicaodados(veiculo);
    return 0;
}