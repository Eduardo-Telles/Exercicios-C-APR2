#include <stdio.h>
int main(){
    float tamanho_ze=110,tamanho_chico=150,anos=0;
    for(anos;tamanho_chico>=tamanho_ze;anos++){
        tamanho_ze+=3;
        tamanho_chico+=2;
    }
    printf("Será necessario: %.0f anos",anos);
    return 0;
}