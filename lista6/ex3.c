#include <stdio.h>
#include <string.h>
#define tam 5
int main(){
    typedef struct
    {
        char prontuario[30];
        char nome[30];
        float notas[3];

    }Aluno;
    Aluno alunos[tam];
    for(int i=0;i<tam;i++){
        printf("Digite o prontuário do aluno %i: ",i+1);
        fgets(alunos[i].prontuario,sizeof(alunos[i].prontuario),stdin);
        alunos[i].prontuario[strcspn(alunos[i].prontuario,"\n")]=0;
        printf("Digite um nome para o aluno %i: ",i+1);
        fgets(alunos[i].nome,sizeof(alunos[i].nome),stdin);
        alunos[i].nome[strcspn(alunos[i].nome,"\n")]=0;
        for(int j=0;j<3;j++){
            printf("Digite as notas do aluno %i: ",i+1);
            scanf("%f",&alunos[i].notas[j]);
            while(getchar()!='\n' && getchar()!=EOF);
        }
            float media=0;
            for(int j=0;j<3;j++){
                media=media+alunos[i].notas[j];
            }
            media=media/3;
            if(media>=6){
                printf("O alunos %i foi APROVADO! \n",i+1);
            }
            else if(media<4){
                printf("o aluno %i foi REPROVADO! \n",i+1);
            }
            else{
                printf("O aluno %i esta de IFA! \n",i+1);
            }
        }
}