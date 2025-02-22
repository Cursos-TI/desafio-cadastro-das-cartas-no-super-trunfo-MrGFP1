#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    int carta;
    char estado[20];
    char codigo [20];
    char cidade [20];
    float populacao;
    int pontos;
    float pib;
    float area;


    printf("Digite o Código da carta: \n");
    scanf("%s", &codigo);

    printf("Digite a Carta: \n");
    scanf("%d", &carta);

    printf("Digite o Estado: \n");
    scanf("%s", &estado);

    printf("Digite o Nome Da Cidade: \n");
    scanf(" %s", &cidade);

    printf("Digite o Número de Habitantes: \n");
    scanf("%f", &populacao);

    printf("Quantidade de Pontos Turísticos: \n");
    scanf(" %d", &pontos);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    printf("Digite a Área: \n");
    scanf("%f", &area);

    //somente um espaço para ficar legivel !

    printf(" \n");


    printf("Código da Carta: %s \n", codigo);
    printf("Carta: %d \n", carta);
    printf("Estado: %s \n", estado);
    printf("Nome da Cidade: %s \n", cidade);
    printf("Popuação: %f \n", populacao);
    printf("Área: %f km² \n", area);
    printf("PIB: %f Bilhões de reais \n", pib);
    printf("Número de Pontos Turísticos: %d \n", pontos);


    
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
