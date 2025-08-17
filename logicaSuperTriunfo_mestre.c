#include <stdio.h>

int main() {
    //Dados das cartas. Já cadastradas.
    char nome1[20] = "BRASIL";
    char nome2[20] = "VENEZUELA";
    int populacao1 = 150000, populacao2 = 120000;
    float area1 = 300.0, area2 = 250.0;
    float pib1 = 6.28, pib2 = 5.50;
    int turistico1 = 10, turistico2 = 12;
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;
    float percapita1 = (pib1 * 1000000000) / populacao1;
    float percapita2 = (pib2 * 1000000000) / populacao2;

    int opcao1, opcao2;
    float valor1_c1, valor1_c2, valor2_c1, valor2_c2;
    float soma1, soma2;

    //Atributos para o usuário escolher.
    printf("\n **** Segue abaixo os atributos para comparação **** \n");
    printf("\nCartas: %s x %s\n", nome1, nome2);
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("6 - PIB per capta\n");

    printf("Qual o primeiro atributo para comparação?: ");
    scanf("%d", &opcao1);

    printf("Qual o segundo atributo para comparação (diferente do primeiro): ");
    scanf("%d", &opcao2);

    if (opcao1 == opcao2){
        printf("\nOpção inválida! Não é permitido escolher o mesmo atributo duas vezes!\n");

        return 0;
    }

    //Primeiro atributo.
    switch (opcao1) {
        case 1:
        valor1_c1 = populacao1; valor1_c2 = populacao2;
        break;
        case 2:
        valor1_c1 = area1; valor1_c2 = area2;
        break;
        case 3:
        valor1_c1 = pib1; valor1_c2 = pib2;
        break;
        case 4:
        valor1_c1 = turistico1; valor1_c2 = turistico2;
        break;
        case 5:
        valor1_c1 = densidade1; valor1_c2 = densidade2;
        break;
        case 6:
        valor1_c1 = percapita1; valor1_c2 = percapita2;
        break;
        default:
        printf("Opção inválida!\n");

        return 0;
    }
        //Segundo atributo.
        switch (opcao2) {
        case 1:
        valor2_c1 = populacao1; valor2_c2 = populacao2;
        break;
        case 2:
        valor2_c1 = area1; valor2_c2 = area2;
        break;
        case 3:
        valor2_c1 = pib1; valor2_c2 = pib2;
        break;
        case 4:
        valor2_c1 = turistico1; valor2_c2 = turistico2;
        break;
        case 5:
        valor2_c1 = densidade1; valor2_c2 = densidade2;
        break;
        case 6:
        valor2_c1 = percapita1; valor2_c2 = percapita2;
        break;
        default:
        printf("Opção inválida!\n");

        return 0;
    }

    //Comparação e soma dos atributos.
    //Regra: Maior vence, exceto densidade (menor vence).

    soma1 = soma2 = 0;

    //Primeiro atributo
    if (opcao1 == 5) {
        soma1 += (valor1_c1 < valor1_c2) ? 1 : 0;
        soma2 += (valor1_c2 < valor1_c1) ? 1 : 0;
    } else {
        soma1 += (valor1_c1 > valor1_c2) ? 1 : 0;
        soma2 += (valor1_c2 > valor1_c1) ? 1 : 0;
    }

    //Seundo atributo
    if (opcao2 == 5) {
        soma1 += (valor2_c1 < valor2_c2) ? 1 : 0;
        soma2 += (valor2_c2 < valor2_c1) ? 1 : 0;
    } else {
        soma1 += (valor2_c1 > valor2_c2) ? 1 : 0;
        soma2 += (valor2_c2 > valor2_c1) ? 1 : 0;
    }

    //Exibição dos resultados
    printf("\n **** Resultado **** \n");
    printf("%s - Atributo 1: %.2f | Atributo 2: %.2f | Soma: %.0f\n", nome1, valor1_c1, valor2_c1, soma1);
    printf("%s - Atributo 1: %.2f | Atributo 2: %.2f | Soma: %.0f\n", nome2, valor1_c2, valor2_c2, soma2);

    printf("\n%s venceu %.0f dos 2 atributos!\n", nome1, soma1);
    printf("%s venceu %.0f dos 2 atributos!\n", nome2, soma2);

    if (soma1 > soma2) {
        printf("\nO vencedor foi: %s!\n", nome1);
    } else if ( soma2 > soma1) {
        printf("\nO vencedor foi: %s!\n", nome2);
    } else {
        printf("\nEmpate!\n");
    }

    return 0;

}