#include <stdio.h>
float transformaPCelcius(float tempFahre){
    return (tempFahre-32)*5.0/9.0;
}
int main(){
    float tempFahre=0;
    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f",&tempFahre);
    float celcius=transformaPCelcius
    (tempFahre);
    printf("%f",celcius);
    return 0;
}