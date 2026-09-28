#include <stdio.h>

int main() {
    int dividendo, divisor;

    printf("Digite o dividendo: ");
    scanf("%d", &dividendo);

    printf("Digite o divisor: ");
    scanf("%d", &divisor);
    if (divisor == 0) {
        printf("Erro: divisor nao pode ser zero.\n");
        return 1;
    }

    float resultado = (float)dividendo / divisor;

    printf("O resultado e %.2f\n", resultado);

    return 0;
}