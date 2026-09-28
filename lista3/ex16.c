#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand(time(NULL));
    int sair=0;
    while(sair==0){
        int numero=rand()%3+1;
        int escolha=0;
        printf("1-Pedra\n");
        printf("2-Papel\n");
        printf("3-Tesoura\n");
        printf("0-Encerrar Programa\n");
        printf("Faça sua escolha: ");
        scanf("%i",&escolha);
        if(numero==1){
            printf("O computador jogou Pedra!\n");
        }
        else if(numero==3){
            printf("O computador jogou Tesoura!\n");
        }
        else{
            printf("O computador jogou Papel!\n");
        }
        if(escolha==1){
            if(numero==3){
                printf("Você ganhou!\n");
            }
            else if(numero==escolha){
                printf("Empate!\n");
            }
            else{
                printf("Você perdeu!\n");
            }
        }
        else if(escolha==2){
            if(numero==1){
                printf("Você ganhou!\n");
            }
            else if(numero==escolha){
                printf("Empate!\n");
            }
            else{
                printf("Você perdeu\n");
            }
        }
        else if(escolha==3){
            if(numero==2){
                printf("Você Ganhou!\n");
            }
            else if(numero==escolha){
                printf("Empate!\n");
            }
            else{
                printf("Você perdeu\n");
            }
        }
        else if(escolha==0){
            sair=1;
        }
    }
    return 0;
}