#include<stdio.h>
#include<stdlib.h>

int main(){
    int num1,num2;
    printf("Digite os numeros: \n");
    scanf("%d %d", &num1,&num2);
    if((num1>9 && num1<100) && (num2>9 && num2<100)){
        if((num1%10==num2/10) && (num1/10==num2%10))
            printf("\nEh Capicua de dois algarismos!\n");
        else
            printf("\nNão é Capicua de dois algarismos!\n");
    }
    else
        printf("\nERRO: Numeros invalidos, está fora do intervalo desejado!\n");
}