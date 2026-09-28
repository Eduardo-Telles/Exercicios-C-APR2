#include <stdio.h>
int main(){
    int saque=0,n100=0,n50=0,n20=0,n10=0,n5=0,n2=0;
    printf("digite quanto quer sacar: ");
    scanf("%i",&saque);
    if(saque>0){
        while(saque>0){
            if(saque>99){
                saque=saque-100;
                n100++;
            }
            else if(saque>49){
                saque=saque-50;
                n50++;
            }
            else if(saque>19){
                saque=saque-20;
                n20++;
            }
            else if(saque>9){
                saque=saque-10;
                n10++;
            }
            else if(saque==5 || saque==7 || saque==9){
                saque=saque-5;
                n5++;
            }
            else if(saque>1){
                saque=saque-2;
                n2++;
            }
            else{
                printf("Não há mais como subtrair! resto: 1\n");
                saque=0;
            }
        }
    }
    else{
        printf("Não é permitido sacar esse valor!");
    }
    printf("Notas 100: %i\nNotas 50: %i\nNotas 20: %i\nNotas 10: %i\nNotas 5: %i\nNotas 2: %i",n100,n50,n20,n10,n5,n2);
    return 0;
}