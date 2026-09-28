#include <stdio.h>
#include <string.h>
int main(){
    char array[10][30];
    int i=0;
    int x=0;
    do
    {
        char nome[30];
        printf("Digite um nome: ");
        fgets(nome,sizeof(nome),stdin);
        setbuf(stdin,NULL);
        int tam1=0;
        for(int i=0;nome[i]!='\0';i++){
            tam1++;
        }
        // o j<=tam1 é para pegar tambem o '\0' assim permitindo que seja uma string completa!
        for(int j=0;j<=tam1;j++){
            array[x][j]=nome[j];
        }
        x++;
        i++;
    } while (i<10);
    for(int i=0;i<10;i++){
        printf("%s",array[i]);
    }
    int cont=0;
    while(cont==0){
    printf("Digite 0 para continuar ou 1 para sair: ");
    scanf("%i",&cont);
    setbuf(stdin,NULL);
    char nome[30];
    if(cont==0){
        printf("Procure em nosso banco de dados um nome: ");
        fgets(nome,sizeof(nome),stdin);
        setbuf(stdin,NULL);
        int var=0;
        for(int i=0;i<10;i++){
            if(strcmp(array[i],nome)==0){
                printf("Está no nosos banco! na posição %i \n",i+1);
                var=1;
            }
        }
        if(var==0){
            printf("Não está no nosso banco de dados!");
        }
    }
    }
    return 0;
}