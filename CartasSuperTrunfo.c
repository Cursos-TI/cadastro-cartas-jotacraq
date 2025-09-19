#include <stdio.h>
#include <string.h>

int main() {
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;


    printf("Digite os dados da primeira cidade:\n");
    printf("Estado (sigla): "); 
    scanf(" %c", &estado1);
    printf("Codigo (3 digitos): ");
    scanf("%3s", codigo1);
    getchar();
    printf("Nome da cidade: ");
    fgets(cidade1, sizeof(cidade1), stdin);
    cidade1[strcspn(cidade1, "\n")] = 0;
    printf("Populacao: ");
    scanf("%d", &populacao1);
    printf("Area (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em R$): ");
    scanf("%f", &pib1);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("Digite os dados da segunda cidade:\n");
    printf("Estado (sigla): "); 
    scanf(" %c", &estado2);
    printf("Codigo (3 digitos): ");
    scanf("%3s", codigo2);
    getchar();
    printf("Nome da cidade: ");
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = 0;
    printf("Populacao: ");
    scanf("%d", &populacao2);
    printf("Area (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em R$): ");
    scanf("%f", &pib2);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    printf("\nDados da primeira cidade:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: R$ %.2f\n", pib1);
    printf("Numero de pontos turisticos: %d\n", pontosTuristicos1);

    printf("\nDados da segunda cidade:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: R$ %.2f\n", pib2);
    printf("Numero de pontos turisticos: %d\n", pontosTuristicos2);

    return 0;
}
