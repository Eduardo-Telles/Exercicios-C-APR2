#include <stdio.h>
#include <ctype.h>
int main(){
    char str[30];
    printf("Digite uma string");
    fgets(str,sizeof(str),stdin);
    setbuf(stdin,NULL);
    int vogais=0;
    for(int i=0;str[i]!='\0';i++){
        if(toupper(str[i])=='A' || toupper(str[i])=='E'||toupper(str[i])=='I'||toupper(str[i])=='O'||toupper(str[i])=='U'){
            vogais++;
        }
    }
    printf("Na String há %i vogais",vogais);
    return 0;
}