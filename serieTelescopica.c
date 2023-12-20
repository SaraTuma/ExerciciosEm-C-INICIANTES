#include<stdio.h>
#include<stdlib.h>
//O Programa recebe um número inteiro e calcula o valor da serie telescopica.
// serie = (1 - 1/2) + (1/2 - 1/3) + (1/3 - 1/4)+ ...
int main(){
    int serieTelescopica=0,denominador = 1, quantTermos;
    printf("Digite a quantidade de termos a ser calculada: ");
    scanf("%d",&quantTermos);
    if(quantTermos<=0) printf("\nERRO: Quantidade inválida!\n");
    while(quantTermos>0){
        serieTelescopica += (1/denominador - 1/(denominador + 1));
        printf("\n%d - %d\n",denominador, (denominador+1));
        denominador++; 
        quantTermos--;
    }  
}