#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float num1, num2;
	char op;
	
	printf("Digite o numero 1 :");
	scanf("%f", &num1);
	
	printf("Digite o numero 2 :");
	scanf("%f", &num2);
	
	printf("Digite a operacao '+', '-', '*', '/' :");
	scanf("%s", &op);
	
	switch(op){
		case '+':
			printf("A soma do valor e: %.2f", num1 + num2);
			break;
		case '-':
			printf("A subtracao do valor e: %.2f", num1 - num2);
			break;	
		case '*':
			printf("A multiplicacao do valor e: %.2f", num1 * num2);
			break;	
		case '/':
			if(num2 == 0){
				printf("Nao existe divisao por zero");
				break;
			}
			printf("A divisao do valor e: %.2f", num1 / num2);
			break;
		default:
		printf("Operacao invalido");
		break;	
	}
	return 0;
}
