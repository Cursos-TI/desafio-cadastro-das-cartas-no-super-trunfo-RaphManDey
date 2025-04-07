#include <stdio.h>
#include <string.h>

int main() {

    //Declaração de variáveis da 1 Carta
    char Estado1;
    char Carta1[4];
    char Cidade1[40];
    int População1;
    float Área1;
    float Pib1;
    int pontos_turísticos1;

    //Declaração de variáveis da 2 Carta
    char Estado2;
    char Carta2[4];
    char Cidade2[40];
    int População2;
    float Área2;
    float Pib2;
    int pontos_turísticos2;

    //Cadastro da Carta 1
    printf("Carta 1:\n");
    printf("Digite uma letra de A a H para o Estado:  \n");
    scanf("%c", &Estado1);
    printf("Digite a letra do estado que você escolheu em seguida de um número de 01 a 04 (ex: A01, B03): \n");
    scanf("%s", Carta1);
    getchar();
    printf("Nome da cidade: \n");
    fgets(Cidade1, sizeof(Cidade1), stdin); 
    Cidade1[strcspn(Cidade1, "\n")] = '\0';
    printf("População: \n");
    scanf("%d", &População1);
    printf("Área: \n");
    scanf("%f", &Área1);
    printf("PIB: \n");
    scanf("%f", &Pib1);
    printf("Números de pontos túristicos: \n");
    scanf("%d", &pontos_turísticos1);
    getchar();

    //Cadastro da Carta 2
    printf("Carta 2:\n");
    printf("Digite uma letra de A a H para o Estado: \n");
    scanf("%c", &Estado2);
    printf("Digite a letra do estado que você escolheu em seguida de um número de 01 a 04 (ex: A01, B03): \n");
    scanf("%s", Carta2);
    getchar();
    printf("Nome da cidade: \n");
    fgets(Cidade2, sizeof(Cidade2), stdin); // Limita a 40 caracteres
    Cidade2[strcspn(Cidade2, "\n")] = '\0';
    printf("População: \n");
    scanf("%d", &População2);
    printf("Área: \n");
    scanf("%f", &Área2);
    printf("PIB: \n");
    scanf("%f", &Pib2);
    printf("Números de pontos túristicos: \n");
    scanf("%d", &pontos_turísticos2);

    //exibição dos dados da primeira carta
    printf("Carta 1:\n");
    printf("Estado: %c \n", Estado1);
    printf("Código: %s \n", Carta1);
    printf("População: %d \n", População1);
    printf("Nome da Cidade: %s \n", Cidade1);
    printf("Área: %.2f km² \n", Área1);
    printf("PIB: %.2f bilhões de reais \n", Pib1);
    printf("Números de Pontos Turísticos: %d \n\n", pontos_turísticos1);
    
    //exibição dos dados da segunda carta
    printf("Carta 2:\n");
    printf("Estado: %c \n", Estado2);
    printf("Código: %s \n", Carta2);
    printf("População: %d \n", População2);
    printf("Nome da Cidade: %s \n", Cidade2);
    printf("Área: %.2f km² \n", Área2);
    printf("PIB: %.2f bilhões de reais \n", Pib2);
    printf("Números de Pontos Turísticos: %d \n", pontos_turísticos2);

    return 0;
}