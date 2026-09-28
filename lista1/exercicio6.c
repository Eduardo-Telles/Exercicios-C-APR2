#include <stdio.h>
#include <math.h>
#define PI 3.14159
int main()
{
    float raio,volume,area;
    printf("Digite o raio da esfera: ");
    scanf("%f",&raio);
    area=4*PI*(raio*raio);
    volume=4.0/3.0*PI*(raio*raio*raio);
    printf("A Área da esfera é: %f e o Volume da esfera é: %f",area,volume);
    return 0;
}