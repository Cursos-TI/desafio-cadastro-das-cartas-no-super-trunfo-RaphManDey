#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
    printf("Desafio Cartas Super Trunfo\n");

    //Declarações das variáveis da 1 Carta
    char Estado1;
    char Carta1[4];
    char Cidade1[40];
    int Populacao1;
    float Area1;
    float Pib1;
    int Pontos_turisticos1;
    float Densidade_populacional;
    float Pib_per_capita1;

    //Declaração de variáveis da 2 Carta
    char Estado2;
    char Carta2[4];
    char Cidade2[40];
    int Populacao2;
    float Area2;
    float Pib2;
    int Pontos_turisticos2;
    float Densidade_populacional2;
    float Pib_per_capita2;

    //Cadastro da Carta 1
    printf("Carta 1:\n");
    printf("Digite uma letra de A a H para o Estado: \n");
    scanf(" %c", &Estado1);
    printf("Digite a letra do estado que você escolheu em seguida de um número de 01 a 04 (ex: A01, B03 e etç): \n");
    scanf("%s", Carta1);
    printf("Nome da cidade(sem espaço, use _): \n");
    scanf("%s", Cidade1);
    printf("População: \n");
    scanf("%d", &Populacao1);
    printf("Área: \n");
    scanf("%f", &Area1);
    printf("PIB: \n");
    scanf("%f", &Pib1);
    printf("Números de pontos túristicos: \n");
    scanf("%d", &Pontos_turisticos1);

    //Calculos da Densidade Populacional e PIB Per Capita
    float Densidade_Populacional1 = Populacao1 / Area1;
    float Pib_per_Capita1 = (Pib1 * 1000000000) / Populacao1;

    //Cadastro da Carta 2
    printf("Carta 2:\n");
    printf("Digite uma letra de A a H para o Estado: \n");
    scanf(" %c", &Estado2);
    printf("Digite a letra do estado que você escolheu em seguida de um número de 01 a 04 (ex: A01, B03 e etç): \n");
    scanf("%s", Carta2);
    printf("Nome da cidade(sem espaço, use _): \n");
    scanf("%s", Cidade2);
    printf("População: \n");
    scanf("%d", &Populacao2);
    printf("Área: \n");
    scanf("%f", &Area2);
    printf("PIB: \n");
    scanf("%f", &Pib2);
    printf("Números de pontos túristicos: \n");
    scanf("%d", &Pontos_turisticos2);

    //Calculos da Densidade Populacional e PIB Per Capita
    float Densidade_Populacional2 = Populacao2 / Area2;
    float Pib_per_Capita2 = (Pib2 * 1000000000) / Populacao2;
     
    //Espaçamento
    printf("------------------ \n");

    //exibição dos dados da primeira carta
    printf("Carta 1:\n");
    printf("Estado: %c \n", Estado1);
    printf("Código: %s \n", Carta1);
    printf("População: %d \n", Populacao1);
    printf("Nome da Cidade: %s \n", Cidade1);
    printf("Área: %.2f km² \n", Area1);
    printf("PIB: %.2f bilhões de reais \n", Pib1);
    printf("Números de Pontos Turísticos: %d \n", Pontos_turisticos1);
    printf("Densidade Populacional: %.2f \n", Densidade_Populacional1);
    printf("PIB per Capita: %.2f \n\n", Pib_per_Capita1);

    //exibição dos dados da segunda carta
    printf("Carta 2:\n");
    printf("Estado: %c \n", Estado2);
    printf("Código: %s \n", Carta2);
    printf("População: %d \n", Populacao2);
    printf("Nome da Cidade: %s \n", Cidade2);
    printf("Área: %.2f km² \n", Area2);
    printf("PIB: %.2f bilhões de reais \n", Pib2);
    printf("Números de Pontos Turísticos: %d \n", Pontos_turisticos2);
    printf("Densidade Populacional: %.2f \n", Densidade_Populacional2);
    printf("PIB per Capita: %.2f \n", Pib_per_Capita2);

    return 0;
}
