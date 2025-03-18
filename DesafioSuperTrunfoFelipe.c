#include <stdio.h>

// Estrutura para armazenar dados das cartas

int main(){
    char estado; // Estado: uma letra de A a H
    char codigo[3]; // Código da carta
    char cidade[50]; // Nome da cidade
    int populacao; // Número de habitates
    float area; // Área em km²
    float PIB; // Produto interno Bruto
    int rt; // Pontos Turísticos

    printf("Informe os dados da carta \n");

    printf("Estado: (Uma letra de A a H) \n");
    scanf("%c", &estado);

    printf("Código da carta: (Exemplo:A02)\n");
    scanf("%s", codigo);

    printf("Nome da cidade: \n");
    scanf("%s", cidade);

    printf("População: \n");
    scanf("%d", &populacao);

    printf("Área em km²: \n");
    scanf("%f", &area)

    printf("O PIB (Em reais): \n");
    scanf("%f", &PIB);
    
    printf("Número de pontos turísticos: \n");
    scanf("%d", &rt);

}
