#include<stdio.h>

int main(){
	int num1,num2;
	printf("Digite o primeiro numero: Type the first number: ");
	scanf("%d",&num1);
	printf("Digite o segundo numero: Type the second number: ");
	scanf("%d",&num2);
	if(num1==num2)
		printf("ERRO: Sao iguais! ; ERROR: Are equals!");
	else if(num1>num2)
		printf("%d ; %d\n",num2,num1);
	else
		printf("%d ; %d\n",num1,num2);
	return 0;
}
