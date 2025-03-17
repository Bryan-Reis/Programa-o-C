#include <stdio.h>

int main(){
    int navioD2 = 3;
    int navioD1 = 3;
    int navioH = 3;
    int navioV = 3;
    int linhas = 10;
    int colunas = 10;
    // Tabuleiro da batalha naval
    unsigned int tabuleiro [10] [10] = {
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}};

//Definir as posições
//Horizontal
        for (int i = 5; i < 8; i++)
        {
            tabuleiro[5][i] = 3;
        }
//Vertical
        for (int i = 7; i < 10; i++)
        {
            tabuleiro[i][3] = 3;
        }
//Diagonal esquerda para baixo
        for (int i = 0; i < 3; i++)
        {
            tabuleiro[i][i] = 3;
        }

//Diagonal Direita para cima

for (int i = 10; i > 6; i--)
{
    tabuleiro[i][i] = 3;
}
        
    
//Printar o tabuleiro
       
       for (int i = 0; i < linhas; i++){
        printf("\n ");
        for (int j = 0; j < colunas; j++)
        {
            printf("%d", tabuleiro[i][j]);
        }
       }
       printf("\n");

       
    
       
    return 0;
}
