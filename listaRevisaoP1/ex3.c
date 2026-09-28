#include <stdio.h>
#include <string.h>
#define tam 3
typedef struct
    {
        char placa[9];
        char marca[30];
        float valordiaria;
        char disponibilidade;
    }carros;
void mostrarveiculo(carros vetor[],int i){
        printf("Placa: %s\n",vetor[i].placa);
        printf("Marca: %s\n",vetor[i].marca);
        printf("Valor da diária: %f\n",vetor[i].valordiaria);
        printf("Disponibilidade: %c\n",vetor[i].disponibilidade);
        printf("------------------------------\n");
}
void organizaArray(carros vetor[],carros carro,int j){
    carros armazena;
    vetor[j]=carro;
    for(int x=0;x<j;x++){
        for(int i=0;i<j;i++){
            if(strcmp(vetor[i].placa,vetor[i+1].placa)>0){
                armazena=vetor[i];
                vetor[i]=vetor[i+1];
                vetor[i+1]=armazena;
            }
        }
    }
}
void lerVeiculos(carros carro,carros vetor[],int j){
    printf("Digite a placa do carro: ");
    fgets(carro.placa,sizeof(carro.placa),stdin);
    carro.placa[strcspn(carro.placa,"\n")]=0;
    printf("Digite a marca do carro: ");
    fgets(carro.marca,sizeof(carro.marca),stdin);
    carro.marca[strcspn(carro.marca,"\n")]=0;
    printf("Digite o valor da diária: ");
    scanf("%f",&carro.valordiaria);
    while(getchar()!='\n' && getchar()!=EOF);
    printf("Digite a disponibilidade do carro: ");
    scanf("%c",&carro.disponibilidade);
    while(getchar()!='\n' && getchar()!=EOF);
    organizaArray(vetor,carro,j);
}
void exibirveiculosEindicarDisponiveis(carros vetor[]){
    printf("Carros Disponíveis: \n");
    for(int i=0;i<tam;i++){
        if(vetor[i].disponibilidade=='S'){
           mostrarveiculo(vetor,i);
        }
    }
    printf("Carros Indisponíveis: \n");
    for(int i=0;i<tam;i++){
        if(vetor[i].disponibilidade!='S'){
           mostrarveiculo(vetor,i);
        }
    }
}
int buscarveiculopelaplaca(char placa[],carros vetor[],int qntd){
    for(int i=0;i<qntd;i++){
        if(strcmp(placa,vetor[i].placa)==0){
            printf("Veículo encontrado!\n");
            mostrarveiculo(vetor,i);    
            return i;
        }
    }
    printf("Veiculo não encontrado ;--;!\n");
    return -1;
}
void registraralocacao(char placa[],carros vetor[],int qntd){
    int posicao=buscarveiculopelaplaca(placa,vetor,qntd);
    if(posicao!=-1){
        if(vetor[posicao].disponibilidade=='S'){
            printf("Este carro está disponível, vou alocar para você: \n");
            vetor[posicao].disponibilidade='n';
            mostrarveiculo(vetor,posicao);
        }
        else{
            printf("Esse carro não está disponível: \n");
            mostrarveiculo(vetor,posicao);
        }
    }
}
void devolucao(char placa[],carros vetor[],int qntd){
    int posicao=buscarveiculopelaplaca(placa,vetor,qntd);
    if(posicao!=-1){
        if(vetor[posicao].disponibilidade!='S'){
            vetor[posicao].disponibilidade='S';
            mostrarveiculo(vetor,posicao);
        }
        else{
            printf("Há algum problema o carro que está devolvendo consta não alocado!\n");
            mostrarveiculo(vetor,posicao);
        }
    }
}
int removerveiculo(char placa[],carros vetor[],int qntd){
    int posicao=buscarveiculopelaplaca(placa,vetor,qntd);
    if(posicao!=-1){
            for(int i=posicao;i<qntd-1;i++){
                vetor[i]=vetor[i+1];
            }
            qntd--;
    }
    return qntd;
}
int main(){
    
    carros carro;
    int qntd=tam;
    int opcao=0;
    carros vetor[qntd];
    while(opcao!=7){
        printf("Menu de Opções:\n");
        printf("1-Ler veículos\n2-Exibir Veículos e indicar disponibilidade\n3-Buscar veículo pela placa\n4-Registrar alocação de veículo\n5-Registrar Devolução de veículo\n6-Remover Veículo\n7-Sair\n");
        printf("Digite uma opção: ");
        scanf("%d",&opcao);
        while(getchar()!='\n' && getchar()!=EOF);
        switch (opcao)
        {
        case 1:
            for(int i=0;i<qntd;i++){
                lerVeiculos(carro,vetor,i);
            }
            break;
        case 2:
            exibirveiculosEindicarDisponiveis(vetor);
            break;
        case 3:
            printf("Digite a placa que quer buscar o veículo: \n");
            char placa[30];
            fgets(placa,sizeof(placa),stdin);
            placa[strcspn(placa,"\n")]=0;
            buscarveiculopelaplaca(placa,vetor,qntd);
            break;
        case 4:
            char placa2[30];
            printf("Digite a placa do veículo que deseja a locação: \n");
            fgets(placa2,sizeof(placa2),stdin);
            placa2[strcspn(placa2,"\n")]=0;
            registraralocacao(placa2,vetor,qntd);
            break;
        case 5:
            char placa3[30];
            printf("Digite a placa do veículo que deseja fazer a devolução: \n");
            fgets(placa3,sizeof(placa3),stdin);
            placa3[strcspn(placa3,"\n")]=0;
            devolucao(placa3,vetor,qntd);
            break;
        case 6:
            char placa4[30];
            printf("Digite a placa do veículo que deseja remover: \n");
            fgets(placa4,sizeof(placa4),stdin);
            placa4[strcspn(placa4,"\n")]=0;
            qntd=removerveiculo(placa4,vetor,qntd);
            break;
        case 7:
            break;
        default:
            printf("Opção inválida!");
            break;
        }
    }
    return 0;
}