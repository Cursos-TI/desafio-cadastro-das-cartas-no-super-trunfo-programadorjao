#include <stdio.h>


int main() {
                // Criando as variaveis:
    int pontosturisticos;
    unsigned long int populacao;
    char nome[50], codigo[4], estado;
    float area, pib;
    float densidade, pibpercapita;
    float superpoder1;
    int resultado1,resultado2,resultado3,resultado4,resultado5,resultado6,resultado7;

    int pontosturisticos2;
    unsigned long int populacao2;
    char nome2[50], codigo2[4], estado2;
    float area2, pib2;
    float densidade2, pibpercapita2;
    float superpoder2;
                 // Cadastro das Cartas:
    printf("-------informe os dados da primeira carta-------\n");
    printf("qual a primeira letra do estado: ");
    scanf(" %c", &estado);
    printf("forneça o codigo da carta Ex.: A01 ou B03  representado pela inicial do estado e um numero entre 01 a 04:");
    scanf(" %s", codigo);
    printf("qual o nome da cidade? ");
    scanf(" %s", nome);
    printf("qual a população total da cidade? ");
    scanf(" %lu", &populacao);
    printf("qual a área em km²? ");
    scanf(" %f", &area);
    printf("qual o PIB dessa cidade? ");
    scanf(" %f", &pib);
    printf("qual a quantidade de pontos turisticos dessa cidade? ");
    scanf(" %d", &pontosturisticos);
                // Soma da densidade e do PIB percapita:
    densidade = (float) populacao/area;
    pibpercapita = (float) pib/populacao;
                // Cadastro da segunda carta:
    printf("-------informe os dados da segunda carta-------\n");
    printf("qual a primeira letra do estado: ");
    scanf(" %c", &estado2);
    printf("forneça o codigo da carta Ex.: A01 ou B03  representado pela inicial do estado e um numero entre 01 a 04:");
    scanf(" %s", codigo2);
    printf("qual o nome da cidade? ");
    scanf(" %s", nome2);
    printf("qual a população total da cidade? ");
    scanf(" %lu", &populacao2);
    printf("qual a área em km²? ");
    scanf(" %f", &area2);
    printf("qual o PIB dessa cidade? ");
    scanf(" %f", &pib2);
    printf("qual a quantidade de pontos turisticos dessa cidade? ");
    scanf(" %d", &pontosturisticos2);
                // Soma da densidade e do PIB percapita:
    densidade2 = (float) populacao2/area2;
    pibpercapita2 = (float) pib2/populacao2;
                // Soma do super poder:
    superpoder1 = populacao+area+pib+pontosturisticos+pibpercapita+(1/densidade);
    superpoder2 = populacao2+area2+pib2+pontosturisticos2+pibpercapita2+(1/densidade2);
                // Comparando as cartas:
    resultado1 = populacao>populacao2;
    resultado2 = area>area2;
    resultado3 = pib>pib2;
    resultado4 = pontosturisticos>pontosturisticos2;
    resultado5 = densidade>densidade2;
    resultado6 = pibpercapita>pibpercapita2;
    resultado7 = superpoder1>superpoder2;
                // Exibição dos Dados das Cartas:
    printf("Carta 1: \n");
    printf("Estado: %c \n", estado);
    printf("Código: %s \n", codigo);
    printf("Nome da Cidade: %s \n", nome);
    printf("População: %lu \n", populacao);
    printf("Área: %.2fkm² \n", area);
    printf("PIB: %.2f bilhões de reais \n", pib);
    printf("Número de Pontos Turísticos: %d \n", pontosturisticos);
    printf("Densidade Populacional: %.2f  hab/km² \n", densidade);
    printf("PIB per Capita: %.2f reais \n", pibpercapita);
                // Exibição dos Dados da segunda carta:
    printf("Carta 2: \n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da Cidade: %s \n", nome2);
    printf("População: %lu \n", populacao2);
    printf("Área: %.2fkm² \n", area2);
    printf("PIB: %.2f \n", pib2);
    printf("Número de Pontos Turísticos: %d \n", pontosturisticos2);
    printf("Densidade Populacional: %.2f  hab/km² \n", densidade2);
    printf("PIB per Capita: %.2f reais \n", pibpercapita2);
                // Resultado da comparação das cartas:
    printf("Comparação de Cartas: \n");
    printf("População: carta 1 (%d) \n", resultado1);
    printf("Área: carta 1 (%d) \n", resultado2);
    printf("PIB: carta 1 (%d) \n", resultado3);
    printf("Número de Pontos Turísticos: carta 1 (%d) \n", resultado4);
    printf("Densidade Populacional: carta 1 (%d) \n", resultado5);
    printf("PIB per Capita: carta 1 (%d) \n", resultado6);
    printf("Super poder: carta 1 (%d)", resultado7);

    return 0;
}
