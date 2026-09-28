#include <stdio.h>
int main(){
    printf("Digite a nota final obtida pelo aluno: ");
    int nota=0;
    scanf("%i",&nota);
    setbuf(stdin,NULL);
    printf("Digite o nome completo desse aluno: ");
    char nome[30];
    fgets(nome,sizeof(nome),stdin);
    setbuf(stdin,NULL);
    int tam=0;
    for(int i=0;nome[i]!='\0';i++){
        tam++;
    }
    tam=tam-1;
    printf("%i\n",nota);
    for(int i=0;i<tam;i++){
        printf("%c",nome[i]);
    }
    return 0;
}