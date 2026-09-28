#include <stdio.h>
int main()
{
    float Nota1,Nota2,Nota3,Peso1,Peso2,Peso3,Media;
    printf("Digite a Nota1: ");
    scanf("%f",&Nota1);
    printf("Digite o Peso1: ");
    scanf("%f",&Peso1);
    printf("Digite a Nota2: ");
    scanf("%f",&Nota2);
    printf("Digite o Peso2: ");
    scanf("%f",&Peso2);
    printf("Digite a Nota3: ");
    scanf("%f",&Nota3);
    printf("Digite o Peso3: ");
    scanf("%f",&Peso3);
    Media=(Nota1*Peso1+Nota2*Peso2+Nota3*Peso3)/(Peso1+Peso2+Peso3);
    printf("A Média foi: %f",Media);
    return 0;

}