#include<stdio.h>
#include<stdlib.h>
//O Programa recebe 3 lados de um triangulo e verifica que tipo de triangulo eles formam.
int main(){
    int ladoA, ladoB, ladoC;
    printf("Digite o maior lado: ");
    scanf("%d",&ladoA);
    printf("Digite o 2º lado: ");
    scanf("%d",&ladoB);
    printf("Digite o 3º lado: ");
    scanf("%d",&ladoC);
    if(ladoA >= ladoB + ladoC) printf("\nNenhum triagulo é formado!\n");
    else if((ladoA*ladoA)==(ladoB*ladoB) + (ladoC*ladoC)) printf("\nEste forma um triangulo retangulo!\n");
    else if((ladoA*ladoA)> (ladoB*ladoB) + (ladoC*ladoC)) printf("\nEste forma um triangulo obtusangulo!\n");
    else if((ladoA*ladoA)< (ladoB*ladoB) + (ladoC*ladoC)) printf("\nEste forma um triangulo acutangulo!\n");
    else printf("ERRO: Dados invalidos!")
    
}