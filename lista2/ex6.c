#include <stdio.h>
int main(){
    int n100,n50,n20,n10,n5,n2,valor;
    printf("Digite um valor: ");
    scanf("%i",&valor);
    n100=valor/100;
    valor=valor%100;
    n50=valor/50;
    valor=valor%50;
    n20=valor/20;
    valor=valor%20;
    n10=valor/10;
    valor=valor%10;
    n5=valor/5;
    valor=valor%5;
    n2=valor/2;
    valor=valor%2;
    printf("Notas 100:%i\nNotas 50:%i\nNotas 20:%i\nNotas 10:%i\nNotas 5:%i\nNotas 2:%i\nResto:%i",n100,n50,n20,n10,n5,n2,valor);
    return 0;
}