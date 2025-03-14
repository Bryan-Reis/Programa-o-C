#include <stdio.h>

int main(){

    char estado[20];
    char codigo[20];
    char nome[20];
    unsigned long int população;
    float area;
    float PIB;
    int Npontosturisticos;
    printf("Carta 1 \n");

    printf("Escreva o nome da cidade\n");
    scanf("%s", &nome);
    printf("Cidade: %s \n", &nome);

    printf("Escolha o estado da carta\n");
    scanf(" %s", &estado);
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
    printf("O PIB por capital é: %.2f \n", PIBCAP);

    float somaA = (float) PIB + PIBCAP + população + area + Npontosturisticos;

    unsigned long int populaçãoA = população;
    float PibA = PIB;
    float AreaA = area;
    int PontosTuristicosA = Npontosturisticos;
    float DensidadeA = densidade;
    float PIBcapitalA = PIBCAP;




    printf("Carta 1 \nNome: %s\nEstado: %c\n", &nome, &estado);
    printf("Codigo %c%s\n", &estado, codigo);
    printf("População: %d\nPib: %.2f\nArea: %.2f\nPontos turisticos: %d\nDensidade: %.2f\nPIB por capital: %.2f\n",população, PIB, area, Npontosturisticos, densidade, PIBCAP);

    float superpoderA = somaA - densidade;
    printf("Os niveis da carta unidos são: %.2f\n", superpoderA);


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


    printf("Carta 2 \nNome: %s\nEstado: %s\n", &nome, &estado);
    printf("Codigo %c%s\n", estado, codigo);
    printf("População: %d\nPib: %.2f\nArea: %.2f\nPontos turisticos: %d\nDensidade: %.2f\nPIB por capital: %.2f\n",população, PIB, area, Npontosturisticos, densidade2, PIBCAP2);
    
    float somaB = (float) PIB + PIBCAP2 + população + area + Npontosturisticos;

    float superpoderB = somaB - densidade2;
    printf("Os niveis da carta unidos são: %.2f\n", superpoderB);


    unsigned long int populaçãoB = população;
    float PibB = PIB;
    float AreaB = area;
    int PontosTuristicosB = Npontosturisticos;
    float DensidadeB = densidade2;
    float PIBcapitalB = PIBCAP2;


    printf("Comparações. Se o resultado for 0, a carta 2 venceu, se for 1, a carta 1 venceu\n");
    printf("População: %d\n", populaçãoA > populaçãoB);
    printf("PIB: %.2ff\n", PibA > PibB);
    printf("Area: %.2f\n", AreaA > AreaB);
    printf("Pontos turisticos: %d\n", PontosTuristicosA > PontosTuristicosB);
    printf("Densidade: %.2f\n", DensidadeA > DensidadeB);
    printf("Pib por capital: %f\n", PibA > PibB);
    printf("Superpoder: %f", superpoderA > superpoderB);


    return 0;


}
