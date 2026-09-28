#include <stdio.h>
#include <string.h>
typedef struct {
    char nome[30];
    float peso;
    float altura;
    float imc;
} Pacientes;
float calcularIMC(Pacientes paciente) {
    float imc = 0;
    imc = paciente.peso / (paciente.altura * paciente.altura);
    return imc;
}
float mediadosImcs(Pacientes vetor[], int qtd) {
    float imcs = 0;
    for (int i = 0; i < qtd; i++) {
        imcs = imcs + vetor[i].imc;
    }
    return imcs / qtd;
}
void criaPaciente(Pacientes vetor[], int qtd) {
    for (int i = 0; i < qtd; i++) {
        printf("Digite o nome do paciente: ");
        fgets(vetor[i].nome,sizeof(vetor[i].nome),stdin);
        vetor[i].nome[strcspn(vetor[i].nome, "\n")] = 0;
        printf("Digite o peso do paciente: ");
        scanf("%f", &vetor[i].peso);
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
        printf("Digite a altura do paciente: ");
        scanf("%f", &vetor[i].altura);
        while ((c = getchar()) != '\n' && c != EOF);
        vetor[i].imc=calcularIMC(vetor[i]);
    }
}
void localizareverificarImc(Pacientes vetor[], int qtd, char palavra[30]) {
    float medioImcs = mediadosImcs(vetor, qtd);

    for (int i = 0; i < qtd; i++) {
        if (strcmp(palavra, vetor[i].nome) == 0) {
            if (vetor[i].imc >= medioImcs) {
                printf("nome: %s\n", vetor[i].nome);
                printf("Peso: %f\n", vetor[i].peso);
                printf("Altura: %f\n", vetor[i].altura);
                printf("Imc: %f\n", vetor[i].imc);
            }
        }
    }
}
int main(){
    int qntd=0;
    printf("Digite a quantidade de pacientes que irão ser colocados: ");
    scanf("%i",&qntd);
    int c;
    while((c=getchar())!='\n' && c!=EOF);
    Pacientes vetor[qntd];
    criaPaciente(vetor,qntd);
    float media=mediadosImcs(vetor,qntd);
    printf("Media dos imcs: %f\n",media);
    char palavra[30];
    printf("Digite o nome de alguem para buscar: ");
    fgets(palavra,sizeof(palavra),stdin);
    palavra[strcspn(palavra,"\n")]=0;
    localizareverificarImc(vetor,qntd,palavra);
    return 0;
}