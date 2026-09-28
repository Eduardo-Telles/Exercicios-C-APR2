#include <stdio.h>
int main(){
    int qntd=0;
    printf("Digite a quantidade de números que quer da sequencia de fibonacci: ");
    scanf("%i",&qntd);
    int anterior=0;
    int atual=0;
    int posterior=1;
    for(int i=0;i<qntd;i++){
        printf("%i ",atual);
        atual=posterior;
        posterior=anterior+posterior;
        anterior=atual;
    }
    return 0;
}