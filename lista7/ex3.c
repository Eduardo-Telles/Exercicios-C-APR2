#include <stdio.h>
void mostrar_cpf(char cpf[12]){
    printf("%.3s.%.3s.%.3s-%.2s",cpf,cpf+3,cpf+6,cpf+9);
}
int main(){
    char cpf[12];
    printf("Digite o Cpf: ");
    fgets(cpf,sizeof(cpf),stdin);
    mostrar_cpf(cpf);
}