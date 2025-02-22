#include <stdio.h>

int main() {

    int carta1, carta2; 
    int estado1, estado2;
    char codigo1[10];
    char codigo2 [10];
    char cidade1 [30];
    char cidade2 [50];
    float populacao1, populacao2;
    int numpontosturisticos1, numpontosturisticos2;
    float pib1, pib2;
    float area1, area2;

    //Imformação da Carta 1.

    printf("Cadastramento da Primeira Carta \n");

    printf("\n");

    printf("Digite a Carta: \n");
    scanf(" %c", &carta1);

    printf("Digite de A a H Referente ao Estado: \n");
    scanf(" %c", &estado1);

    printf("Digite a letra de Estado Seguida de Código de 01 a 04: \n");
    scanf("%s", &codigo1);

    printf("Digite o Nome Da Cidade: \n");
    scanf("%s", &cidade1);

    printf("Digite o Número de Habitantes: \n");
    scanf("%f", &populacao1);

    printf("Digite a Área (em km²) da Cidade : \n");
    scanf("%f", &area1);

    printf("Quantidade de Pontos Turísticos: \n");
    scanf(" %c", &numpontosturisticos1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);

    printf(" \n"); //somente um espaço para ficar legivel.


    //Imformações da Carta 2 
    printf("Cadastramento da Primeira Carta \n");

    printf("\n"); // Somente um espeço para ficar legivel.

    printf("Digite a Carta: \n");
    scanf(" %c", &carta2); 

    printf("Digite de A a H Referente ao Estado: \n");
    scanf(" %c", &estado2);

    printf("Digite a Letra do Estado Seguida do Código de 01 a 04: \n");
    scanf(" %s", &codigo2);

    printf("Digite o Nome da Cidade: \n");
    scanf("%s", &cidade2);

    printf("Digite a Pupolação: \n");
    scanf("%f", &populacao2);

    printf("Digite a Área (em km²) da Cidade: \n");
    scanf("%f", &area2);

    printf("Digite o Número de Prontos Turísticos: \n");
    scanf(" %c", &numpontosturisticos2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf(" \n"); // Espaço para ficar legivel.

    //Impressão carta 1.

    printf("Resultado do Cadastramento de Carta 1 \n");

    printf(" \n"); // Espaço pra ficar legivel.

    printf("Carta: %c \n", carta1);
    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Nome da Cidade: %s \n", cidade1);
    printf("População: %f \n", populacao1);
    printf("Área: %f km² \n", area1);
    printf("PIB: %f Bilhões de Reais \n", pib1);
    printf("Número de Pontos Turísticos: %c \n", numpontosturisticos1);

    printf("\n"); //Espaço para ficar legivel.

    //Impressão carta 2

    printf("Resultado da Cadastramento da Carta 2 \n");

    printf("\n"); // Espaço para ficar legivel.

    printf("Carta: %c \n", carta2);
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da Cidade: %s \n", cidade2);
    printf("População: %f \n", populacao2);
    printf("Área: %f km² \n", area2);
    printf("PIB: %f Bilhões de Reais \n", pib2);
    printf("Número de Pontos Turísticos: %c", numpontosturisticos2);


    return 0;
}
