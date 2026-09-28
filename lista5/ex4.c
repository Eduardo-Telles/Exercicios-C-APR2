#include <stdio.h>
#include <ctype.h>
int main(){
    int certo=0;
    char nome_usuario[30];
    do
    {
        printf("Digite um nome de usuário sem espaços deve começar com uma letra e tenha entre 5 e 15 caracteres!: ");
        fgets(nome_usuario,sizeof(nome_usuario),stdin);
        setbuf(stdin,NULL);
        int qntdCaracteres=0;
        int tem_espaço=0;
        int n_cmc_c_letra=0;
        for(int i=0;nome_usuario[i]!='\0';i++){
            if(isalpha(nome_usuario[0])){
                n_cmc_c_letra=1;
            }
            if(nome_usuario[i]==' '){
                tem_espaço=1;
            }
            qntdCaracteres++;
        }
        if(tem_espaço==0){
            if(n_cmc_c_letra==1){
                if(qntdCaracteres-1>=5 && qntdCaracteres-1<=15){
                    certo=1;
                }
            }
        }
        
    } while (certo==0);
    printf("%s",nome_usuario);
    return 0;
}