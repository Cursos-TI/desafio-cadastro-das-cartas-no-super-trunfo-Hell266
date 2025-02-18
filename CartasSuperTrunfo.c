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


//declaração de variáveis cidade 1//
char estado;
char codigo[4]; 
char cidade[40];
int populacao;
int turisticos;
float area;
float PIB;

printf("PRIMEIRA CARTA\n");

//entrada e saida de dados char//
printf("Estado: \n");
scanf(" %c", &estado);
printf("Codigo da carta:\n");
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
printf("PIB:\n");
scanf(" %f", &PIB);

//declaração de variáveis cidade 2//

char Estado;
char Codigo[4]; 
char Cidade[40];
int Populacao;
int Turisticos;
float Area;
float PIBsegundacidade;

printf("SEGUNDA CARTA\n");

//entrada e saida de dados char//
printf("Estado: \n");
scanf(" %c", &Estado);
printf("Codigo da carta:\n");
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
printf("PIB:\n");
scanf(" %f", &PIBsegundacidade);

//declaração de variáveis cidade 3//
char EStado;
char COdigo[4]; 
char CIdade[40];
int POpulacao;
int TUristicos;
float ARea;
float PIBterceiracidade;

printf("TERCEIRA CARTA\n");

//entrada e saida de dados char//
printf("Estado: \n");
scanf(" %c", &EStado);
printf("Codigo da carta:\n");
scanf(" %s", &COdigo);
printf("Nome da cidade:\n");
scanf(" %s", &CIdade);

//entrada e saída de dados int//
printf("Populaçao da cidade:\n");
scanf(" %d", &POpulacao);
printf("Pontos turísticos:\n");
scanf(" %d", &TUristicos);

//entrada e saída de dados float//
printf("Area da cidade:\n");
scanf(" %f", &ARea);
printf("PIB:\n");
scanf(" %f", &PIBterceiracidade);

//declaração de variáveis cidade 4//

char ESTado;
char CODigo[4]; 
char CIDade[40];
int POPulacao;
int TURisticos;
float AREa;
float PIBquartacidade;

printf("QUARTA CARTA\n");

//entrada e saida de dados char//
printf("Estado: \n");
scanf(" %c", &ESTado);
printf("Codigo da carta:\n");
scanf(" %s", &CODigo);
printf("Nome da cidade:\n");
scanf(" %s", &CIDade);

//entrada e saída de dados int//
printf("Populaçao da cidade:\n");
scanf(" %d", &POPulacao);
printf("Pontos turísticos:\n");
scanf(" %d", &TURisticos);

//entrada e saída de dados float//
printf("Area da cidade:\n");
scanf(" %f", &AREa);
printf("PIB:\n");
scanf(" %f", &PIBquartacidade);


//impressao das carta//
printf("CARTA DA PRIMEIRA CIDADE\n");
printf("Estado: %c\n", estado);
printf("Código da carta: %s\n", codigo);
printf("Nome da cidade: %s\n", cidade);
printf("População: %d\n", populacao);
printf("Área :%.2f\n", area);
printf("PIB: %.1f\n", PIB);
printf("Número de pontos turísticos: %d\n", turisticos);

printf("CARTA DA SEGUNDA CIDADE\n");
printf("Estado: %c\n", Estado);
printf("Código da carta: %s\n", Codigo);
printf("Nome da cidade: %s\n", Cidade);
printf("População: %d\n", Populacao);
printf("Área :%.2f\n", Area);
printf("PIB: %.1f\n", PIBsegundacidade);
printf("Número de pontos turísticos: %d\n", Turisticos);

printf("CARTA DA TERCEIRA CIDADE\n");
printf("Estado: %c\n", EStado);
printf("Código da carta: %s\n", COdigo);
printf("Nome da cidade: %s\n", CIdade);
printf("População: %d\n", POpulacao);
printf("Área :%.2f\n", ARea);
printf("PIB: %.1f\n", PIBterceiracidade);
printf("Número de pontos turísticos: %d\n", TUristicos);

printf("CARTA DA QUARTA CIDADE\n");
printf("Estado: %c\n", ESTado);
printf("Código da carta: %s\n", CODigo);
printf("Nome da cidade: %s\n", CIDade);
printf("População: %d\n", POPulacao);
printf("Área :%.2f\n", AREa);
printf("PIB: %.1f\n", PIBquartacidade);
printf("Número de pontos turísticos: %d\n", TURisticos);

return 0;
}
