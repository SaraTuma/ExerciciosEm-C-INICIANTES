/*
Objectivo: Informar se uma pessoa � obesa ou n�o.
Descri��o: Uma pessoa � obesa se seu indice de massa corp�rea
           � superior a 30, tal �ndice � a raz�o entre seu peso
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
