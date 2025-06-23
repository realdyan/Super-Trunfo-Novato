#include <stdio.h>
#include <string.h>

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
    char pais1[20], pais2[20];

    // Novas Variaveis Densidade Populacional e PIB per Capita
    float densidade1, densidade2;
    float pibP1, pibP2;

    // Valores Carta 1
    strcpy(pais1, "Brasil");
    populacao1 = 12325000;
    area1 = 1521.11;
    pib1 = 699.28;
    pontosTuristicos1 = 50;

    // getchar(); // Limpa o '\n' antes da próxima leitura com fgets

    // Valores Carta 2
    strcpy(pais2, "Estados Unidos");
    populacao2 = 6748000;
    area2 = 1200.25;
    pib2 = 300.50;
    pontosTuristicos2 = 30;
   
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
    //Adicionando comparação com duas cartas
    int escolhacomparar1, escolhacomparar2;
    float escolha1, escolha2, Escolha1, Escolha2;

    printf("\nEscolha duas cartas para comparar? \n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade\n");
    printf("6. PIB per Capita\n");

    printf("Escolha 1: \n");
    scanf("%i", &escolhacomparar1);
    printf("Escolha 2: \n");
    scanf("%i", &escolhacomparar2);
    if (escolhacomparar1 == escolhacomparar2) {
        printf("Atributo repetido...\n");
        return 2;
    } else {
        printf("Continuar\n");
    }
    
    switch (escolhacomparar1) {

    case 1: escolha1 = populacao1;    escolha2 = populacao2;
    if (escolha1 == escolha2) {
        printf("País 1(População): %i vs País 2(População): %i. Empatou!\n", populacao1, populacao2);
    } else if (escolha1 > escolha2) {
        printf("País 1(População): %i vs País 2(População): %i. País 1 Venceu !\n", populacao1, populacao2);
    } else if (escolha1 < escolha2) {
        printf("País 1 (População): %i vs País 2(População): %i. País 2 Venceu !\n", populacao1, populacao2);
    }
    break;
    

    case 2: escolha1 = area1;         escolha2 = area2;
    if (escolha1 == escolha2) {
       printf("País 1(Area): %.2f vs País 2(Area): %.2f. Empatou!\n", area1, area2);
    } else if (escolha1 > escolha2) {
        printf("País 1(Area): %.2f vs País 2(Area): %.2f. País 1 Venceu !\n", area1, area2);
    } else if (escolha1 < escolha2) {
        printf("País 1 (Area): %.2f vs País 2(Area): %.2f. País 2 Venceu !\n", area1, area2);
    }
    break;

    case 3: escolha1 = pib1;          escolha2 = pib2;
    if (escolha1 == escolha2) {
        printf("País 1(PIB): %.2f vs País 2(PIB): %.2f. Empatou!\n", pib1, pib2);
    } else if (escolha1 > escolha2) {
        printf("País 1(PIB): %.2f vs País 2(PIB): %.2f. País 1 Venceu !\n", pib1, pib2);
    } else if (escolha1 < escolha2) {
        printf("País 1 (PIB): %.2f vs País 2(PIB): %.2f. País 2 Venceu !\n", pib1, pib2);
    }   
    break;

    case 4: escolha1 = pontosTuristicos1;       escolha2 = pontosTuristicos2;
    if (escolha1 == escolha2) {
        printf("País 1(Pontos Turisticos): %i vs País 2(Pontos Turisticos): %i. Empatou!\n", pontosTuristicos1, pontosTuristicos2);
    } else if (escolha1 > escolha2) {
        printf("País 1(Pontos Turisticos): %i vs País 2(Pontos Turisticos): %i. País 1 Venceu !\n", pontosTuristicos1, pontosTuristicos2);
    } else if (escolha1 < escolha2) {
        printf("País 1 (Pontos Turisticos): %i vs País 2(Pontos Turisticos): %i. País 2 Venceu !\n", pontosTuristicos1, pontosTuristicos2);
    }   
    break;
    
    case 5: escolha1 = densidade1;    escolha2 = densidade2;
    if (escolha1 == escolha2) {
        printf("País 1(Densidade): %.2f vs País 2(Densidade): %.2f. Empatou!\n", densidade1, densidade2);
    } else if (escolha1 < escolha2) {
        printf("País 1(Densidade): %.2f vs País 2(Densidade): %.2f. País 1 Venceu !\n", densidade1, densidade2);
    } else if (escolha1 > escolha2) {
        printf("País 1 (Densidade): %.2f vs País 2(Densidade): %.2f. País 2 Venceu !\n", densidade1, densidade2);
    }   
    break;

    case 6: escolha1 = pibP1;        escolha2 = pibP2;
    if (escolha1 == escolha2) {
        printf("País 1(PIB per capita): %.2f vs País 2(PIB per capita): %.2f. Empatou!\n", pibP1, pibP2);
    } else if (escolha1 > escolha2) {
        printf("País 1(PIB per capita): %.2f vs País 2(PIB per capita): %.2f. País 1 Venceu !\n", pibP1, pibP2);
    } else if (escolha1 < escolha2) {
        printf("País 1 (PIB per capita): %.2f vs País 2(PIB per capita): %.2f. País 2 Venceu !\n", pibP1, pibP2);
    }   
    break;

    default:
        printf("Opção inválida! Tente novamente.\n");
        break;
    
    }
 
    
    switch (escolhacomparar2) {

    case 1: Escolha1 = populacao1;    Escolha2 = populacao2;
    if (Escolha1 == Escolha2) {
        printf("País 1(População): %i vs País 2(População): %i. Empatou!\n", populacao1, populacao2);
    } else if (Escolha1 > Escolha2) {
        printf("País 1(População): %i vs País 2(População): %i. País 1 Venceu !\n", populacao1, populacao2);
    } else if (Escolha1 < Escolha2) {
        printf("País 1 (População): %i vs País 2(População): %i. País 2 Venceu !\n", populacao1, populacao2);
    }
    break;
    

    case 2: Escolha1 = area1;         Escolha2 = area2;
    if (Escolha1 == Escolha2) {
       printf("País 1(Area): %.2f vs País 2(Area): %.2f. Empatou!\n", area1, area2);
    } else if (Escolha1 > Escolha2) {
        printf("País 1(Area): %.2f vs País 2(Area): %.2f. País 1 Venceu !\n", area1, area2);
    } else if (Escolha1 < Escolha2) {
        printf("País 1 (Area): %.2f vs País 2(Area): %.2f. País 2 Venceu !\n", area1, area2);
    }
    break;

    case 3: Escolha1 = pib1;          Escolha2 = pib2;
    if (Escolha1 == Escolha2) {
        printf("País 1(PIB): %.2f vs País 2(PIB): %.2f. Empatou!\n", pib1, pib2);
    } else if (Escolha1 > Escolha2) {
        printf("País 1(PIB): %.2f vs País 2(PIB): %.2f. País 1 Venceu !\n", pib1, pib2);
    } else if (Escolha1 < Escolha2) {
        printf("País 1 (PIB): %.2f vs País 2(PIB): %.2f. País 2 Venceu !\n", pib1, pib2);
    }   
    break;

    case 4: Escolha1 = pontosTuristicos1;       Escolha2 = pontosTuristicos2;
    if (Escolha1 == Escolha2) {
        printf("País 1(Pontos Turisticos): %i vs País 2(Pontos Turisticos): %i. Empatou!\n", pontosTuristicos1, pontosTuristicos2);
    } else if (Escolha1 > Escolha2) {
        printf("País 1(Pontos Turisticos): %i vs País 2(Pontos Turisticos): %i. País 1 Venceu !\n", pontosTuristicos1, pontosTuristicos2);
    } else if (Escolha1 < Escolha2) {
        printf("País 1 (Pontos Turisticos): %i vs País 2(Pontos Turisticos): %i. País 2 Venceu !\n", pontosTuristicos1, pontosTuristicos2);
    }   
    break;
    
    case 5: Escolha1 = densidade1;    Escolha2 = densidade2;
    if (Escolha1 == Escolha2) {
        printf("País 1(Densidade): %.2f vs País 2(Densidade): %.2f. Empatou!\n", densidade1, densidade2);
    } else if (Escolha1 < Escolha2) {
        printf("País 1(Densidade): %.2f vs País 2(Densidade): %.2f. País 1 Venceu !\n", densidade1, densidade2);
    } else if (Escolha1 > Escolha2) {
        printf("País 1 (Densidade): %.2f vs País 2(Densidade): %.2f. País 2 Venceu !\n", densidade1, densidade2);
    }   
    break;

    case 6: Escolha1 = pibP1;        Escolha2 = pibP2;
    if (Escolha1 == Escolha2) {
        printf("País 1(PIB per capita): %.2f vs País 2(PIB per capita): %.2f. Empatou!\n", pibP1, pibP2);
    } else if (Escolha1 > Escolha2) {
        printf("País 1(PIB per capita): %.2f vs País 2(PIB per capita): %.2f. País 1 Venceu !\n", pibP1, pibP2);
    } else if (Escolha1 < Escolha2) {
        printf("País 1 (PIB per capita): %.2f vs País 2(PIB per capita): %.2f. País 2 Venceu !\n", pibP1, pibP2);
    }   
    break;

    default:
        printf("Opção inválida! Tente novamente.\n");
        break;
    
    }


    // Variavel Soma dos atributos
    float soma1 = escolha1 + Escolha1;
    float soma2 = escolha2 + Escolha2;

    printf("\nSoma do dois atributos!.\n");
    printf("País 1 = %.2f Vs País 2 = %.2f\n", soma1, soma2);
    
    if (soma1 == soma2) {
        printf("Empatou!\n");
    } else if (soma1 > soma2) {
        printf("País 1: %s venceu a rodada\n", pais1);
    } else if (soma1 < soma2) {
        printf("Pais 2: %s venceu a rodada\n", pais2);
    }


return 0;

}


