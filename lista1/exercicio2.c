#include <stdio.h>
int main()
{
    float Fahrenheit,Celcius;
    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f",&Fahrenheit);
    Celcius=(Fahrenheit-32)*5/9;
    printf("A temperatura convertida para Celcius é: %f",Celcius);
    return 0;
}