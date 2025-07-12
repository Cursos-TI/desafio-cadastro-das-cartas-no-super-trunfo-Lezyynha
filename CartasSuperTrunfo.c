#include <stdio.h>


int main() {
    
    //Carta 1
    char estado1;
    char codigo1 [4];
    char cidade1 [100];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    //Carta 2
    char estado2;
    char codigo2 [4];
    char cidade2 [100];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    //Entrada dos dados - Carta 1
    printf("Carta 1 \n");
    printf("Digite o estado (A-H): ");
    scanf (" %c", &estado1);

    printf("Digite o código do estado (ex A01): ");
    scanf(" %s", codigo1);

    printf("Digite o nome da cidade (sem espaços): ");
    scanf(" %s", cidade1);

    printf("Digite a população da cidade (números inteiros): ");
    scanf(" %d", &populacao1);

    printf("Digite a área em km²: ");
    scanf(" %f", &area1);

    printf("Digite o PIB da área: ");
    scanf(" %f", &pib1);

    printf("Informe o número de pontos turísticos: ");
    scanf(" %d", &pontosTuristicos1);

    //Entrada de dados - Carta 2
    printf("Carta 2 \n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o código do estado (ex B02): ");
    scanf(" %s", codigo2);

    printf("Digite o nome da cidade (sem espaço): ");
    scanf(" %s", cidade2);

    printf("Digite a população da cidade (número inteiro): ");
    scanf(" %d", &populacao2);

    printf("Digite a área em km²: ");
    scanf(" %f", &area2);

    printf("Digite o PIB da área: ");
    scanf(" %f", &pib2);

    printf("Informe o número de pontos turísticos: ");
    scanf(" %d", &pontosTuristicos2);

    printf("Obrigada!");

    return 0;
}