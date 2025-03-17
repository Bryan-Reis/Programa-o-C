#include <stdio.h>

int main(){
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
            tabuleiro[5][i] += 3;
        }
//Vertical
        for (int i = 7; i < 10; i++)
        {
            tabuleiro[i][3] += 3;
        }
//Diagonal esquerda para baixo
        for (int i = 0; i < 3; i++)
        {
            tabuleiro[i][i] += 3;
        }

//Diagonal Direita para cima

for (int i = 10; i > 6; i--)
{
    tabuleiro[i][i] += 3;
}

 //Matriz do cone

    int cone[2][2];
    {(4, 4),  
    (4, 4);};
    for(int i; i < 1; i++){
        tabuleiro[i][5] = 4;
        for(int i = 0; i < 3; i++){
            tabuleiro[1][i+4] = 4;
            for(int i = 0; i < 5; i++){
                tabuleiro[2][i+3] = 4;
        }
    }
}

//Matriz da cruz

int cruz[2][2];
    {(5, 5), 
    (5, 5);};
    for (int i = 0; i < 3; i++){
        tabuleiro[3+i][2] = 5;
        for (int i = 0; i < 3; i++){
            tabuleiro[4][1+i] = 5;

    }
}
//matriz octaedro

int octaedro[2][2];{(2, 2), (2, 2);}
    for (int i = 0; i < 1; i++){
        tabuleiro[7][1] = 2;
        for (int i = 0; i < 3; i++){
            tabuleiro[8][0+i] = 2;
            for (int i = 0; i < 1; i++){
                tabuleiro[9][1] = 2;
    }
}
    }
    
//Printar o tabuleiro
       
       for (int i = 0; i < linhas; i++){
        printf("\n ");
        for (int j = 0; j < colunas; j++)
        {
            if (tabuleiro[i][j] != 6)
            {
             printf("%d", tabuleiro[i][j]);   
            }
        else{
            
            printf("Há uma sobreposição \n");
        }
            
        }
       }
       printf("\n");

       
    
       
    return 0;
}
