#include <stdio.h>
int main() {

    //Carta 1
     char estado1;
     char codigo1[4];
     char cidade1 [30];
     float area1, pib1;
     int pontos1;

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

    printf("\nCarta 1:\n");
    printf("Qual o Estado: %c\n", estado1);
    printf("Qual é o Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Qual é a Populacao: %d\n",populacao1);


    // Carta 2

    char estado2;
    char codigo2 [4];
    char cidade2 [30];
    int populacao2;
    float area2, pib2;
    int pontos2;
    

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
    scanf("%f", &area1);


    printf("\ncarta 2:\n");
    printf("Qual é o Estado: %c\n", estado2);
    printf("Digite o Codigo: %s\n", codigo2);
    printf("Digite a Cidade: %s\n", cidade2);
    printf("Qual é a Populacao:%d\n", populacao2);

 return 0;
}