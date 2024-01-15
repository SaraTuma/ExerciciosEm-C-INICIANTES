#include<stdio.h>
#include<stdlib.h>

//O Programa recebe um número e entra em um loop infinito caso não seja, se for simplesmente termina o loop e imprime uma mensagem.
//Fiz isso em um projeto prático, e acredito que poderá ser útil em outros casos!
int main (){
    int numero;
    while (1) {
        printf("Digite um numero inteiro: ");

        // Tenta ler um número inteiro
        if (scanf("%d", &numero) == 1) {
            // A leitura foi bem-sucedida, o número é inteiro
            break;
        } else {
            // A leitura falhou, o usuário digitou algo que não é um número inteiro
            printf("Entrada invalida. Tente novamente.\n");

            // Limpar o buffer do teclado para evitar loops infinitos
            while (getchar() != '\n');
        }
    }

    // O número inteiro válido está armazenado em 'numero'
    printf("Voce digitou: %d\n", numero);
    return 0;
}