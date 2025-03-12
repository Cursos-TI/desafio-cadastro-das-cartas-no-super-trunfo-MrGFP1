#include <stdio.h>

int main() {
   // Variáveis das Cartas 

    char carta1, carta2, 
         estado1, estado2,
         codigo1[10],
         codigo2 [10],
         cidade1 [30],
         cidade2 [50];
    int numpontosturisticos1, numpontosturisticos2;
    float  populacao1, populacao2,
           pib1, pib2,
           area1, area2,
           densidadepopulacional1, densidadepopulacional2,
           pibpercapita1, pibpercapita2;

    printf("\n"); // Espaço para ficar legível

    //Cadastro da Primeira Carta
    printf("Cadastramento Carta 1\n");

    printf("\n"); // Espaço para ficar legível

    printf("Digite a Carta:\n");
    scanf(" %c", &carta1);

    printf("Digite de A a H Referente ao Estado:\n");
    scanf(" %c", &estado1);

    printf("Digite a letra de Estado Seguida de Código de 01 a 04:\n");
    scanf("%s", codigo1);

    printf("Digite o Nome Da Cidade:\n");
    scanf(" %[^\n]", cidade1); // Permite entrada com espaços

    printf("Digite o Número de Habitantes:\n");
    scanf("%f", &populacao1);

    printf("Digite a Área (em km²) da Cidade :\n");
    scanf("%f", &area1);

   printf("Digite o PIB:\n");
    scanf("%f", &pib1);

    printf("Quantidade de Pontos Turísticos:\n");
    scanf("%d", &numpontosturisticos1);

    printf(" \n"); // Espaço para ficar legível.

    //Cadastro da Segunda Carta 
    printf("Cadastramento Carta 2 \n");

    printf("\n"); //Espeço para ficar legível.

    printf("Digite a Carta:\n");
    scanf(" %c", &carta2); 

    printf("Digite de A a H Referente ao Estado:\n");
    scanf(" %c", &estado2);

    printf("Digite a Letra do Estado Seguida do Código de 01 a 04:\n");
    scanf("%s", &codigo2);

    printf("Digite o Nome da Cidade:\n");
    scanf(" %[^\n]", &cidade2); // Permita entrada com espaços

    printf("Digite a Pupolação:\n");
    scanf("%f", &populacao2);

    printf("Digite a Área (em km²) da Cidade:\n");
    scanf("%f", &area2);

    printf("Digite o PIB:\n");
    scanf("%f", &pib2);

    printf("Digite o Número de Prontos Turísticos:\n");
    scanf("%d", &numpontosturisticos2);

    printf(" \n"); // Espaço para ficar legível.

    //Impressão carta 1.
    printf("Resultado do Cadastramento de Carta 1 \n");
    printf("Carta: %c\n", carta1);
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %.0f habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f Bilhões de Reais\n", pib1);
    printf("Número de Pontos Turísticos: %d \n", numpontosturisticos1);
    
    // Cálculo da Densidade Populacional e Pib per Capita Carta 1
 
    densidadepopulacional1 = populacao1 / area1;
    pibpercapita1 = pib1 / populacao1;

    // Impressão Densidade Populacional e Pib per Capita Carta 1

    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional1);
    printf("Pib per Capita: %.2f Reais\n", pibpercapita1);

    printf("\n"); // Espaço prar ficar legível

    //Impressão carta 2
    printf("Resultado da Cadastramento da Carta 2 \n");
    printf("Carta: %c\n", carta2);
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %.0f habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f Bilhões de Reais\n", pib2);
    printf("Número de Pontos Turísticos: %d", numpontosturisticos2);

  // Cálculo da Densidade Populacional e Pib per Capita Carta 2
  densidadepopulacional2 = populacao2 / area2;
  pibpercapita2 = pib2 / populacao2;

  // Impressão Densidade Populacional e Pib per Capita Carta 2

  printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional2);
  printf("Pib per Capita: %.2f Reais\n", pibpercapita2);


    return 0;
}
