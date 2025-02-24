#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.


//declaração de variáveis cidade/carta 1 (Estão mal simplificadas pois o github não lê corretamente)
char estado[4];
char codigo[4]; 
char cidade[40];
int populacao;
int turisticos;
float area;
float PIB;
float PIBpercapita;
float densidadepop;

printf("BEM VINDO AO SISTEMA DE CADASTRO DAS CARTAS DO JOGO SUPERTRUNFO.\n");

printf("Por favor insira as informações corretamente para um melhor funcionamento do programa.\n");

printf("PRIMEIRA CARTA\n");

//entrada e saida de dados char//
printf("Digite a letra (A a H) do seu Estado: \n");
scanf(" %s", &estado);
printf("Digite o código com a letra do seu estado e a numeração (01 a 04) da carta:\n");
scanf(" %s", &codigo);
printf("Nome da cidade:\n");
scanf(" %s", &cidade);

//entrada e saída de dados int//
printf("Populaçao da cidade:\n");
scanf(" %d", &populacao);
printf("Pontos turísticos:\n");
scanf(" %d", &turisticos);

//entrada e saída de dados float//
printf("Area da cidade:\n");
scanf(" %f", &area);
printf("digite (xxx.xx bilhoes) para prosseguir\n"
       "PIB: \n");
scanf(" %f %*s", &PIB);


//declaração de variáveis cidade/carta 2 (Estão mal simplificadas pois o github não lê corretamente)
char Estado[4];
char Codigo[4]; 
char Cidade[40];
int Populacao;
int Turisticos;
float Area;
float PIBcarta2;
float PIBpercapita2;
float densidadepop2;

printf("SEGUNDA CARTA\n");

//entrada e saída de dados char//
printf("Digite a letra (A a H) do seu Estado: \n");
scanf(" %s", &Estado);
printf("Digite o código com a letra do seu estado e a numeração (01 a 04) da carta:\n");
scanf(" %s", &Codigo);
printf("Nome da cidade:\n");
scanf(" %s", &Cidade);

//entrada e saída de dados int//
printf("Populaçao da cidade:\n");
scanf(" %d", &Populacao);
printf("Pontos turísticos:\n");
scanf(" %d", &Turisticos);

//entrada e saída de dados float//
printf("Area da cidade:\n");
scanf(" %f", &Area);
printf("digite (xxx.xx bilhoes) para prosseguir\n"
       "PIB: \n");
scanf(" %f %*s", &PIBcarta2);


//impressao das carta//
printf("CARTA DA PRIMEIRA CIDADE\n");
printf("Estado: %s\n", estado);
printf("Código da carta: %s\n", codigo);
printf("Nome da cidade: %s\n", cidade);
printf("População: %d\n", populacao);
printf("Área :%.3f km²\n", area);
printf("PIB: %.2f bilhões de reais\n", PIB);
printf("Número de pontos turísticos: %d\n", turisticos);


//Operações  matemáticas//
PIB = (PIB * 1000000000);
PIBpercapita = (float) PIB / populacao;//conversão explicita/forçada
densidadepop = (float) populacao / area; // conversão explicita/forçada 

//impressão das novas adições atualizadas//

printf("Densidade populacional: %.2f hab/km²\n", densidadepop);
printf("PIB per capita: %.2f reais\n", PIBpercapita);

//impressao das carta da segunda cidade//
printf("CARTA DA SEGUNDA CIDADE\n");
printf("Estado: %s\n", Estado);
printf("Código da carta: %s\n", Codigo);
printf("Nome da cidade: %s\n", Cidade);
printf("População: %d\n", Populacao);
printf("Área :%.3f km²\n", Area);
printf("PIB: %.2f bilhões de reais\n", PIBcarta2);
printf("Número de pontos turísticos: %d\n", Turisticos);


//Operações  matemáticas//
PIBcarta2 = (PIBcarta2 * 1000000000);
PIBpercapita2 = (float) PIBcarta2 / Populacao;//conversão explicita/forçada
densidadepop2 = (float) Populacao / Area; // conversão explicita/forçada 

//impressão das novas adições atualizadas//

printf("Densidade populacional: %.2f hab/km²\n", densidadepop2);
printf("PIB per capita: %.2f reais\n", PIBpercapita2);

return 0;
}
