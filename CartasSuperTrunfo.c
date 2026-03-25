#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
	char estado_1, estado_2, codCarta_1[3], codCarta_2[3], nomeCidade_1[20], nomeCidade_2[20];
	int populacao_1, populacao_2, pontosTuristicos_1, pontosTuristicos_2;
	float area_1, area_2, pib_1, pib_2;
	int num_carta_1 = 1, num_carta_2 = 2;
  // Área para entrada de dados
	printf("============= Super Trunfo =============\n"); //Mensagem inicial
	
		// ========================= CARTA 1 ================================
	printf("Insira os dados da carta 1\n");	//Pedir dados da carta 1
	
	printf("Digite a letra do estado (de A à H)\n"); //Pedir e armazenar Letra do estado
	scanf(" %c", &estado_1);
	
	//Array de char que gera o cod do estado
	codCarta_1[0] = estado_1;
	codCarta_1[1] = num_carta_1 + '0';
	codCarta_1[2] = '\0';
	
	printf("Digite o nome da cidade:\n"); //Usando o fgets para capturar o nome
	fgets(nomeCidade_1, sizeof(nomeCidade_1), stdin);
	
	printf("Digite a população da cidade:\n"); //Pede a população
	scanf("%d", &populacao_1);
	
	printf("Digite a área² da cidade:\n"); //Pede a área
	scanf("%f", &area_1);
	
	printf("Digite o PIB da cidade:\n"); // Pede o PIB
	scanf("%f", &pib_1);
	
	printf("Digite o número de pontos turísticos da cidade:\n"); //Pede num pontos turísticos
	scanf("%d", &pontosTuristicos_1);
	// ========================= CARTA 2 ================================
	printf("Insira os dados da carta 2\n");	//Pedir dados da carta 2
	
	printf("Digite a letra do estado (de A à H)\n"); //Pedir e armazenar Letra do estado
	scanf("%c", &estado_2);
	
	//Array de char que gera o cod do estado
	codCarta_1[0] = estado_2;
	codCarta_1[1] = num_carta_2 + '0';
	codCarta_1[2] = '\0';
	
	printf("Digite o nome da cidade:\n"); //Usando o fgets para capturar o nome
	fgets(nomeCidade_2, sizeof(nomeCidade_2), stdin);
	
	printf("Digite a população da cidade:\n"); //Pede a população
	scanf("%d", &populacao_2);
	
	printf("Digite a área² da cidade:\n"); //Pede a área
	scanf("%f", &area_2);
	
	printf("Digite o PIB da cidade:\n"); // Pede o PIB
	scanf("%f", &pib_2);
	
	printf("Digite o número de pontos turísticos da cidade:\n"); //Pede num pontos turísticos
	scanf("%d", &pontosTuristicos_2);
	
  // Área para exibição dos dados da cidade
  
  // CARTA 1
	printf("CARTA: %d\n",num_carta_1);
	printf("Estado: %c\n", estado_1);
	printf("Código: %s\n", codCarta_1);
	printf("Nome da Cidade: %s\n", nomeCidade_1);
	printf("Área: %f\n", area_1);
	printf("PIB: %f\n", pib_1);
	printf("Número de pontos turísticos: %d", pontosTuristicos_1);
	
	// CARTA 2
	printf("CARTA: %d\n",num_carta_2);
	printf("Estado: %c\n", estado_2);
	printf("Código: %s\n", codCarta_2);
	printf("Nome da Cidade: %s", nomeCidade_2);
	printf("Área: %f\n", area_2);
	printf("PIB: %f\n", pib_2);
	printf("Número de pontos turísticos: %d\n", pontosTuristicos_2);

return 0;
} 
