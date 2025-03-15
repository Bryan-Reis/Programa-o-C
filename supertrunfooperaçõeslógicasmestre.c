#include <stdio.h>

int main(){

    int resultado1, resultado2;
    int escolha;
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
    printf("O estado é: %s \n", &estado);

    printf("Insira o código da carta\n");
    scanf("%s", &codigo);
    printf("O código é: %s%s \n", &estado, codigo);

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




    printf("Carta 1 \nNome: %s\nEstado: %s\n", &nome, &estado);
    printf("Codigo %s%s\n", &estado, codigo);
    printf("População: %d\nPib: %.2f\nArea: %.2f\nPontos turisticos: %d\nDensidade: %.2f\nPIB por capital: %.2f\n",população, PIB, area, Npontosturisticos, densidade, PIBCAP);

    float superpoderA = somaA - densidade;
    printf("Os niveis da carta unidos são: %.2f\n", superpoderA);


    printf("Carta 2 \n");

    printf("Escreva o nome da cidade\n");
    scanf("%s", &nome);
    printf("Cidade: %s \n", &nome);

    printf("Escolha o estado da carta\n");
    scanf(" %s", &estado);
    printf("O estado é: %s \n", &estado);

    printf("Insira o código da carta\n");
    scanf("%s", &codigo);
    printf("O código é: %s%s \n", &estado, codigo);

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
    printf("Codigo %s%s\n", &estado, codigo);
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
    
    printf("Escolha um parãmetro para comparar.");
    printf("1. População\n");
    printf("2. PIB\n");
    printf("3. Area\n");
    printf("4. Pontos turisticos\n");
    printf("5. Densidade\n");
    printf("6. PIB por capital\n");
    printf("7. Superpoder\n");
    scanf("%d", &escolha);
    switch (escolha)
    {
    case 1:
        printf("Carta 1 população: %d\n", populaçãoA);
        printf("Carta 2 população: %d\n", populaçãoB);

        if (populaçãoA > populaçãoB){
            printf("Carta 1 venceu\n");
        }
        else if (populaçãoA == populaçãoB)
        {
            printf("Empate");
        }
        
        else{
            printf("Carta 2 venceu\n");
        }
        break;
    case 2:
        printf("Carta 1 PIB: %.2f\n", PibA);
        printf("Carta 2 PIB: %.2f\n", PibB);

        if (PibA > PibB){
        printf("Carta 1 venceu\n");
        }
        else if (PibA == PibB)
        {
            printf("Empate");
        }
        else{
        printf("Carta 2 venceu\n");
        }
        break;
    case 3:
        printf("Carta 1 Area: %.2f\n", AreaA);
        printf("Carta 2 Area: %.2f\n", AreaB);

        if (AreaA > AreaB){
        printf("Carta 1 venceu\n");
        }
        else if (AreaA == AreaB)
        {
            printf("Empate");
        }
        else{
        printf("Carta 2 venceu\n");
        }
        break;
    case 4:
        printf("Carta 1 Pontos turisticos: %d\n", PontosTuristicosA);
        printf("Carta 2 Pontos turisticos: %d\n", PontosTuristicosB); 
    
        if (PontosTuristicosA > PontosTuristicosB){
        printf("Carta 1 venceu\n");
        }
        else if (PontosTuristicosA == PontosTuristicosB)
        {
            printf("Empate");
        }
        else{
        printf("Carta 2 venceu\n");
        }
        break;
    case 5:
        printf("Carta 1 Densidade: %.2f\n", DensidadeA);
        printf("Carta 2 Densidade: %.2f\n", DensidadeB); 

        if (DensidadeA < DensidadeB){
        printf("Carta 1 venceu\n");
        }
        else if (DensidadeA == DensidadeB)
        {
            printf("Empate");
        }
        else{
        printf("Carta 2 venceu\n");}
        break;
    case 6:
        printf("Carta 1 Pib por capital: %.2f\n", PIBcapitalA);
        printf("Carta 2 Pib por capital: %.2f\n", PIBcapitalB); 

        if (PIBcapitalA > PIBcapitalB){
            printf("Carta 1 venceu\n");
        }
        else if (PIBcapitalA == PIBcapitalB)
        {
            printf("Empate");
        }
        else{
            printf("Carta 2 venceu\n");}
        break;
    case 7:
        printf("Carta 1 superpoder: %.2f\n", superpoderA);
        printf("Carta 2 superpoder: %.2f\n", superpoderB);

        if (superpoderA > superpoderB){
        printf("Carta 1 venceu\n");
        }
        else if (superpoderA == superpoderB)
        {
            printf("Empate");
        }
        else{
        printf("Carta 2 venceu\n");}
        break;
    }

    printf("Escolha um segundo parãmetro para comparar.");
    printf("1. População\n");
    printf("2. PIB\n");
    printf("3. Area\n");
    printf("4. Pontos turisticos\n");
    printf("5. Densidade\n");
    printf("6. PIB por capital\n");
    printf("7. Superpoder\n");
    scanf("%d", &resultado1);
    if (escolha == resultado1)
    {
        printf("Voce escolheu o mesmo parametro\n");
    }
    else{

    
    
    switch (resultado1)
    
    {
    case 1:
        printf("Carta 1 população: %d\n", populaçãoA);
        printf("Carta 2 população: %d\n", populaçãoB);

        if (populaçãoA > populaçãoB){
            printf("Carta 1 venceu\n");
        }
        else if (populaçãoA == populaçãoB)
        {
            printf("Empate");
        }
        
        else{
            printf("Carta 2 venceu\n");
        }
        break;
    case 2:
        printf("Carta 1 PIB: %.2f\n", PibA);
        printf("Carta 2 PIB: %.2f\n", PibB);

        if (PibA > PibB){
        printf("Carta 1 venceu\n");
        }
        else if (PibA == PibB)
        {
            printf("Empate");
        }
        else{
        printf("Carta 2 venceu\n");
        }
        break;
    case 3:
        printf("Carta 1 Area: %.2f\n", AreaA);
        printf("Carta 2 Area: %.2f\n", AreaB);

        if (AreaA > AreaB){
        printf("Carta 1 venceu\n");
        }
        else if (AreaA == AreaB)
        {
            printf("Empate");
        }
        else{
        printf("Carta 2 venceu\n");
        }
        break;
    case 4:
        printf("Carta 1 Pontos turisticos: %d\n", PontosTuristicosA);
        printf("Carta 2 Pontos turisticos: %d\n", PontosTuristicosB); 
    
        if (PontosTuristicosA > PontosTuristicosB){
        printf("Carta 1 venceu\n");
        }
        else if (PontosTuristicosA == PontosTuristicosB)
        {
            printf("Empate");
        }
        else{
        printf("Carta 2 venceu\n");
        }
        break;
    case 5:
        printf("Carta 1 Densidade: %.2f\n", DensidadeA);
        printf("Carta 2 Densidade: %.2f\n", DensidadeB); 

        if (DensidadeA < DensidadeB){
        printf("Carta 1 venceu\n");
        }
        else if (DensidadeA == DensidadeB)
        {
            printf("Empate");
        }
        else{
        printf("Carta 2 venceu\n");}
        break;
    case 6:
        printf("Carta 1 Pib por capital: %.2f\n", PIBcapitalA);
        printf("Carta 2 Pib por capital: %.2f\n", PIBcapitalB); 

        if (PIBcapitalA > PIBcapitalB){
            printf("Carta 1 venceu\n");
        }
        else if (PIBcapitalA == PIBcapitalB)
        {
            printf("Empate");
        }
        else{
            printf("Carta 2 venceu\n");}
        break;
    case 7:
        printf("Carta 1 superpoder: %.2f\n", superpoderA);
        printf("Carta 2 superpoder: %.2f\n", superpoderB);

        if (superpoderA > superpoderB){
        printf("Carta 1 venceu\n");
        }
        else if (superpoderA == superpoderB)
        {
            printf("Empate");
        }
        else{
        printf("Carta 2 venceu\n");}
        break;
    }}
    
    


    return 0;


}
