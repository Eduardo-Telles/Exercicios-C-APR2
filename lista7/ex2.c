#include <stdio.h>
void dataExtensao(int dia,int mes,int ano){
    char meses[][20]={"Janeiro",
    "Fevereiro",
    "Março",
    "Abril",
    "Maio",
    "Junho",
    "Julho",
    "Agosto",
    "Setembro",
    "Outubro",
    "Novembro",
    "Dezembro"};
    printf("%i de %s de %i",dia,meses[mes-1],ano);
}
int main(){
    int dia=0;
    int mes=0;
    int ano=0;
    printf("digite o dia: ");
    scanf("%i",&dia);
    printf("digite o mes: ");
    scanf(" %i",&mes);
    printf("digite o ano: ");
    scanf(" %i",&ano);
    dataExtensao(dia,mes,ano);
    return 0;
}