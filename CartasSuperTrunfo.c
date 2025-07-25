#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    int pontosturisticos, populacao;
    char nome[50], codigo[4], estado;
    float area, pib;
    //nova função.
    float densidade, pibpercapita;

    int pontosturisticos2, populacao2;
    char nome2[50], codigo2[4], estado2;
    float area2, pib2;
    //nova função.
    float densidade2, pibpercapita2;
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("-------informe os dados da primeira carta-------\n");
    printf("qual a primeira letra do estado: ");
    scanf(" %c", &estado);
    printf("forneça o codigo da carta Ex.: A01 ou B03  representado pela inicial do estado e um numero entre 01 a 04:");
    scanf(" %s", codigo);
    printf("qual o nome da cidade? ");
    scanf(" %s", nome);
    printf("qual a população total da cidade? ");
    scanf(" %d", &populacao);
    printf("qual a área em km²? ");
    scanf(" %f", &area);
    printf("qual o PIB dessa cidade? ");
    scanf(" %f", &pib);
    printf("qual a quantidade de pontos turisticos dessa cidade? ");
    scanf(" %d", &pontosturisticos);
    densidade = (float) populacao/area;
    pibpercapita = (float) pib/populacao;
                //cadastro da segunda carta.
    printf("-------informe os dados da segunda carta-------\n");
    printf("qual a primeira letra do estado: ");
    scanf(" %c", &estado2);
    printf("forneça o codigo da carta Ex.: A01 ou B03  representado pela inicial do estado e um numero entre 01 a 04:");
    scanf(" %s", codigo2);
    printf("qual o nome da cidade? ");
    scanf(" %s", nome2);
    printf("qual a população total da cidade? ");
    scanf(" %d", &populacao2);
    printf("qual a área em km²? ");
    scanf(" %f", &area2);
    printf("qual o PIB dessa cidade? ");
    scanf(" %f", &pib2);
    printf("qual a quantidade de pontos turisticos dessa cidade? ");
    scanf(" %d", &pontosturisticos2);
    densidade2 = (float) populacao2/area2;
    pibpercapita2 = (float) pib2/populacao2;
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("Carta 1: \n");
    printf("Estado: %c \n", estado);
    printf("Código: %s \n", codigo);
    printf("Nome da Cidade: %s \n", nome);
    printf("População: %d \n", populacao);
    printf("Área: %.2fkm² \n", area);
    printf("PIB: %.2f bilhões de reais \n", pib);
    printf("Número de Pontos Turísticos: %d \n", pontosturisticos);
    printf("Densidade Populacional: %.2f  hab/km² \n", densidade);
    printf("PIB per Capita: %.2f reais \n", pibpercapita);

    printf("Carta 2: \n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da Cidade: %s \n", nome2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2fkm² \n", area2);
    printf("PIB: %.2f \n", pib2);
    printf("Número de Pontos Turísticos: %d \n", pontosturisticos2);
    printf("Densidade Populacional: %.2f  hab/km² \n", densidade2);
    printf("PIB per Capita: %.2f reais \n", pibpercapita2);


    return 0;
}
