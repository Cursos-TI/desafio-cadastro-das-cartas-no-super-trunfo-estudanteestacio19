#include <stdio.h>

int main (){

printf("Desafio Super Trunfo!\n");

    int carta;
    char estado [3];
    char codigocarta [20];
    char nomecidade [20];
    int populacao;
    float area;
    float pib;
    int pontosturisticos;

    printf("Carta: \n");
    scanf("%d", &carta);
    
    printf("Digite o Estado: \n");
    scanf("%s", &estado);

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
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigocarta);
    printf("Nome da cidade: %s\n", nomecidade);
    printf("População: %d\n", populacao);
    printf("Área: %f\n", area);
    printf("PIB: %f\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos);
    
    return 0;


}