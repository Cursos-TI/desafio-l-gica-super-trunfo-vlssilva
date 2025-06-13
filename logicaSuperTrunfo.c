#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
#include <stdio.h>

// Estrutura para armazenar os dados da carta
typedef struct {
    char estado[3]; // Estado (sigla)
    char codigo[10]; // Código da carta
    char nome[50]; // Nome da cidade
    int populacao; // População
    float area; // Área
    float pib; // PIB
    int pontos_turisticos; // Número de pontos turísticos
} Carta;

// Função para calcular a densidade populacional
float calcularDensidadePopulacional(Carta carta) {
    return carta.populacao / carta.area;
}

// Função para calcular o PIB per capita
float calcularPibPerCapita(Carta carta) {
    return carta.pib / carta.populacao;
}

int main() {
    // Definindo duas cartas
    Carta carta1 = {"SP", "C1", "São Paulo", 12300000, 1521.11, 700000000, 100};
    Carta carta2 = {"RJ", "C2", "Rio de Janeiro", 6000000, 1182.30, 300000000, 50};

    // Cálculo da densidade populacional e PIB per capita
    float densidade1 = calcularDensidadePopulacional(carta1);
    float densidade2 = calcularDensidadePopulacional(carta2);
    float pibPerCapita1 = calcularPibPerCapita(carta1);
    float pibPerCapita2 = calcularPibPerCapita(carta2);

    // Atributo escolhido para comparação
    // Neste caso, estamos comparando a população
    printf("Comparação de cartas (Atributo: População):\n");
    printf("Carta 1 - %s (%s): %d\n", carta1.nome, carta1.estado, carta1.populacao);
    printf("Carta 2 - %s (%s): %d\n", carta2.nome, carta2.estado, carta2.populacao);

    // Comparação da população
    if (carta1.populacao > carta2.populacao) {
        printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nome);
    } else if (carta1.populacao < carta2.populacao) {
        printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nome);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
