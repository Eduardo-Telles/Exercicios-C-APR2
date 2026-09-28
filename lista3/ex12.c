#include <stdio.h>
int main(){
    int idade=0,idosa=0,maior_de_idade=0;
    float num_pessoa=1;
    do
    {
        printf("Digite a idade da pessoa %i: ",num_pessoa);
        scanf("%i",&idade);
        if(idade>20){
            maior_de_idade++;
        }
        if(idade>65){
            idosa++;
        }
        num_pessoa++;
    } while (idade>=0);
    float porc_idosa=(idosa*100)/num_pessoa;
    printf("A quantidade de pessoas maiores de idade é: %i\nA porcentagem de pessoas idosas é: %f%%\n",maior_de_idade,porc_idosa);
}
