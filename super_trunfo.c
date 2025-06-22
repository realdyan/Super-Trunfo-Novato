#include <stdio.h>

int main(){
    // Variáveis da Carta 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Variáveis da Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Novas Variaveis Densidade Populacional e PIB per Capita
    float densidade1, densidade2;
    float pibP1, pibP2;

    // Leitura dos dados da Carta 1
    printf("Cadastro da Carta 1:\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);

    getchar(); // Limpa o '\n' deixado no buffer
    printf("Nome da Cidade: ");
    fgets(nomeCidade1, sizeof(nomeCidade1), stdin);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    getchar(); // Limpa o '\n' antes da próxima leitura com fgets

    // Leitura dos dados da Carta 2
    printf("\nCadastro da Carta 2:\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Código da Carta (ex: B02): ");
    scanf("%s", codigo2);

    getchar(); // Limpa o '\n'
    printf("Nome da Cidade: ");
    fgets(nomeCidade2, sizeof(nomeCidade2), stdin);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);


    //-Calcular a Densidade Populacional
    densidade1 = (populacao1 / area1); 
    densidade2 = (populacao2 / area2);

    //-Calcular o PIB per Capita 
    float escala1 = 1000000000.0;
    float escala2 = 1000000000.0;
    pibP1 = (pib1 * escala1) / populacao1;
    pibP2 = (pib2 * escala2) / populacao2;
    /*
    Existia outra opção com 
    float escala1 = 1e9f;
    float escala2 = 1e9f; 
    */
  


    // Calcular o Super Poder
    float superPoderA = (populacao1 + pib1 + pontosTuristicos1 + pibP1) / densidade1;
    float superPoderB = (populacao2 + pib2 + pontosTuristicos2 + pibP2) / densidade2;
    
    // Variaveis e Menu Comparação
    int escolhacomparar;
    printf("\nEscolha como comparar as cartas? \n");
    printf("1. Estado\n");
    printf("2. Populacao\n");
    printf("3. Area\n");
    printf("4. PIB\n");
    printf("5. Pontos Turisticos\n");
    printf("6. Densidade Populacional\n");
    printf("7. PIB per Capita\n");
    scanf("%i", &escolhacomparar);





        switch (escolhacomparar)
    {
     case 1:
      // Exibição das cartas
      //Carta1
      printf("\nCarta 1:\n");
      printf("Estado: %c\n", estado1);
      printf("Código: %s\n", codigo1);
      printf("Nome da Cidade: %s\n", nomeCidade1); // fgets já inclui \n
      printf("População: %d\n", populacao1);
      printf("Área: %.2f km²\n", area1);
      printf("PIB: %.2f bilhões de reais\n", pib1);
      printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
      printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
      printf("PIB per Capita: %.2f reais\n", pibP1);
      printf("Super Poder Carta 1:%f\n", superPoderA);

      // Carta 2
      printf("\nCarta 2:\n");
      printf("Estado: %c\n", estado2);
      printf("Código: %s\n", codigo2);
      printf("Nome da Cidade: %s\n", nomeCidade2); // fgets já inclui \n
      printf("População: %d\n", populacao2);
      printf("Área: %.2f km²\n", area2);
      printf("PIB: %.2f bilhões de reais\n", pib2);
      printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
      printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
      printf("PIB per Capita: %.2f reais\n", pibP2);
      printf("Super Poder Carta 1:%f\n", superPoderB);

      break;
                
     case 2:
        if (populacao1 > populacao2)
        {
            printf("Comparação por População.\n");
            printf("População Carta 1: %d\n", populacao1);
            printf("População Carta 2: %d\n", populacao2);
            printf("A populacao da Carta 1 venceu\n");
        } else if (populacao1 < populacao2) {
            printf("Comparação por População.\n");
            printf("População Carta 1: %d\n", populacao1);
            printf("População Carta 2: %d\n", populacao2);
            printf("A populacao da Carta 2 venceu\n");
        } else {
            printf("Comparação por População.\n");
            printf("Empate!\n");
        }
        
        
        break;

     case 3:
        if (area1 > area2)
        {
            printf("Comparação por Area.\n");
            printf("Area Carta 1: %.2f\n", area1);
            printf("Area Carta 2: %.2f\n", area2);
            printf("Carta 1 venceu\n");
        } else if (area1 < area2) {
            printf("Comparação por Area.\n");
            printf("Area Carta 1: %.2f\n", area1);
            printf("Area Carta 2: %.2f\n", area2);
            printf("Carta 2 venceu\n");
        } else {
            printf("Comparação por Area.\n");
            printf("Empate!\n");
        } 

        break;
    
     case 4:
        if (pib1 > pib2)
        {
            printf("Comparação por PIB.\n");
            printf("PIB Carta 1: %.2f\n", pib1);
            printf("PIB Carta 2: %.2f\n", pib2);
            printf("Carta 1 venceu\n");
        } else if (pib1 < pib2) {
            printf("Comparação por PIB.\n");
            printf("PIB Carta 1: %.2f\n", pib1);
            printf("PIB Carta 2: %.2f\n", pib2);
            printf("Carta 2 venceu\n");
        } else {
            printf("Comparação por PIB.\n");
            printf("Empate!\n");
        } 
        break;

     case 5:
        if (pontosTuristicos1 > pontosTuristicos2)
        {
            printf("Comparação por Pontos Turisticos.\n");
            printf("Pontos Turisticos Carta 1: %d\n", pontosTuristicos1);
            printf("PontosTuristicos Carta 2: %d\n", pontosTuristicos2);
            printf("Carta 1 venceu\n");
        } else if (pontosTuristicos1 < pontosTuristicos2) {
            printf("Comparação por Pontos Turisticos.\n");
            printf("PontosTuristicos Carta 1: %d\n", pontosTuristicos1);
            printf("PontosTuristicos Carta 2: %d\n", pontosTuristicos2);
            printf("Carta 2 venceu\n");
        } else {
            printf("Comparação por Pontos Turisticos.\n");
            printf("Empate!\n");
        } 

        break;
    
     case 6:
        if (densidade1 < densidade2)
        {
            printf("Comparação por Densidade Carta.\n");
            printf("Densidade Carta 1: %.2f\n", densidade1);
            printf("Densidade Carta 2: %.2f\n", densidade2);
            printf("Carta 1 venceu\n");
        } else if (densidade1 > densidade2) {
            printf("Comparação por Densidade Carta.\n");
            printf("Densidade Carta 1: %.2f\n", densidade1);
            printf("Densidade Carta 2: %.2f\n", densidade2);
            printf("Carta 2 venceu\n");
        } else {
            printf("Comparação por Densidade Carta.\n");
            printf("Empate!\n");
        } 
        break;

    
     default:
        printf("Opcao invalida");
        break;
    }

return 0;
}


