#include<stdio.h>
#include<stdlib.h>
//O Programa recebe n numeros e verifica o maior, menor e valor medio entre eles.
int main(){
    int quantidade;
    float maiorAltura = 0.0, menorAltura=0.0, altura, mediaAltura=0.0, soma=0.0;
    printf("Digite a quantidade de alturas que serão inseridas: ");
    scanf("%d",&quantidade);
    if(quantidade<=0) printf("\nERRO: Quantidade invalida!\n");
    else{
        printf("\nDigite uma altura: ");
        scanf("%f", &altura);
        soma = maiorAltura = menorAltura = mediaAltura = altura;
        for( int i = quantidade; i>1; i--){
            printf("\nDigite uma altura: ");
            scanf("%f", &altura);
            if(altura>maiorAltura) maiorAltura = altura;
            if(altura<menorAltura) menorAltura = altura;
            printf("\nMaior - %f \tMenor - %f\n", maiorAltura, menorAltura);
            soma+=altura;  
        }
        mediaAltura = soma / quantidade;
        printf("\nMaior = %.2f \t Menor = %.2f \t Media = %.2f\n", maiorAltura,menorAltura, mediaAltura);
    }
     
}