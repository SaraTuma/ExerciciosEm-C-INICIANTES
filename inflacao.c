#include <stdio.h>

int main() {
    float preco, novoPreco, valorDaInflacao;
    int taxaDeInflacao = 0;

    printf("------------------------\n");
    printf("Aplicador de inflação\n");
    printf("------------------------\n\n");

    printf("Preço: ");
    scanf("%f", &preco);

    if (preco < 100) {
        taxaDeInflacao = 10;
    } else {
        taxaDeInflacao = 20;
    }

    valorDaInflacao = preco * (taxaDeInflacao / 100.0);
    novoPreco = preco + valorDaInflacao;

    printf("---------------------\n");
    printf("Preço não inflacionado: %.2f\n", preco);
    printf("Taxa de inflação: %d %%\n", taxaDeInflacao);
    printf("Valor da inflação: %.2f\n", valorDaInflacao);
    printf("Novo preço: %.2f\n", novoPreco);
    return 0;
}