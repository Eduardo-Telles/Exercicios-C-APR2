#include <stdio.h>
#include <string.h>
int fatorial(int numero_inteiro){
    int fat=1;
    for(int i=numero_inteiro;i>0;i--){
        fat=fat*i;
    }
    return fat;
}
int main(){
    int num_inteiro=0;
    printf("Digite um núemro inteiro para descobrir seu fatorial: ");
    scanf("%i",&num_inteiro);
    int fat=fatorial(num_inteiro);
    printf("%i",fat);
    return 0;
}