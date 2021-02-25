/*
Objectivo: Informar se uma pessoa é obesa ou não.
Descrição: Uma pessoa é obesa se seu indice de massa corpórea
           é superior a 30, tal índice é a razão entre seu peso
           e o quadrado da sua altura.
*/


#include<stdio.h>
#include<conio.h>  
#include<math.h>

#define LIMITE 30

main(){
	float peso,altura,imc;
	printf("\nQual o seu peso e altura: ");
	scanf("%f %f",&peso,&altura);
	
	imc=peso/pow(altura,2);
	
	printf("\n Seu i.m.c e %.1f",imc);
	if(imc <=LIMITE) printf("\n Voce nao esta obeso!");
	else printf("\nVoce esta obeso!");
	
	getch();
}
