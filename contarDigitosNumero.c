#include<stdio.h>
#include<stdlib.h>
//O Programa recebe um número e diz quantos digitos possui.
int main(){
    int numero, soma=0;
    printf("Digite o numero: \n");
    scanf("%d", &numero);
    if(numero<0) numero = numero*-1;
    do{
        numero = numero/10;
        soma++;
    }while(numero!=0);
    printf("\n O número inserido tem %d digito(s).\n", soma);

}