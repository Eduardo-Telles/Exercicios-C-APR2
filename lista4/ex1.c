#include <stdio.h>
#define funcionarios 10
int main(){
    float soma=0;
    float salarios[funcionarios];
    for(int i=0;i<funcionarios;i++){
        printf("Digite o salário do funcionário %d: \n",i+1);
        scanf("%f",&salarios[i]);
        soma+=salarios[i];
    }
    float media=soma/funcionarios;
    printf("Média de salários: %.2f\n",media);
    for(int i=0;i<funcionarios;i++){
        if (salarios[i]>media){
            salarios[i]=salarios[i]*1.05;
        }
        else{
            salarios[i]=salarios[i]*1.10;
        }
        printf("Salário após reajuste: %.2f\n",salarios[i]);
    }
    return 0;
}