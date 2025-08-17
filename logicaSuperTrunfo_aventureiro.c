#include <stdio.h>

int main() {
    //Dados das cartas. Já cadastradas.
    char nome1[20] = "SABARA";
    char nome2[20] = "OURO_PRETO";
    int populacao1 = 150000, populacao2 = 120000;
    float area1 = 300.0, area2 = 250.0;
    float pib1 = 6.28, pib2 = 5.50;
    int turistico1 = 10, turistico2 = 12;
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;
    float percapita1 = (pib1 * 1000000000) / populacao1;
    float percapita2 = (pib2 * 1000000000) / populacao2;

    int opcao;

    printf("\n **** Segue abaixo os atributos para comparação **** \n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("6 - PIB per capta\n");
    printf("Qual a sua escolha?: ");
    scanf("%d", &opcao);

    printf("\nComparando %s e %s:\n", nome1, nome2);

    switch(opcao) {
        case 1:
        printf("População %d x %d\n", populacao1, populacao2);
        if (populacao1 > populacao2)
        printf("%s venceu\n", nome1);
        else if (populacao1 < populacao2)
        printf("%s venceu", nome2);
        else
        printf("Empate!\n");
        break;
        
        case 2:
        printf("Área: %.2f x %.2f\n", area1, area2);
        if (area1 > area2)
        printf("%s venceu\n", nome1);
        else if (area1 < area2)
        printf("%s venceu\n", nome2);
        else
        printf("Empate!\n");
        break;

        case 3:
        printf("PIB: %.2f x %.2f\n", pib1, pib2);
        if (pib1 > pib2)
        printf("%s venceu!\n", nome1);
        else if (pib1 < pib2)
        printf("%s venceu!\n", nome2);
        else
        printf("Empate!\n");
        break;

        case 4:
        printf("Pontos Turísticos: %d x %d\n", turistico1, turistico2);
        if (turistico1 > turistico2)
        printf("%s venceu!\n", nome1);
        else if (turistico1 < turistico2)
        printf("%s venceu!\n", nome2);
        else
        printf("Empate!\n");
        break;

        case 5:
        printf("Densidade Populacional: %.2f x %.2f\n", densidade1, densidade2);
        if (densidade1 < densidade2)
        printf("%s venceu!\n", nome1);
        else if (densidade1 > densidade2)
        printf("%s venceu!\n", nome2);
        else
        printf("Empate!\n");
        break;

        case 6:
        printf("PIB per capita: %.2f x %.2f\n", percapita1, percapita2);
        if (percapita1 > percapita2)
        printf("%s venceu!\n", nome1);
        else if (percapita1 < percapita2)
        printf("%s venceu!\n", nome2);
        else
        printf("Empate!\n");
        break;

    default:
        printf("Opção inválida!\n");
    
    }

    return 0;

}