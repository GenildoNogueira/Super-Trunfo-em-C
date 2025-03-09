#include <stdio.h>
#include <stdlib.h>

// Comando de Para Limpar o Terminal
#ifdef _WIN32
#define CLEAR "cls"
#else
#define CLEAR "clear"
#endif

struct Carta {
  char codigo[10];
  char estado;
  char nome[60];
  int populacao;
  float area;
  float pib;
  int pontosTuristicos;
};

// Função para ler e armazenar os dados das cartas
void lerCarta(struct Carta *carta) {
  printf("Digite o código da cidade: ");
  scanf("%s", carta->codigo);
  getchar(); // Consome o '\n' deixado pelo scanf

  printf("Digite a inicial do estado: ");
  scanf("%c", &carta->estado);
  getchar(); // Consome o '\n' deixado pelo scanf

  printf("Digite o nome da cidade: ");
  scanf("%s", carta->nome);
  getchar(); // Consome o '\n' deixado pelo scanf

  printf("Digite a população: ");
  scanf("%d", &carta->populacao);

  printf("Digite a área: ");
  scanf("%f", &carta->area);

  printf("Digite o PIB: ");
  scanf("%f", &carta->pib);

  printf("Digite o número de pontos turísticos: ");
  scanf("%d", &carta->pontosTuristicos);

  system(CLEAR);
}

// Função para exibir uma carta
void exibirCarta(struct Carta carta, int numero) {
  printf("Carta %d:\n", numero);
  printf("Código: %s\n", carta.codigo);
  printf("Estado: %c\n", carta.estado);
  printf("Nome da Cidade: %s\n", carta.nome);
  printf("População: %d\n", carta.populacao);
  printf("Área: %.2f km²\n", carta.area);
  printf("PIB: %.2f bilhões de reais\n", carta.pib);
  printf("Número de Pontos Turísticos: %d\n\n", carta.pontosTuristicos);
}

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
int main() {
  struct Carta carta1;
  struct Carta carta2;

  // Limpar a Tela
  system(CLEAR);

  // Salvar Dados da Carta 1:
  lerCarta(&carta1);
  printf("Insira os Dados da Segunda Carta:\n");
  // Salvar Dados da Carta 2:
  lerCarta(&carta2);

  // Exibição dos Dados das Carta 1:
  exibirCarta(carta1, 1);
  // Exibição dos Dados das Carta 2:
  exibirCarta(carta2, 2);

  return 0;
}
