#include <stdio.h>
#include <string.h>
void retangulo(int largura,int altura,char simbolo){
    for(int i=0;i<altura;i++){
        printf("\n");
        for(int j=0;j<largura;j++){
            printf("%c",simbolo);
        }
    }
}
int main(){
    int largura=0;
    int altura=0;
    char simbolo;
    printf("Digite a largura do retângulo: ");
    scanf("%i",&largura);
    while(getchar()!='\n' && getchar()!=EOF);
    printf("Digite a altura do retângulo: ");
    scanf("%i",&altura);
    while(getchar()!='\n' && getchar()!=EOF);
    printf("Digite o simbolo que usará: ");
    scanf("%c",&simbolo);
    retangulo(largura,altura,simbolo);
    return 0;
}