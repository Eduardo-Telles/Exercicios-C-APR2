#include <stdio.h>
#include <string.h>
int main(){
    char str[30];
    printf("Digite uma string para inverte-la: ");
    fgets(str,sizeof(str),stdin);
    setbuf(stdin,NULL);
    int tam=0;
    for(int i=0;str[i]!='\0';i++){
        tam++;
    }
    tam=tam-2;
    char guarda=' ';
    for(int i=0;i<tam/2;i++){
        guarda=str[i];
        str[i]=str[tam-i];
        str[tam-i]=guarda;
    }
    printf("%s",str);
    return 0;
}