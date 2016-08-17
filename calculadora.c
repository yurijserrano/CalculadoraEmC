#include <stdio.h>
#include <stdlib.h>



int main()
{
	int opc,num1,num2;

	printf("Escolha uma opcao:\n");
	printf("Digite:\n 1 para soma \n 2 para subtracao \n 3 para divisao \n 4 para multiplicacao\n ");
	scanf("%d",&opc);
	printf("Digite o valor do 1 numero:");
	scanf("%d",&num1);
	printf("\n");
	printf("Digite o valor do 2 numero:");
	scanf("%d",&num2);


	switch(opc)
	{
		case 1:
			printf("Soma = %d\n",(num1+num2));
			break;
		case 2:
			printf("Subtracao = %d\n",(num1-num2));
			break;
		case 3:
			printf("Divisao = %d\n",(num1/num2));
			break;
		case 4:
			printf("Multiplicacao = %d\n",(num1*num2));
			break;
		default:
			break;
	}
}