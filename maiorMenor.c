#include <stdio.h>

int main() {
    int primeiroValor = 0, segundoValor = 0;

    printf("Digite o primeiro valor: ");
    scanf("%d", &primeiroValor);
    printf("\nDigite o segundo valor: ");
    scanf("%d", &segundoValor);

    if (primeiroValor == segundoValor) {
        printf("Os dois valores digitados são iguais: %d\n", primeiroValor);
    } else {
        if (primeiroValor > segundoValor) {
            printf("O primeiro valor digitado é maior que o segundo:\n%d > %d\n", primeiroValor, segundoValor);
        } else {
            printf("O segundo valor digitado é maior que o primeiro:\n%d < %d\n", primeiroValor, segundoValor);
        }
    }
}