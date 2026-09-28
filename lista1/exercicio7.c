#include <stdio.h>
int main()
{
    float minutos,horas;
    printf("Digite a quantidade de minutos");
    scanf("%f",&minutos);
    horas=minutos/60;
    printf("o valor dos minutosa em horas é: %f",horas);
    return 0;
}