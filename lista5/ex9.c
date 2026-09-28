#include <stdio.h>
#include <string.h>
int main(){
    char array[10][35];
    int i=0;
    do{
        printf("Digite uma cidade para alocar no array: ");
        fgets(array[i],sizeof(array[i]),stdin);
        i++;
    }while(i<10);
    printf("Digite um prefixo para pesquisar se existem cidades com ele: ");
    char prefixo[5];
    fgets(prefixo,sizeof(prefixo),stdin);
    prefixo[strcspn(prefixo,"\n")]='\0';
    int tam=strlen(prefixo);
    for(int i=0;i<10;i++){
        for(int j=0;j<tam;j++){
            if(prefixo[j]!=array[i][j]){
                break;
            }
            else if(j==tam-1){
                printf("%s",array[i]);
            }
        }
    }
    return 0;
}