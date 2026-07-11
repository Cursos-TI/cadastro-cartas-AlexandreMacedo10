#include <stdio.h>
int main() {

 /*=======================================
      DECLARAÇÃO DAS VARIAVEIS DA CARTA 1
   ======================================= */
    //Carta 1
     char estado1;
     char codigo1[4];
     char cidade1 [30];
     float area1, pib1;
     int pontos1;
    
   /*=============================
      ENTRADA DE DADOS - CARTA 1
     ============================= */
    
    printf("Digite o Estado: ");
    scanf(" %c", &estado1);

    printf("Digite o Codigo: ");
    scanf("%s", codigo1);

    printf(" Digite a Cidade: ");
    scanf(" %[^\n]", cidade1);

    int populacao1;
    printf("Digite a Populacao: ");
    scanf("%d", &populacao1);
    printf("Digite a Area em km2: ");
scanf("%f", &area1);

printf("Digite o PIB: ");
scanf("%f", &pib1);

printf("Digite o Numero de Pontos Turisticos: ");
scanf("%d", &pontos1);
    
        /* CALCULOS */
    float densidade1 = (float)populacao1 / area1;
    float pibPerCapita1 = (pib1 * 1000000) / populacao1;

        printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
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
    int populacao2;
    float area2, pib2;
    int pontos2;
    
    /*===============================
       ENTRADA DE DADOS - CARTA 2
     ================================ */   
    
    printf("Digite os dados da Carta 2\n");
    printf("Digite o Estado: ");
    scanf(" %c", &estado2);

    printf("Digite o Codigo: ");
    scanf("%s", codigo2);
    
    printf("Digite a Cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Qual é a Populacao: ");
    scanf("%d", &populacao2);

    printf("Digite a Area em km2: ");
    scanf("%f", &area2);
    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontos2);
    
        /* CALCULOS */
    float densidade2 = (float)populacao2 / area2;
    float pibPerCapita2 = (pib2 * 1000000) / populacao2;

        printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade2);
    printf("PIB per Capita: %.2f\n", pibPerCapita2);
    
 return 0;
}
