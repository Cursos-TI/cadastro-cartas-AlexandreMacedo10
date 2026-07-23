#include <stdio.h>
int main() {

 /*=======================================
      DECLARAÇÃO DAS VARIAVEIS DA CARTA 1
   ======================================= */
    //Carta 1
     char estado1;
     char codigo1[4];
     char cidade1 [30];
     unsigned long int populacao1;
     float area1, pib1;
     int pontos1;
     float densidade1, pibPerCapita1, superPoder1;

   /* =============================
      ENTRADA DE DADOS - CARTA 1
     ============================= */

    printf("Digite o Estado: ");
    scanf(" %c", &estado1);

    printf("Digite o Codigo: ");
    scanf("%s", codigo1);

    printf("Digite a Cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Digite a Populacao: ");
    scanf("%lu", &populacao1);
    printf("Digite a Area em km2: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontos1);

    /* CALCULOS */
    densidade1 = (float)populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1; // tirei o *1000000 pra ficar certo
    superPoder1 = (float)populacao1 + area1 + pib1 + pontos1 + pibPerCapita1 + (1.0 / densidade1);

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade1);
    printf("PIB per Capita: %.2f\n", pibPerCapita1);

 /*=======================================
      DECLARAÇÃO DAS VARIAVEIS DA CARTA 2
   ======================================= */

    // Carta 2
    char estado2;
    char codigo2 [4];
    char cidade2 [30];
    unsigned long int populacao2;
    float area2, pib2;
    int pontos2;
    float densidade2, pibPerCapita2, superPoder2;

    /*===============================
       ENTRADA DE DADOS - CARTA 2
     ================================ */

    printf("\nDigite os dados da Carta 2\n");
    printf("Digite o Estado: ");
    scanf(" %c", &estado2);

    printf("Digite o Codigo: ");
    scanf("%s", codigo2);

    printf("Digite a Cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Digite a Populacao: ");
    scanf("%lu", &populacao2);

    printf("Digite a Area em km2: ");
    scanf("%f", &area2);
    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontos2);

    /* CALCULOS */

    densidade2 = (float)populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;
    superPoder2 = (float)populacao2 + area2 + pib2 + pontos2 + pibPerCapita2 + (1.0 / densidade2);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade2);
    printf("PIB per Capita: %.2f\n", pibPerCapita2);

    /* COMPARAÇÃO DAS CARTAS COM IF/ELSE */
    printf("\n================ COMPARACAO =================\n");

    // EXEMPLO: Comparando POPULAÇÃO
    printf("Atributo: Populacao\n");
    printf("Carta 1 - %s (%c): %lu\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%c): %lu\n", cidade2, estado2, populacao2);

    if(populacao1 > populacao2){
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    }
    else if(populacao2 > populacao1){
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    }
    else{
        printf("Resultado: Empate!\n");
    }

 return 0;
}
