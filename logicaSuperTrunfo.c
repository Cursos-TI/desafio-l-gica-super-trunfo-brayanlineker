#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    //Carta 1
    char estado1, codigo1[5], nome1[20];
    int populacao1, turistico1, vencedor1 = 0;
    float area1, pib1, percapita1, densidade1;

    //Carta 2
    char estado2, codigo2[5], nome2[20];
    int populacao2, turistico2, vencedor2 = 0;
    float area2, pib2, percapita2, densidade2;

    // Cadastro da Carta 1:
    printf("Cadastro da Carta 1:\n");
    printf("Estado (ex:A-Z): ");
    scanf(" %c", &estado1);
    printf("Código (ex:A01): ");
    scanf("%s", codigo1);
    printf("Nome da cidade: ");
    scanf("%s", nome1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (R$ Bilhões); ");
    scanf("%f", &pib1);
    printf("Pontos Turísticos: ");
    scanf("%d", &turistico1);

    //Cálculo de atributos derivados da Carta 1
    densidade1 = populacao1 / area1;
    percapita1 = (pib1 * 1000000000) / populacao1;

    printf("\n");

    //Cadastro da Carta 2:
    printf("Cadastro da Carta 2:\n");
    printf("Estado (ex:A-Z): ");
    scanf(" %c", &estado2);
    printf("Código (ex:B02): ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf("%s", nome2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (R$ Bilhões): ");
    scanf("%f", &pib2);
    printf("Pontos Turísticos: ");
    scanf("%d", &turistico2);

    //Cálculo de atributos derivados da Carta 2
    densidade2 = populacao2 / area2;
    percapita2 = (pib2 * 1000000000) / populacao2;

    //Exibição dos dados das cartas
    printf("\n ==== CARTA 1 ==== \n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais:\n", pib1);
    printf("Pontos Turísticos: %d\n", turistico1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capta: %.2f reais\n", percapita1);

    printf("\n ==== CARTA 2 ==== \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais:\n", pib2);
    printf("Pontos Turísticos: %d\n", turistico2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capta: %.2f reais\n", percapita2);

    //Comparações
    printf("\n **** Comparação das Cartas **** \n");
    printf("População: ");
    if (populacao1 > populacao2) {
        printf("%s venceu\n", nome1);
        vencedor1++;
    } else {
        printf("%s venceu\n", nome2);
        vencedor2++;
    }

    printf("Área: ");
    if (area1 > area2) {
        printf("%s venceu\n", nome1);
        vencedor1++;
    } else {
        printf("%s venceu\n", nome2);
        vencedor2++;
    }

    printf("PIB: ");
    if (pib1 > pib2) {
        printf("%s venceu\n", nome1);
        vencedor1++;
    } else {
        printf("%s venceu\n", nome2);
        vencedor2++;
    }

    printf("Pontos Turísticos: ");
    if (turistico1 > turistico2) {
        printf("%s venceu\n", nome1);
        vencedor1++;
    } else {
        printf("%s venceu\n", nome2);
        vencedor2++;
    }

    printf("Densidade Populacional: ");
    if (densidade1 < densidade2) {
        printf("%s venceu\n", nome1);
        vencedor1++;
    } else {
        printf("%s venceu\n", nome2);
        vencedor2++;
    }

    printf("PIB per capita: ");
    if (percapita1 > percapita2) {
        printf("%s venceu\n", nome1);
        vencedor1++;
    } else {
        printf("%s venceu\n", nome2);
        vencedor2++;
    }

    printf("\n");

    if (vencedor1 > vencedor2) {
        printf("A carta vencedora é: %s\n", nome1);
    } else {
        printf("A carta vencedora é: %s\n", nome2);
    }

    return 0;

}







    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    //return 0;
    //}
