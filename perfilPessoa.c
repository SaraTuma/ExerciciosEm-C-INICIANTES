/*
Objectivo: Mostrar o perfil de uma pessoa.
O perfil de uma pessoa pode ser determinado a apartir da sua data
de nascimento, conforme exemplificado a seguir. Dada uma data de
nascimento, informe o perfil correspondente.

Exemplo: 13/06/1970 -> 13061970
1. 1306 + 1970 = 3276
2. 32 + 76 = 108
3. 108 % 5 = 3
-> resto=3, o perfil depende do valor desta variavel:
	o - Tímido
	1 - Sonhador
	2 - Paquerador
	3 - Atraente
	4 - Irresistúvel
*/

#include<stdio.h>

main(){
	int data,meio1,meio2,soma,resto;
	
	printf("\nEntre com a sua data de nascimento: ");
		scanf("%u",&data);
	//data=23072000;
	meio1=data/10000;
	meio2=data%10000;
	soma=meio1+meio2;
	printf("\nDados: %d - %d ",meio1,meio2);
	printf("\nSoma: %d ",soma);
	meio1=soma/100;
	meio2=soma%100;
	soma=meio1+meio2;
	printf("\nDados: %d - %d ",meio1,meio2);
	printf("\nSoma: %d ",soma);
	resto=soma%5;
	printf("\nResto: %d ",resto);
	
	switch(resto){
		case 0: 
			printf("\nTimido"); break;
		case 1: 
			printf("\nSonhador"); break;
		case 2: 
			printf("\nPaquerador"); break;
		case 3: 
			printf("\nAtraente"); break;
		case 4: 
			printf("\nIrresistível"); break;
		default: printf("Opção errada!");
	}
}
