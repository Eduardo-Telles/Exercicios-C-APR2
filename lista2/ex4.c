#include <stdio.h>
#include <math.h>
int main(){
    float x1,y1,x2,y2,distancia,calculo_pot;
    printf("Digite o número em que se encontra a cordenada x1 no plano cartesiano: ");
    scanf("%f",&x1);
    printf("Digite o número em que se encontra a cordenada y1 no plano cartesiano: ");
    scanf("%f",&y1);
    printf("Digite o número em que se encontra a cordenada x2 no plano cartesiano: ");
    scanf("%f",&x2);
    printf("Digite o número em que se encontra a cordenada y2 no plano cartesiano: ");
    scanf("%f",&y2);
    calculo_pot=pow(x2-x1,2)+pow(y2-y1,2);
    distancia=pow(calculo_pot,1.0/2.0);
    printf("A distancia entre os dois pontos é: %f",distancia);
    return 0;
}