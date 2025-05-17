#include <stdio.h>
#include <string.h>
int main() {


char estado;
char estado2;
char codigoCarta[4];
char codigoCarta2[4];
char nomeCidade[40];
char nomeCidade2[40];
unsigned long int populacao;
unsigned long int populacao2;
float areaDaCidade;
float areaDaCidade2;
float pibDaCidade;
float pibDaCidade2;
int quantidadePontosTuristicosDaCidade;
int quantidadePontosTuristicosDaCidade2;
float densidadePopulacional;
float densidadePopulacional2;
float pibPerCapita;
float pibPerCapita2;



printf("Digite a letra do seu estado dentre A a H: \n");
scanf("%c", &estado);
printf("Digite o codigo da carta que e a letra do estado, mais um numero de 01 a 04: \n");
scanf("%s", &codigoCarta);
printf("Digite o nome da sua cidade: \n");
scanf("%s", &nomeCidade);
printf("Digite o numero de habitantes que sua cidade tem: \n");
scanf("%d", &populacao);
printf("Digite a area da sua cidade em km2: \n");
scanf("%f", &areaDaCidade);
printf("Digite o PIB (Produto Interno Bruto) da sua cidade: \n");
scanf("%f", &pibDaCidade);
printf("Digite a quantidade de pontos turisticos na sua cidade: \n");
scanf("%d", &quantidadePontosTuristicosDaCidade);


printf("Digite a letra do seu estado dentre A a H: ");
scanf(" %c", &estado2);
printf("Digite o codigo da carta que e a letra do estado, mais um numero de 01 a 04: \n");
scanf(" %s", &codigoCarta2);
printf("Digite o nome da sua cidade: \n");
scanf("%s", &nomeCidade2);
printf("Digite o numero de habitantes que sua cidade tem: \n");
scanf("%d", &populacao2);
printf("Digite a area da sua cidade em km2: \n");
scanf("%f", &areaDaCidade2);
printf("Digite o PIB (Produto Interno Bruto) da sua cidade: \n");
scanf("%f", &pibDaCidade2);
printf("Digite a quantidade de pontos turisticos na sua cidade: \n");
scanf("%d", &quantidadePontosTuristicosDaCidade2);

densidadePopulacional = populacao/areaDaCidade;
densidadePopulacional2 = populacao2/areaDaCidade2;





printf("\nCarta 01: \n");
printf("Estado: %c\n", estado);
printf("Codigo: %s \n", codigoCarta);
printf("Nome da Cidade: %s\n", nomeCidade);
printf("Populacao: %d\n", populacao);
printf("Area: %.2f km2\n", areaDaCidade);
printf("PIB: %.2f bilhoes de reais\n", pibDaCidade);
pibDaCidade = pibDaCidade * 1000000000;
pibPerCapita = pibDaCidade/populacao;
printf("Numero de Pontos Turisticos: %d\n", quantidadePontosTuristicosDaCidade);
printf("Densidade Populacional: %.2f hab/km2\n", densidadePopulacional);
printf("Pib per capita: %.2f reais\n", pibPerCapita);

printf("\nCarta 02: \n");
printf("Estado: %c\n", estado2);
printf("Codigo: %s \n", codigoCarta2);
printf("Nome da Cidade: %s\n", nomeCidade2);
printf("Populacao: %d\n", populacao2);
printf("Area: %.2f km2\n", areaDaCidade2);
printf("PIB: %.2f bilhoes de reais\n", pibDaCidade2);
pibDaCidade2 = pibDaCidade2 * 1000000000;
pibPerCapita2 = pibDaCidade2/populacao2;
printf("Numero de Pontos Turisticos: %d\n", quantidadePontosTuristicosDaCidade2);
printf("Densidade Populacional: %.2f hab/km2\n", densidadePopulacional2);
printf("Pib per capita: %.2f reais\n", pibPerCapita2);


// printf("\nComparacao das cartas (Atributo: Populacao)\n");
// printf("Carta 1 - %s - %d\n", nomeCidade, populacao);
// printf("Carta 2 - %s - %d\n", nomeCidade2, populacao2);
// if(populacao > populacao2 ) {
//   printf("Resultado: Carta 1 - %s venceu!\n" , nomeCidade);
// } else {
//   printf("Resultado: Carta 2 - %s venceu!\n", nomeCidade2);
// }

printf("Comparacao das cartas (Atributo: Densidade Demografica)\n");
printf("Carta 1 - %s - %.2f\n", nomeCidade, densidadePopulacional);
printf("Carta 2 - %s - %.2f\n", nomeCidade2, densidadePopulacional2);
if(densidadePopulacional < densidadePopulacional2 ) {
  printf("Resultado: Carta 1 - %s venceu!\n" , nomeCidade);
} else {
  printf("Resultado: Carta 2 - %s venceu!\n", nomeCidade2);
}



return 0;





}
