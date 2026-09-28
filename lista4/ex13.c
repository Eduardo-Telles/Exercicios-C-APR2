#include <stdio.h>
int main(){
    char tabuleiro[3][3];
    for(int l=0;l<3;l++){
        for(int c=0;c<3;c++){
            tabuleiro[l][c]=' ';
        }
    }
    int lin=0,col=0,acabou=0,jogador=1;
        while(acabou==0){
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    printf("%c ",tabuleiro[i][j]);
                }
                printf("\n");
            }
            printf("Digite a linha que você deseja jogar: ");
            scanf("%i",&lin);
            printf("Digite a coluna que você deseja jogar: ");
            scanf("%i",&col);
            if(lin<3 && lin>=0 && col<3 && col>=0){
                if(tabuleiro[lin][col]==' '){
                    if(jogador%2!=0){
                        tabuleiro[lin][col]='X';
                        jogador++;
                    }
                    else{
                        tabuleiro[lin][col]='O';
                        jogador++;
                    }
                    int atual=0;
                    for(int lin=0;lin<3;lin++){
                        for(int col=0;col<3;col++){
                            if(col==0){
                                atual=tabuleiro[lin][col];
                            }
                            else if(atual!=tabuleiro[lin][col]){
                                break;
                            }
                            else if(atual==tabuleiro[lin][col] && col==2 && tabuleiro[lin][col]!=' '){
                                if(jogador%2==0){
                                    printf("Você Ganhou! jogador: X!");
                                }
                                else{
                                    printf("Você Ganhou! jogador: O!");
                                }
                                acabou=1;
                            }
                        }
                    }
                    if(acabou==0){
                        atual=0;
                        for(int c=0;c<3;c++){
                            for(int l=0;l<3;l++){
                                if(l==0){
                                    atual=tabuleiro[l][c];
                                }
                                else if(atual!=tabuleiro[l][c]){
                                    break;
                                }
                                else if(atual==tabuleiro[l][c] && l==2 && tabuleiro[l][c]!=' '){
                                    if(jogador%2==0){
                                        printf("Você Ganhou! jogador: X!");
                                    }
                                    else{
                                        printf("Você Ganhou! jogador: O!");
                                    }
                                    acabou=1;
                                }
                            }
                        }
                        if(acabou==0){
                            atual=0;
                            for(int i=0;i<3;i++){
                                if(i==0){
                                    atual=tabuleiro[i][i];
                                }
                                else if(atual!=tabuleiro[i][i]){
                                    break;
                                }
                                else if(atual==tabuleiro[i][i] && i==2 && tabuleiro[i][i]!=' '){
                                    if(jogador%2==0){
                                        printf("Você Ganhou! jogador: X!");
                                    }
                                    else{
                                        printf("Você Ganhou! jogador: O!");
                                    }
                                    acabou=1;
                                }
                            }
                            if(acabou==0){
                                atual=0;
                                for(int i=2;i>=0;i--){
                                    if(i==2){
                                        atual=tabuleiro[i][2-i];
                                    }
                                    else if(atual!=tabuleiro[i][2-i]){
                                        break;
                                    }
                                    else if(atual==tabuleiro[i][2-i] && i==0 && tabuleiro[i][2-i]!=' '){
                                        if(jogador%2==0){
                                            printf("Você Ganhou! jogador: X!");
                                        }
                                        else{
                                            printf("Você Ganhou! jogador: O!");
                                        }
                                        acabou=1;
                                    }
                                }
                                if(acabou==0 && jogador==10){
                                    printf("Empate!");
                                    acabou=1;
                                }
                            }
                        }
                    }
                }
            }
        }
}