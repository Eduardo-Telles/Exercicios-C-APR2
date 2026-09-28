#include <stdio.h>
int main(){
    int dia=0,temp=0,maior_temp=0,menor_temp=0;
    float media_temp=0;
    do
    {
        float temp=0;
        printf("Digite a temperatura do dia: ");
        scanf("%d",&temp);
        media_temp+=temp;
        if (dia == 0) {
            maior_temp = temp;
            menor_temp = temp;
        }
        if (maior_temp<temp){
            maior_temp=temp;
        }
        if(menor_temp>temp){
            menor_temp=temp;
        }
        dia++;
    } while (dia<7);
    media_temp=media_temp/7.0;
    printf("A temperatura média foi de:%f\nA temperatura mais alta foi:%f\nA temperatura mais baixa foi de:%f\n",media_temp,maior_temp,menor_temp);
}