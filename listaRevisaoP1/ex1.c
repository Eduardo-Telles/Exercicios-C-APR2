#include <stdio.h>
#include <string.h>
#include <ctype.h>
void ler(char frase[201],int tamanho){
    printf("Digite uma frase que contenha no máximo 200 caracteres: ");
    fgets(frase,tamanho,stdin);
    frase[strcspn
    (frase,"\n")]=0;
}
int ContarVogaiseRetornar(char frase[]){
    int contador=0;
    for(int i=0;frase[i]!='\0';i++){
        frase[i]=tolower(frase[i]);
    }
    for(int i=0;frase[i]!='\0';i++){
        if(frase[i]=='a'||frase[i]=='e'||frase[i]=='i'||frase[i]=='o'||frase[i]=='u'){
            contador++;
        }
    }
    return contador;
}
int ContarPalavraseRetornar(char frase[]){
    int contador=0;
    for(int i=0;frase[i]!='\0';i++){
        if(frase[i]==' '){
            contador++;
        }
        else if(i==0){
            contador++;
        }
    }
    return contador;
}
char VerifPalindromo(char frase[]){
    for(int i=0;frase[i]!='\0';i++){
        frase[i]=tolower(frase[i]);
    }
    for(int i=0;frase[i]!='\0';i++){
        if(frase[i]==' '){
            for(int j=i;frase[j]!='\0';j++){
                frase[j]=frase[j+1];
            }
            i--;
        }
    }
    printf("%s\n",frase);
    int tam=strlen(frase);
    for(int i=0;i<tam/2;i++){
        if(frase[i]!=frase[tam-1-i]){
            return 'F';
        }
    }
    return 'T';
}
int main(){
    char frase[201];
    ler(frase,sizeof(frase));
    printf("%s\n",frase);
    int QntdVogais=ContarVogaiseRetornar(frase);
    printf("%i\n",QntdVogais);
    int QntdPalavras=ContarPalavraseRetornar(frase);
    printf("%i\n",QntdPalavras);
    char palindromo=VerifPalindromo(frase);
    if(palindromo=='T'){
        printf("É palindromo!");
    }
    else{
        printf("Não é Palindromo!");
    }
}