// Super Trunfo de Cidades — nivel iniciante

#include <stdio.h>
#include <string.h>  // strcspn, sscanf

int main() {
    // Variaveis da Carta 1
    char estado1;        // 'A' a 'H'
    char codigo1[4];     // "A01" (3 chars + '\0')
    char cidade1[100];   // com espacos
    int  populacao1;
    float area1;         // km^2
    float pib1;          // bilhoes de reais
    int  pontos1;

    // Variaveis da Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[100];
    int  populacao2;
    float area2;
    float pib2;
    int  pontos2;

    // Buffer auxiliar para ler linhas
    char line[256];

    // Entrada: Carta 1
    printf("=== Cadastro de Cartas do Super Trunfo ===\n\n");
    printf("Estados validos: A, B, C, D, E, F, G, H\n");
    printf("Codigos validos: de A01 a H04 (01, 02, 03, 04)\n");
    printf("Sugestao: use Estado A e Codigo A01 nesta carta (como no exemplo).\n\n");

    printf("-- Carta 1 --\n");
    printf("Estado (A-H): ");
    fgets(line, sizeof(line), stdin);
    estado1 = line[0];

    printf("Codigo da Carta (ex.: A01): ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%3s", codigo1);

    printf("Nome da Cidade: ");
    fgets(cidade1, sizeof(cidade1), stdin);
    cidade1[strcspn(cidade1, "\r\n")] = '\0';

    printf("Populacao (apenas numeros): ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &populacao1);

    printf("Area em km^2 (use ponto, ex.: 1521.11): ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%f", &area1);

    printf("PIB (em bilhoes, use ponto, ex.: 699.28): ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%f", &pib1);

    printf("Numero de Pontos Turisticos: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &pontos1);

    printf("\n");

    // Entrada: Carta 2
    printf("Sugestao: use Estado B e Codigo B02 nesta carta (como no exemplo).\n\n");

    printf("-- Carta 2 --\n");
    printf("Estado (A-H): ");
    fgets(line, sizeof(line), stdin);
    estado2 = line[0];

    printf("Codigo da Carta (ex.: B02): ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%3s", codigo2);

    printf("Nome da Cidade: ");
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\r\n")] = '\0';

    printf("Populacao (apenas numeros): ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &populacao2);

    printf("Area em km^2 (use ponto, ex.: 1200.25): ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%f", &area2);

    printf("PIB (em bilhoes, use ponto, ex.: 300.50): ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &pontos2);

    // Saida formatada
    printf("\n\n====================\n");
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km^2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km^2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos2);
    printf("====================\n");

    // Pausa para quem usar duplo-clique no .exe
    printf("\nPressione ENTER para sair...");
    fgets(line, sizeof(line), stdin);

    return 0;
}
