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





    //cadastramento das variaveis da carta 1:

    char Estado, codigodacarta[15], nome[15];
    int populacaoA, pontosturisticosA;
    float areaA, PIBa; 
    
    // cadastramento da carta 1:
    
    printf("Carta 1:\n");    
    
    printf("Digite a letra do Estado.\n");
    scanf("%s", &Estado);
    
    printf("Digite o codigo da carta.\n");
    scanf("%s", &codigodacarta);
    
    printf("Digite o primeiro nome da cidade.\n");
    scanf("%s", &nome);
    
    printf("Digite a sua população.\n");
    scanf("%d", &populacaoA);
    
    printf("Digite o tamanho da area.\n");
    scanf("%f", &areaA);
    
    printf("Digite o PIB da cidade.\n");
    scanf("%f", &PIBa);
    
    printf("Digite a quantidade de pontos turisticos.\n");
    scanf("%d", &pontosturisticosA);
    
    printf("\n");
    
    // cadastramento das variaveis da carta 2:
    
    char estado, Codigodacarta[15], Nome[15];
    int PopulacaoB,pontosturisticosB;
    float AreaB, pibB; 
    
    // cadastramento da carta 2:

    printf("Carta 2:\n");    
    
    printf("Digite o Estado.\n");
    scanf("%s", &estado);
    
    printf("Digite o codigo da carta.\n");
    scanf("%s", &Codigodacarta);
    
    printf("Digite o primeiro nome da cidade.\n");
    scanf("%s", &Nome);
    
    printf("Digite a sua população.\n");
    scanf("%d", &PopulacaoB);
    
    printf("Digite o tamanho da area.\n");
    scanf("%f", &AreaB);
    
    printf("Digite o PIB da cidade.\n");
    scanf("%f", &pibB);
    
    printf("Digite a quantidade de pontos turisticos.\n");
    scanf("%d", &pontosturisticosB);
    
    printf("\n");
    
    //resultado do cadastro da carta 1:
    
    printf("Carta 1:\n");
    printf("Estado: %c\n", Estado);
    printf("Codigo da carta: %s\n", codigodacarta);
    printf("Nome da cidade: %s\n", nome);
    printf("Popucação: %d\n", populacaoA);
    printf("Area: %f\n", areaA);
    printf("PIB: %f\n", PIBa);
    printf("Pontos turisticos: %d\n", pontosturisticosA);
    
    printf("\n");
    
    //resultado do cadastro da carta 2:
    
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado);
    printf("Codigo da carta: %s\n", Codigodacarta);
    printf("Nome da cidade: %s\n", Nome);
    printf("Popucação: %d\n", PopulacaoB);
    printf("Area: %f\n", AreaB);
    printf("PIB: %f\n", pibB);
    printf("Pontos turisticcos: %d\n", pontosturisticosB);
    
    printf("\n");

    // conparação dos atributos das cartas 1 e 2: 

    if (areaA > AreaB){
        printf("### A carta 1 VENCEU em extensão territorial! ###\n");
    } else {
        printf("### A carta 2 VENCEU em extensão territorial! ###\n");
    }

    return 0;
}
