#include <stdio.h>
int main()
{
    float dolar,qntd_dolar,reais;
    printf("Digite a cotação do Dólar: ");
    scanf("%f",&dolar);
    printf("Digite a quantos Dólares quer converter: ");
    scanf("%f",&qntd_dolar);
    reais=qntd_dolar*dolar;
    printf("Com a cotação de %2.f, convertendo %2.f dólares para reais dará R$ %2.f",dolar,qntd_dolar,reais);
    return 0;
}