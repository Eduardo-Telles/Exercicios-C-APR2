#include <stdio.h>
int main(){
    int escolha=0;
    printf("Digite 0 para realizar com for ou outro número para while: ");
    scanf("%i",&escolha);
    if(escolha==0){
        int num=0,fat=1;
        printf("Digite um número para saber seu fatorial: ");
        scanf("%i",&num);
        for(num;num>0;num-=1){
            fat=fat*num;
            printf("%i*",num);
            if(num==1){
                printf("=%i",fat);
            }
        }
    }
    else{
        int fat=1,num=0;
        printf("Digite um número para saber seu fatorial: ");
        scanf("%i",&num);
        while(num>0){
            fat=fat*num;
            printf("%i*",num);
            if(num==1){
                printf("=%i",fat);
            }
            num--;
        }
    }
    return 0;
}