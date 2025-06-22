#include <stdio.h>

int main (){

printf("Desafio Super Trunfo!\n");

printf("Carta 1:\n"); //codigos da primeira carta 

    int carta; // fiz uma linha com o numero da carta, poderia usar isso para não repetir para cada carta? 
    char estado;
    char codigocarta [4];
    char nomecidade [20];
    int populacao;
    float area;
    float pib;
    int pontosturisticos;

    printf("Carta: \n");
    scanf("%d", &carta);
    
    printf("Digite o Estado: \n");
    scanf(" %c", &estado);

    printf("Digite o Código da carta: \n");
    scanf("%s", &codigocarta);

    printf("Digite o Nome da cidade: \n");
    scanf("%s", &nomecidade);

    printf("Digite a população: \n");
    scanf("%d", &populacao);

    printf("Digite a area: \n");
    scanf("%f", &area);

    printf("Digite o pib: \n");
    scanf("%f", &pib);

    printf("Digite o Número de Pontos turísticos: \n");
    scanf("%d", &pontosturisticos);

    printf("Carta: %d\n", carta);
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigocarta);
    printf("Nome da cidade: %s\n", nomecidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f Km²\n", area);
    printf("PIB: %.2f bilhões\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos);
    

printf("Carta 2:\n"); //codigos da primeira carta 

    int carta2; // fiz uma linha com o numero da carta, poderia usar isso para não repetir para cada carta? 
    char estado2;
    char codigocarta2 [4];
    char nomecidade2 [20];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;

    printf("Carta: \n");
    scanf("%d", &carta2);
    
    printf("Digite o Estado: \n");
    scanf(" %c", &estado2);

    printf("Digite o Código da carta: \n");
    scanf("%s", &codigocarta2);

    printf("Digite o Nome da cidade: \n");
    scanf("%s", &nomecidade2);

    printf("Digite a população: \n");
    scanf("%d", &populacao2);

    printf("Digite a area: \n");
    scanf("%f", &area2);

    printf("Digite o pib: \n");
    scanf("%f", &pib2);

    printf("Digite o Número de Pontos turísticos: \n");
    scanf("%d", &pontosturisticos2);

    printf("Carta: %d\n", carta2);
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigocarta2);
    printf("Nome da cidade: %s\n", nomecidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f Km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos2);

    return 0;

}