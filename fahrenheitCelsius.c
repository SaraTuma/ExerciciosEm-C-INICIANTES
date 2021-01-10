#include <stdio.h>

int main() {
    double celsiusDouble, fahrenheitDouble;
    int celsiusInt;

    printf("Conversor de Fahrenheit para Celsius\n");
    printf("\n\nDigite a têmperatura em Fahrenheit: ");
    scanf("%lf", &fahrenheitDouble);

    celsiusDouble = (fahrenheitDouble - 32.0) * (5.0 / 9.0);
    celsiusInt = (int)celsiusDouble;

    printf("\nFahrenheit: %.2f ºF\n", fahrenheitDouble);
    printf("1º Celsius: %.2f ºC\n", celsiusDouble);
    printf("2º Celsius(Parte inteira): %d ºC\n", celsiusInt);
}