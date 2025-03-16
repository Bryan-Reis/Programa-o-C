#include <stdio.h>

int main(){


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

//Printar o tabuleiro
    tabuleiro[5][2] = navioH;
    tabuleiro[5][3] = navioH;
    tabuleiro[5][4] = navioH;

    tabuleiro[6][7] = navioV;
    tabuleiro[7][7] = navioV;
    tabuleiro[8][7] = navioV;



       int x = 0;
       int y = 0;
       
       for (x = 0; x < linhas; x++){
        printf("\n ");
        for (y = 0; y < colunas; y++)
        {
            printf("%d", tabuleiro[x][y]);
        }
        
       }
    
       

}
