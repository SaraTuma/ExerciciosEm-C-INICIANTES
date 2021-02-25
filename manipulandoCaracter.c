/*
Dado um caracter, informe o seu código ASCII
em octal, decimal e hexadecimal.
*/

#include<stdio.h>

main(){
	char caracter;
	printf("\n Entre com o caracter: ");
	scanf("%c",&caracter);
	printf("\n Octal %o",caracter);
	printf("\n Decimal %d",caracter);
	printf("\n Hexadecimal %x",caracter);
}
