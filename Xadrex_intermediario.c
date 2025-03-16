#include <stdio.h>

int main(){

    int torre = 1;
    int bispo = 1;
    int rainha = 1;
    int cavalo = 1;

    // Torre, movimento de 5 casas para a direita.
    printf("Torre\n");
    for (torre; torre <= 5; torre++)
    {
        printf("Direita\n");
    }

    // Rainha movimento de 8 casas a esquerda.
    printf("Rainha\n");
    while(rainha <= 8)
    {
        
        printf("Esquerda\n");
        rainha ++;
    }

    //Bispo movimento de 5 casas na diaonal superior direita
    printf("Bispo\n");
    do
    {
        printf("Cima, Direita\n");
        bispo ++;
    } while (bispo <= 5);
    
    // Cavalo movimento em "L", duas casas para baixo e uma para a esquerda
    printf("Cavalo\n");
    while (cavalo < 2)
    {
        for (int i = 1; i <= 2; i++)
        {
            printf("Baixo\n");
        }
        printf("Esquerda\n");    
        cavalo++;
    }
    
    

return 0;
}
