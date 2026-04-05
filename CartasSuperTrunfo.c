#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
	char estado_1, estado_2, codCarta_1[3], codCarta_2[3], nomeCidade_1[20], nomeCidade_2[20];
	int pontosTuristicos_1, pontosTuristicos_2;
	unsigned int long populacao_1, populacao_2;
	float area_1, area_2, pib_1, pib_2, densidade_popolacional_1, densidade_popolacional_2, pib_per_capta_1, pib_per_capta_2;
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
	codCarta_1[2] = '\0'; // para indicar o final e não acumular lixo de memória no array de char

  while(getchar() != '\n'); // Limpar o buffer do teclado para evitar problemas com o fgets
	
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
	
	densidade_popolacional_1 = populacao_1 / area_1;
	pib_per_capta_1 = pib_1 / populacao_1;

	long double super_poder_1 = (long double)populacao_1 + area_1 + pib_1 + pontosTuristicos_1 + pib_per_capta_1 + (1/densidade_popolacional_1);

	// ========================= CARTA 2 ================================
	printf("Insira os dados da carta 2\n");	//Pedir dados da carta 2
	
	printf("Digite a letra do estado (de A à H)\n"); //Pedir e armazenar Letra do estado
	scanf(" %c", &estado_2);
	
  while(getchar() != '\n'); // Limpar o buffer do teclado para evitar problemas com o fgets

	//Array de char que gera o cod do estado
	codCarta_2[0] = estado_2;
	codCarta_2[1] = num_carta_2 + '0';
	codCarta_2[2] = '\0';
	
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

	densidade_popolacional_2 = populacao_2 / area_2;
	pib_per_capta_2 = pib_2 / populacao_2;
	
	long double super_poder_2 = (long double)populacao_2 + area_2 + pib_2 + pontosTuristicos_2 + pib_per_capta_2 + (1/densidade_popolacional_2);
	
  // Área para exibição dos dados da cidade
	printf("================== Super Trunfo Cidades ==================");
  // CARTA 1
	printf("CARTA: %d\n",num_carta_1);
	printf("Estado: %c\n", estado_1);
	printf("Código: %s\n", codCarta_1);
	printf("Nome da Cidade: %s\n", nomeCidade_1);
	printf("População: %d habitantes\n", populacao_1);
	printf("Área: %.2f km²\n", area_1);
	printf("PIB: %.2f bilhões de reais\n", pib_1);
	printf("Número de pontos turísticos: %d\n", pontosTuristicos_1);
	printf("Densidade Populacional: %.2f hab/km²\n", densidade_popolacional_1);
	printf("PIB per Capita: %.2f reais\n", pib_per_capta_1);
	
	// CARTA 2
	printf("CARTA: %d\n",num_carta_2);
	printf("Estado: %c\n", estado_2);
	printf("Código: %s\n", codCarta_2);
	printf("Nome da Cidade: %s\n", nomeCidade_2);
	printf("População: %d habitantes\n", populacao_2);
	printf("Área: %.2f km²\n", area_2);
	printf("PIB: %.2f bilhões de reais\n", pib_2);
	printf("Número de pontos turísticos: %d\n", pontosTuristicos_2);
	printf("Densidade Populacional: %.2f hab/km²\n", densidade_popolacional_2);
	printf("PIB per Capita: %.2f reais\n", pib_per_capta_2);

	//Exibição do resultado
	printf("População: Carta %d venceu.\n", (populacao_1 > populacao_2) ? num_carta_1 : num_carta_2);
	printf("Área:  Carta %d venceu.\n", (area_1 > area_2) ? num_carta_1 : num_carta_2);
	printf("PIB:  Carta %d venceu.\n", (pib_1 > pib_2) ? num_carta_1 : num_carta_2);
	printf("Pontos Turísticos:  Carta %d venceu.\n", (pontosTuristicos_1 > pontosTuristicos_2) ? num_carta_1 : num_carta_2);
	printf("Densidade Populacional:  Carta %d venceu.\n", (densidade_popolacional_1 > densidade_popolacional_2) ? num_carta_1 : num_carta_2);
	printf("PIB per Capita:  Carta %d venceu.\n", (pib_per_capta_1 > pib_per_capta_2) ? num_carta_1 : num_carta_2);
	printf("Super Poder:  Carta %d venceu.\n", (super_poder_1 > super_poder_2) ? num_carta_1 : num_carta_2);

    return 0;
} 
