#include <stdio.h>

//recursividade Cavalo

 void movimentocavalo(int num){

     while (num < 2)
    {
        for (int i = 1; i <= 2; i++)
        {
            printf("Cima\n");
            continue;
        }
        printf("Direita\n");    
        num++;
        break;
    }

    }
//Recursividade para o movimento do Bispo, externo vertircal e interno horizontal

void movimentobispo(int num){

    while (num <= 5)
    {
        for (int i = 1; i <= 1; i++)
        {
            printf("Direita  ");
        }
       printf("Cima\n"); 
       num ++;
    }
    
    
    


}
//Recursividade para o movimento da rainha
void movimentorainha(int num){

    while(num <= 8)
    {
        
        printf("Esquerda\n");
        num++;
    }

}
//Recursividade para o movimento da torre
void movimentoTorre(int num){

    for (num; num <= 5; num++)
    {
        printf("Direita\n");
    }

}

int main(){

    int torre = 1;
    int bispo = 1;
    int rainha = 1;
    int cavalo = 1;

    // Torre, movimento de 5 casas para a direita.
    printf("Torre\n");
    movimentoTorre(torre);
    printf("\n");

    // Rainha movimento de 8 casas a esquerda.
    printf("Rainha\n");
    movimentorainha(rainha);
    printf("\n");

    //Bispo movimento de 5 casas na diaonal superior direita
    printf("Bispo\n");
    movimentobispo(bispo);
    printf("\n");

    // Cavalo movimento em "L", duas casas para cima e uma para a direita
    printf("Cavalo\n");
    movimentocavalo(cavalo);
    printf("\n");
    
    
    

return 0;
}
