#include <stdio.h>
int main(){
    int dia,mes,ano,dia2,mes2,ano2;
    printf("Digite o dia1: ");
    scanf("%i",&dia);
    printf("Digite o mes: ");
    scanf("%i",&mes);
    printf("Digite o ano: ");
    scanf("%i",&ano);
    printf("Digite o dia2: ");
    scanf("%i",&dia2);
    printf("Digite o mes2: ");
    scanf("%i",&mes2);
    printf("Digite o ano2: ");
    scanf("%i",&ano2);
    if(ano>ano2){
        printf("Data1 é maior");
    }
    else if(ano2>ano){
        printf("Data2 é maior");
    }
    else
    {
        if (mes>mes2){
            printf("data1 é maior");
        }
        else if(mes2>mes){
            printf("data2 é maior");
        }
        else{
            if (dia>dia2){
                printf("data1 é maior");
            }
            else if(dia2>dia){
                printf("data2 é maior");
            }
            else{
                printf("Data Igual!");
            }
        }
    }
}