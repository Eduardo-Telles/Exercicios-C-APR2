#include <stdio.h>
int main(){
    char caracter,novo;
    printf("Digite um caracter: ");
    scanf("%c",&caracter);
    if(caracter>65 && caracter<91){
        novo=caracter+32;
        printf("O novo caracter é: %c",novo);
    }
    else if(caracter>90 && caracter<123){
        novo=caracter-32;
        printf("O novo caracter é: %c",novo);
    }
    else{
        printf("Esse não é um caractere que pode ser transformado em maiusculo ou minusculo!");
    }
}