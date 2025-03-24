#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    //Desafio Nível Novato
   // Definição fixa das duas cartas
   char estado1[] = "Minas Gerais";
   char codigo1[] = "A01";
   char nomeCidade1[] = "Belo Horizonte";
   int populacao1;
   float area1;
   float pib1;
   int pontosTuristicos1;

   char estado2[] = "São Paulo";
   char codigo2[] = "B02";
   char nomeCidade2[] = "São Paulo";
   int populacao2;
   float area2;
   float pib2;
   int pontosTuristicos2;

   // Cadastro da primeira carta
   printf("\n=== Cadastro da Carta 1 ===\n");
   printf("Estado: %s\n", estado1);
   printf("Código: %s\n", codigo1);
   printf("Cidade: %s\n", nomeCidade1);

   printf("Digite a população: ");
   scanf("%d", &populacao1);

   printf("Digite a área (km²): ");
   scanf("%f", &area1);

   printf("Digite o PIB (em R$): ");
   scanf("%f", &pib1);

   printf("Digite a quantidade de pontos turísticos: ");
   scanf("%d", &pontosTuristicos1);

   // Cadastro da segunda carta
   printf("\n=== Cadastro da Carta 2 ===\n");
   printf("Estado: %s\n", estado2);
   printf("Código: %s\n", codigo2);
   printf("Cidade: %s\n", nomeCidade2);

   printf("Digite a população: ");
   scanf("%d", &populacao2);

   printf("Digite a área (km²): ");
   scanf("%f", &area2);

   printf("Digite o PIB (em R$): ");
   scanf("%f", &pib2);

   printf("Digite a quantidade de pontos turísticos: ");
   scanf("%d", &pontosTuristicos2);

   // Exibição das cartas cadastradas
   printf("\n=== CARTAS CADASTRADAS ===\n");

   printf("\n--- Carta 1 ---\n");
   printf("Estado: %s\n", estado1);
   printf("Código: %s\n", codigo1);
   printf("Cidade: %s\n", nomeCidade1);
   printf("População: %d habitantes\n", populacao1);
   printf("Área: %.2f km²\n", area1);
   printf("PIB: R$ %.2f\n", pib1);
   printf("Pontos turísticos: %d\n", pontosTuristicos1);

   printf("\n--- Carta 2 ---\n");
   printf("Estado: %s\n", estado2);
   printf("Código: %s\n", codigo2);
   printf("Cidade: %s\n", nomeCidade2);
   printf("População: %d habitantes\n", populacao2);
   printf("Área: %.2f km²\n", area2);
   printf("PIB: R$ %.2f\n", pib2);
   printf("Pontos turísticos: %d\n", pontosTuristicos2);

    return 0;
}
