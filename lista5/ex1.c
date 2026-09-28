#include <stdio.h>
int main(){
    char str[30];
    printf("Digite uma string para saber quantos caracteres ela tem!");
    fgets(str,sizeof(str),stdin);
    setbuf(stdin,NULL);
    int tam=0;
    for(int i=0;str[i]!='\0';i++){
        tam++;
    }
    printf("A quantidade de caracteres é: %i",tam-1);
}