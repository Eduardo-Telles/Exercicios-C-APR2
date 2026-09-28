#include <stdio.h>
#include <ctype.h>
int main(){
    char str[30];
    printf("Digite uma string: ");
    fgets(str,sizeof(str),stdin);
    setbuf(stdin,NULL);
    int tam=0;
    for(int i=0;str[i]!='\0';i++){
        tam++;
    }
    int achou=0;
    tam=tam-2;
    for(int i=0;i<tam/2;i++){
        if(tolower(str[i])!=tolower(str[tam-i])){
            achou=1;
        }
    }
    if(achou==0){
        printf("É palindromo!");
    }
    else{
            printf("Não é palindromo");
    }
}   