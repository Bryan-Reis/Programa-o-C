
#include <stdio.h>

int main(){

    char estado;
    char codigo[4];
    char nome;
    int população;
    float area;
    float PIB;
    int Npontosturisticos;
    
    printf("Carta 1 \n");

    printf("Escreva o nome da cidade\n");
    scanf("%s", &nome);
    printf("Cidade: %s \n", &nome);

    printf("Escolha o estado da carta\n");
    scanf(" %c", &estado);
    printf("O estado é: %c \n", estado);

    printf("Insira o código da carta\n");
    scanf("%s", &codigo);
    printf("O código é: %c%s \n", estado, codigo);

    printf("Insira a população da cidade\n");
    scanf("%d", &população);
    printf("A população da cidade é: %d \n", população);

    printf("Insira o PIB da cidade\n");
    scanf("%f", &PIB);
    printf("O PIB da cidade é %.2f \n", PIB);

    printf("Digite a area da cidade ");
    scanf("%f", &area);
    printf("A area da cidade é: %.2f \n", area);

    printf("Digite a quantidade de pontos turisticos ");
    scanf("%d", &Npontosturisticos);
    printf("A quantidade de pontos turisticos é: %d \n", Npontosturisticos);

    float densidade = (float) população / area;
    printf("A densidade populacional é: %.2f \n", densidade);

    float PIBCAP = (float) PIB / população;
    printf("O PIB por capital é: %.2f", PIBCAP);


    printf("Carta 2 \n");

    printf("Escreva o nome da cidade\n");
    scanf("%s", &nome);
    printf("Cidade: %s \n", &nome);

    printf("Escolha o estado da carta\n");
    scanf(" %c", &estado);
    printf("O estado é: %c \n", estado);

    printf("Insira o código da carta\n");
    scanf("%s", &codigo);
    printf("O código é: %c%s \n", estado, codigo);

    printf("Insira a população da cidade\n");
    scanf("%d", &população);
    printf("A população da cidade é: %d \n", população);

    printf("Insira o PIB da cidade\n");
    scanf("%f", &PIB);
    printf("O PIB da cidade é %.2f \n", PIB);

    printf("Digite a area da cidade ");
    scanf("%f", &area);
    printf("A area da cidade é: %.2f \n", area);

    printf("Digite a quantidade de pontos turisticos ");
    scanf("%d", &Npontosturisticos);
    printf("A quantidade de pontos turisticos é: %d \n", Npontosturisticos);

    float densidade2 = (float) população / area;
    printf("A densidade populacional é: %.2f \n", densidade2);

    float PIBCAP2 = (float) PIB / população;
    printf("O PIB por capital é: %.2f\n", PIBCAP2);


    
    return 0;


}
