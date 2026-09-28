#include <stdio.h>
int main(){
    float peso, altura,imc;
    printf("Digite o peso: ");
    scanf("%f",&peso);
    printf("Digite o altura: ");
    scanf("%f",&altura);
    imc=peso/(altura*altura);
    if (imc>=40){
        printf("Obesidade III");
    }
    else if(imc>34.9){
        printf("Obesidade II");
    }
    else if(imc>29.9){
        printf("Obesidade I");
    }
    else if(imc>24.9){
        printf("Acima do Peso");
    }
    else if(imc>=18.5){
        printf("peso normal");
    }
    else{
        printf("Abaixo do peso!");
    }
}