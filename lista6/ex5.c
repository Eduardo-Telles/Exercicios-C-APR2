#include <stdio.h>
#include <string.h>
int main(){
    typedef struct{
        int dia;
        int mes;
        int ano;
    }Data;
    typedef struct{
        char nome_cidade[30];
        char uf[4];
    }Cidade;
    typedef struct{
        char rua[30];
        int numero;
        Cidade cidade;
    }Endereço;
    typedef struct{
        char nome[30];
        Data data;
        Endereço endereço;
    }Funcionario;
    Funcionario Funcionarios;
    printf("Digite o nome do funcionário: ");
    fgets(Funcionarios.nome,sizeof(Funcionarios.nome),stdin);
    Funcionarios.nome[strcspn(Funcionarios.nome,"\n")]=0;
    printf("Digite o dia de admissao: ");
    scanf("%i",&Funcionarios.data.dia);
    while(getchar()!='\n' && getchar()!=EOF);
    printf("Digite o mês de admissao: ");
    scanf("%i",&Funcionarios.data.mes);
    while(getchar()!='\n' && getchar()!=EOF);
    printf("Digite o ano de admissao: ");
    scanf("%i",&Funcionarios.data.ano);
    while(getchar()!='\n' && getchar()!=EOF);
    printf("Digite o nome da rua: ");
    fgets(Funcionarios.endereço.rua,sizeof(Funcionarios.endereço.rua),stdin);
    Funcionarios.endereço.rua[strcspn(Funcionarios.endereço.rua,"\n")]=0;
    printf("digite o número do endereço: ");
    scanf("%i",&Funcionarios.endereço.numero);
    while(getchar()!='\n' && getchar()!=EOF);
    printf("Digite o nome da cidade: ");
    fgets(Funcionarios.endereço.cidade.nome_cidade,sizeof(Funcionarios.endereço.cidade.nome_cidade),stdin);
    Funcionarios.endereço.cidade.nome_cidade[strcspn(Funcionarios.endereço.cidade.nome_cidade,"\n")]=0;
    printf("Digite o UF da cidade: ");
    fgets(Funcionarios.endereço.cidade.uf,sizeof(Funcionarios.endereço.cidade.uf),stdin);
    Funcionarios.endereço.cidade.uf[strcspn(Funcionarios.endereço.cidade.uf,"\n")]=0;
    printf("%s \n",Funcionarios.nome);
    printf("%i/",Funcionarios.data.dia);
    printf("%i/",Funcionarios.data.mes);
    printf("%i \n",Funcionarios.data.ano);
    printf("%s, ",Funcionarios.endereço.rua);
    printf("%i, ",Funcionarios.endereço.numero);
    printf("%s, ",Funcionarios.endereço.cidade.nome_cidade);
    printf("%s",Funcionarios.endereço.cidade.uf);
    return 0;
}