#include <stdio.h>

int main() {
    unsigned int primeiroFactor = 1, segundoFactor;

    printf("PROGRAMA TABUADA\n");
    printf("Digite o número que deseja ver a tabuada, entre 1 a 9: ");
    scanf("%d", &primeiroFactor);

    while (primeiroFactor <= 0 || primeiroFactor > 9) {
        printf("\nDigite o número que deseja ver a tabuada, entre 1 a 9:");
        scanf("%d", &primeiroFactor);
    }

    printf("Tabuada do %d\n", primeiroFactor);
    printf("-------------------------------------\n");
    for (segundoFactor = 1; segundoFactor < 10; segundoFactor++) {
        printf("%d  x  %d  = %d\n", primeiroFactor, segundoFactor, primeiroFactor * segundoFactor);
    }
    printf("-------------------------------------\n");
}
