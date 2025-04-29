#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
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

// cadastramento das variaveis:

//carta 1:

char Estado1, codigodacarta1[15], nome1[15];
int pontosturisticos1;
float area1, PIB1, densidade1, pibPerCapita1, superPoder1;
unsigned long int populacao1;

//carta 2:

char Estado2, codigodacarta2[15], nome2[15];
int pontosturisticos2;
float area2, PIB2, densidade2, pibPerCapita2, superPoder2;
unsigned long int populacao2;

// cadastramento da carta 1:

printf("Carta 1:\n");    

printf("Digite a letra do Estado.\n");
scanf(" %c", &Estado1);

printf("Digite o codigo da carta.\n");
scanf("%s", codigodacarta1);

printf("Digite o primeiro nome da cidade.\n");
scanf("%s", nome1);

printf("Digite a sua população.\n");
scanf("%lu", &populacao1);

printf("Digite o tamanho da area.\n");
scanf("%f", &area1);

printf("Digite o PIB da cidade.\n");
scanf("%f", &PIB1);

printf("Digite a quantidade de pontos turisticos.\n");
scanf("%d", &pontosturisticos1);

printf("\n");

// cadastramento da carta 2:

printf("Carta 2:\n");    

printf("Digite o Estado.\n");
scanf(" %c", &Estado2);

printf("Digite o codigo da carta.\n");
scanf("%s", codigodacarta2);

printf("Digite o primeiro nome da cidade.\n");
scanf("%s", nome2);

printf("Digite a sua população.\n");
scanf("%lu", &populacao2);

printf("Digite o tamanho da area.\n");
scanf("%f", &area2);

printf("Digite o PIB da cidade.\n");
scanf("%f", &PIB2);

printf("Digite a quantidade de pontos turisticos.\n");
scanf("%d", &pontosturisticos2);

printf("\n");

 // Calculos carta 1
 densidade1 = populacao1 / area1;
 pibPerCapita1 = PIB1 / populacao1;
 superPoder1 = populacao1 + area1 + PIB1 + (1.0f / densidade1) + pibPerCapita1 + pontosturisticos1;

 // Calculos carta 2
 densidade2 = populacao2 / area2;
 pibPerCapita2 = PIB2 / populacao2;
 superPoder2 = populacao2 + area2 + PIB2 + (1.0f / densidade2) + pibPerCapita2 + pontosturisticos2;

 // resultados das cartas

 printf("\n");

 printf("***Dados das Cartas:***\n");

 printf("\n");

 printf("Carta 1\n");
 printf("Estado: %c\n", Estado1);
 printf("Código: %s\n", codigodacarta1);
 printf("Cidade: %s\n", nome1);
 printf("População: %lu\n", populacao1);
 printf("Área: %.2f\n", area1);
 printf("PIB: %.2f\n", PIB1);
 printf("Pontos turísticos: %d\n", pontosturisticos1);
 printf("Densidade Populacional: %.2f\n", densidade1);
 printf("PIB per Capita: %.2f\n", pibPerCapita1);
 printf("Super Poder: %.2f\n", superPoder1);

printf("\n");

 printf("Carta 2\n");
 printf("Estado: %c\n", Estado2);
 printf("Código: %s\n", codigodacarta2);
 printf("Cidade: %s\n", nome2);
 printf("População: %lu\n", populacao2);
 printf("Área: %.2f\n", area2);
 printf("PIB: %.2f\n", PIB2);
 printf("Pontos turísticos: %d\n", pontosturisticos2);
 printf("Densidade Populacional: %.2f\n", densidade2);
 printf("PIB per Capita: %.2f\n", pibPerCapita2);
 printf("Super Poder: %.2f\n", superPoder2);

 // Comparações das cartas

 printf("\n");

 printf("***Comparações: \n");
 printf("(1 = Carta 1 venceu, 0 = Carta 2 venceu)\n");

printf("\n");

 printf("População: %d\n", (populacao1 > populacao2));
 printf("Área: %d\n", (area1 > area2));
 printf("PIB: %d\n", (PIB1 > PIB2));
 printf("Pontos turísticos: %d\n", (pontosturisticos1 > pontosturisticos2));
 printf("Densidade Populacional (menor vence): %d\n", (densidade1 < densidade2));
 printf("PIB per Capita: %d\n", (pibPerCapita1 > pibPerCapita2));
 printf("Super Poder: %d\n", (superPoder1 > superPoder2));

//cadastro das variaveis para a comparação das cartas

 int opcao, atributo1, atributo2;
int vitorias1, vitorias2;

printf("\n");

do {

    // Menu interativo

    printf("### MENU DE COMPARAÇÃO: ###\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade (menor vence)\n");
    printf("6 - PIB per Capita\n");
    printf("7 - Super Poder\n");
    printf("8 - Comparar dois atributos\n");
    printf("0 - Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    printf("\n");

    // Comparações

    if (opcao == 1) {
        if (populacao1 > populacao2)
            printf("### Carta 1 venceu na População! ###\n");
        else if (populacao2 > populacao1)
            printf("### Carta 2 venceu na População! ###\n");
        else
            printf("### Empate na População! ###\n");

            printf("\n");
    }
    else if (opcao == 2) {
        if (area1 > area2)
            printf("### Carta 1 venceu na Área! ###\n");
        else if (area2 > area1)
            printf("### Carta 2 venceu na Área! ###\n");
        else
            printf("### Empate na Área! ###\n");

            printf("\n");
    }
    else if (opcao == 3) {
        if (PIB1 > PIB2)
            printf("### Carta 1 venceu no PIB! ###\n");
        else if (PIB2 > PIB1)
            printf("### Carta 2 venceu no PIB! ###\n");
        else
            printf("### Empate no PIB! ###\n");

            printf("\n");
    }
    else if (opcao == 4) {
        if (pontosturisticos1 > pontosturisticos2)
            printf("### Carta 1 venceu nos Pontos Turísticos! ###\n");
        else if (pontosturisticos2 > pontosturisticos1)
            printf("### Carta 2 venceu nos Pontos Turísticos! ###\n");
        else
            printf("### Empate nos Pontos Turísticos! ###\n");

            printf("\n");
    }
    else if (opcao == 5) {
        if (densidade1 < densidade2)
            printf("### Carta 1 venceu na Densidade (menor é melhor)! ###\n");
        else if (densidade2 < densidade1)
            printf("### Carta 2 venceu na Densidade (menor é melhor)! ###\n");
        else
            printf("### Empate na Densidade! ###\n");

            printf("\n");
    }
    else if (opcao == 6) {
        if (pibPerCapita1 > pibPerCapita2)
            printf("### Carta 1 venceu no PIB per Capita! ###\n");
        else if (pibPerCapita2 > pibPerCapita1)
            printf("### Carta 2 venceu no PIB per Capita! ###\n");
        else
            printf("### Empate no PIB per Capita! ###\n");

            printf("\n");
    }
    else if (opcao == 7) {
        if (superPoder1 > superPoder2)
            printf("### Carta 1 venceu no Super Poder! ###\n");
        else if (superPoder2 > superPoder1)
            printf("### Carta 2 venceu no Super Poder! ###\n");
        else
            printf("### Empate no Super Poder! ###\n");

            printf("\n");
    }
    else if (opcao == 8) {

        // Comparação dupla

        printf("Escolha o primeiro atributo (1 a 7): \n");
        scanf("%d", &atributo1);
        printf("Escolha o segundo atributo (1 a 7): \n");
        scanf("%d", &atributo2);

        vitorias1 = 0;
        vitorias2 = 0;

        // Comparando o primeiro atributo

        if (atributo1 == 1) {
            if (populacao1 > populacao2) vitorias1++;
            else if (populacao2 > populacao1) vitorias2++;
        }
        else if (atributo1 == 2) {
            if (area1 > area2) vitorias1++;
            else if (area2 > area1) vitorias2++;
        }
        else if (atributo1 == 3) {
            if (PIB1 > PIB2) vitorias1++;
            else if (PIB2 > PIB1) vitorias2++;
        }
        else if (atributo1 == 4) {
            if (pontosturisticos1 > pontosturisticos2) vitorias1++;
            else if (pontosturisticos2 > pontosturisticos1) vitorias2++;
        }
        else if (atributo1 == 5) {
            if (densidade1 < densidade2) vitorias1++;
            else if (densidade2 < densidade1) vitorias2++;
        }
        else if (atributo1 == 6) {
            if (pibPerCapita1 > pibPerCapita2) vitorias1++;
            else if (pibPerCapita2 > pibPerCapita1) vitorias2++;
        }
        else if (atributo1 == 7) {
            if (superPoder1 > superPoder2) vitorias1++;
            else if (superPoder2 > superPoder1) vitorias2++;

            printf("\n");
        }

        // Comparando o segundo atributo

        if (atributo2 == 1) {
            if (populacao1 > populacao2) vitorias1++;
            else if (populacao2 > populacao1) vitorias2++;
        }
        else if (atributo2 == 2) {
            if (area1 > area2) vitorias1++;
            else if (area2 > area1) vitorias2++;
        }
        else if (atributo2 == 3) {
            if (PIB1 > PIB2) vitorias1++;
            else if (PIB2 > PIB1) vitorias2++;
        }
        else if (atributo2 == 4) {
            if (pontosturisticos1 > pontosturisticos2) vitorias1++;
            else if (pontosturisticos2 > pontosturisticos1) vitorias2++;
        }
        else if (atributo2 == 5) {
            if (densidade1 < densidade2) vitorias1++;
            else if (densidade2 < densidade1) vitorias2++;
        }
        else if (atributo2 == 6) {
            if (pibPerCapita1 > pibPerCapita2) vitorias1++;
            else if (pibPerCapita2 > pibPerCapita1) vitorias2++;
        }
        else if (atributo2 == 7) {
            if (superPoder1 > superPoder2) vitorias1++;
            else if (superPoder2 > superPoder1) vitorias2++;

            printf("\n");
        }

        // Resultado final da comparação dupla
        if (vitorias1 > vitorias2)
            printf("Carta 1 venceu com %d vitórias!\n", vitorias1);
        else if (vitorias2 > vitorias1)
            printf("Carta 2 venceu com %d vitórias!\n", vitorias2);
        else
            printf("Empate! Cada uma teve %d vitórias.\n", vitorias1);

            printf("\n");
    }
    else if (opcao == 0) {
        printf("Encerrando o programa...\n");
    }
    else {
        printf("Opção inválida! Tente novamente.\n");
    }

} while(opcao != 0);

    return 0;
}
