#include <stdio.h>

int main() {
    int valor1, valor2;
    char operador;

    printf("Digite o 1º valor: ");
    scanf("%d", &valor1);
    printf("\nOperador (+. -, *, /): ");
    scanf(" %c", &operador);
    printf("\nDigie o 2º valor: ");
    scanf("%d", &valor2);
    printf("\n--------------------------------\n");
    
    switch (operador) {
        case '+':
            printf("%d %c %d = %d", valor1, operador, valor2, valor1 + valor2);
            break;
        case '-':
            printf("%d %c %d = %d", valor1, operador, valor2, valor1 - valor2);
            break;
        case '*':
            printf("%d %c %d = %d", valor1, operador, valor2, valor1 * valor2);
            break;
        case '/':
            printf("%d %c %d = %.2f", valor1, operador, valor2, (float) valor1 / (float) valor2);
            break;
        default:
            printf("Operação Inválida");
            break;
    }
    printf("\n");
    return 0;
}