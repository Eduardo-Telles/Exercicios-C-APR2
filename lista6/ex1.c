#include <stdio.h>
#include <string.h>
int main(){
    typedef struct
    {
     char placa[9];
     char marca[30];
     char modelo[30];
     int anoFabricacao;   
    }Carro;
    Carro carro1;
    printf("Digite a placa do carro: ");
    fgets(carro1.placa,sizeof(carro1.placa),stdin);
    carro1.placa[strcspn(carro1.placa,"\n")]=0;
    printf("Digite a marca do carro: ");
    fgets(carro1.marca,sizeof(carro1.marca),stdin);
    carro1.marca[strcspn(carro1.marca,"\n")]=0;
    printf("Digite o modelo do carro: ");
    fgets(carro1.modelo,sizeof(carro1.modelo),stdin);
    carro1.modelo[strcspn(carro1.modelo,"\n")]=0;
    printf("Digite o ano de fabricação do carro: ");
    scanf("%i",&carro1.anoFabricacao);
    printf("%s\n",carro1.placa);
    printf("%s\n",carro1.modelo);
    printf("%s\n",carro1.marca);
    printf("%i\n",carro1.anoFabricacao);
    return 0;
}