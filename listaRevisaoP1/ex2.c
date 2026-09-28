#include <stdio.h>

void CriarMatriz(float matriz[4][3][2])
{
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            for(int x = 0; x < 2; x++)
            {
                printf("Digite a nota do jurado %i, da escola %i e da categoria %i: ",
                       x+1, i+1, j+1);

                scanf("%f", &matriz[i][j][x]);

                while(getchar() != '\n' && getchar() != EOF);
            }
        }
    }
}
int modularizacao(){
    printf("Digite o numero da escola que quer somar as notas: ");
    int escola=0;
    scanf("%d",&escola);
    escola--;
    while(getchar() != '\n' && getchar() != EOF);
    return escola;
}
float somarMatriz(float matriz[4][3][2],int escola)
{
    float soma = 0;

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            soma = soma + matriz[escola][i][j];
        }
    }

    return soma;
}
void LerMatriz(float matriz[4][3][2])
{
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            for(int x = 0; x < 2; x++)
            {
                printf("Matriz[%d][%d][%d] = %.2f\n",
                       i, j, x, matriz[i][j][x]);
            }
        }
    }
}
float mediasomadosisjuradosporcateg(float matriz[4][3][2]){
    printf("Digite a escola que deseja fazer a media: ");
    int escola=0;
    scanf("%d",&escola);
    escola--;
    while(getchar() != '\n' && getchar() != EOF);
    printf("Digite a categoria que deseja: ");
    int cat=0;
    scanf("%d",&cat);
    cat--;
    while(getchar() != '\n' && getchar() != EOF);
    float soma=0;
    for(int i=0;i<2;i++){
        soma=soma+matriz[escola][cat][i];
    }
    return soma/2;
}
void escolacampea(float matriz[4][3][2]){
    float atual[4];
    atual[0]=somarMatriz(matriz,0);
    atual[1]=somarMatriz(matriz,1);
    atual[2]=somarMatriz(matriz,2);
    atual[3]=somarMatriz(matriz,3);
    float maior=atual[0];
    for(int i=1;i<4;i++){
        if(maior<atual[i]){
            maior=atual[i];
        }
    }
    int quantidadeCampeas = 0;
    for(int i = 0; i < 4; i++)
    {
        if(atual[i] == maior)
        {
            quantidadeCampeas++;
        }
    }
    if(quantidadeCampeas>1){
        printf("Houve um empate entre as escolas campeas!");
        for(int i=0;i<4;i++){
            if(maior==atual[i]){
                printf("A escola %d foi uma das campeãs!",i+1);
            }
        }
    }
    else{
        for(int i=0;i<4;i++){
            if(maior==atual[i]){
                printf("A escola %d foi a campeã!",i+1);
            }
        }
    }
}
int main(){
    float matriz[4][3][2];
    CriarMatriz(matriz);
    LerMatriz(matriz);
    int escola=modularizacao();
    float soma=somarMatriz(matriz,escola);
    printf("%f\n",soma);
    float result=mediasomadosisjuradosporcateg(matriz);
    printf("%f\n",result);
    escolacampea(matriz);
    return 0;
}