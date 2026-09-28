#include <stdio.h>
#include <string.h>
void substituir(char str[],char antigo,char novo){
    for(int i=0;str[i]!='\0';i++){
        if (str[i]==antigo){
            str[i]=novo;
        }
    }
    printf("%s",str);
}
void lerString(char str[],int tamanho){
    printf("Digite uma palavra: ");
    fgets(str,tamanho,stdin);
    str[strcspn(str, "\n")] = '\0';
}
int main(){
    char str[30];
    int tamanho=30;
    lerString(str,tamanho);
    char antigo;
    char novo;
    printf("Digite um caractere para trocar: ");
    scanf(" %c",&antigo);
    printf("Digite por qual quer trocar: ");
    scanf(" %c",&novo);
    substituir(str,antigo,novo);
    return 0;
}