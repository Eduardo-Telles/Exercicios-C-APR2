#include <stdio.h>
#include <string.h>
#define tam 5
int main(){
    typedef struct{
        float salario;
        char sexo[30];
        int idade;
        int numFilhos;
    }habitantes;
    habitantes habitante[tam];
    for(int i=0;i<tam;i++){
        printf("Digite o salario do habitante %i: ",i+1);
        scanf("%f",&habitante[i].salario);
        while(getchar()!='\n' && getchar()!=EOF);
        printf("Digite o sexo do habitante %i: ",i+1);
        fgets(habitante[i].sexo,sizeof(habitante[i].sexo),stdin);
        habitante[i].sexo[strcspn(habitante[i].sexo,"\n")]=0;
        printf("Digite a idade do habitante %i: ",i+1);
        scanf("%i",&habitante[i].idade);
        while(getchar()!='\n' && getchar()!=EOF);
        printf("Digite o número de filhos do habitante %i: ",i+1);
        scanf("%i",&habitante[i].numFilhos);
        while(getchar()!='\n' && getchar()!=EOF);
    }
    float media_salarios=0;
    float media_filhos=0;
    float maior_salario=0;
    float menor_salario=habitante[0].salario;
    float percentual_mulheres_sal_sup_doismil=0;
    for(int i=0;i<tam;i++){
        media_salarios=media_salarios+habitante[i].salario;
        media_filhos=media_filhos+habitante[i].numFilhos;
        if(maior_salario<habitante[i].salario){
            maior_salario=habitante[i].salario;
        }
        if(menor_salario>habitante[i].salario){
            menor_salario=habitante[i].salario;
        }
        if(habitante[i].salario>2000){
            if(strcmp(habitante[i].sexo,"mulher")==0 || strcmp(habitante[i].sexo,"m")==0 || strcmp(habitante[i].sexo,"M")==0 || strcmp(habitante[i].sexo,"Mulher")==0){
                percentual_mulheres_sal_sup_doismil++;
            }
        }
    }
    media_salarios=media_salarios/tam;
    media_filhos=media_filhos/tam;
    percentual_mulheres_sal_sup_doismil=(percentual_mulheres_sal_sup_doismil/5)*100;
    printf("A média salarial é de: %f\n",media_salarios);
    printf("A média de filhos é de: %f\n",media_filhos);
    printf("O maior salario é de: %f\n",maior_salario);
    printf("O menor salario é de: %f\n",menor_salario);
    printf("O percentual de mulheres com salários superiores a 2000 é: %f%%\n",percentual_mulheres_sal_sup_doismil);

    return 0;
}