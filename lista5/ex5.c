#include <stdio.h>
#include <ctype.h>
int main(){
    char str[30];
    char caracter;
    printf("Digite uma string: ");
    fgets(str,sizeof(str),stdin);
    setbuf(stdin,NULL);
    printf("Digite um caracter para muda-lo para *: ");
    scanf("%c",&caracter);
    int tam=0;
    for(int i=0;str[i]!='\0';i++){
        tam++;
    }
    for(int i=0;i<tam;i++){
        if(str[i]==caracter){
            str[i]='*';
        }
    }
    for(int i=0;i<tam;i++){
        printf("%c",str[i]);
    }
    return 0;
}