#include <stdio.h>
int main(){
    int cont=0;
    while(cont==0){
        int num=0,divisor=2;
        printf("Digite um número para saber se ele é primo: ");
        scanf("%i",&num);
        if(num<=1){
            printf("Número inválido!\n");
        }
        else{
            for(divisor;divisor<=num;divisor++){
                if(divisor==num){
                    printf("É primo!!!!\n");
                    break;
                }
                else if(num%divisor==0){
                    printf("Não é primo!\n");
                    break;
                }
            }

        }
    }
    return 0;
}