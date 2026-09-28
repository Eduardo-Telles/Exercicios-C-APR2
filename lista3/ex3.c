#include <stdio.h>
int main(){
    int a,b,c;
    printf("Digite o valor do lado A: ");
    scanf("%i",&a);
    printf("Digite o valor do lado B: ");
    scanf("%i",&b);
    printf("Digite o valor do lado C: ");
    scanf("%i",&c);
    if (a+b>c && a+c>b && b+c>a){
        if(a!=b && b!=c && c!=a){
            printf("Escaleno!");
        }
        else if(a==b && b==c){
            printf("Equilátero");
        }
        else{
            printf("Isóceles");
        }
    }
    else{
        printf("Não é triangulo!");
    }
    return 0;
}