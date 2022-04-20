#include <stdio.h>

int main()
{
	int x, y, resultado, opcao, resto;
	printf("\nOperacoes matematicas de numeros inteiros!\n");
	do
	{
		printf("\nEscolha uma opcao:\n");
		printf("1 - Adicao\n");
		printf("2 - Subtracao\n");
		printf("3 - Divisao\n");
		printf("4 - Multiplicacao\n");
		printf("5 - Tabuada\n");
		printf("\nDigite o numero da operacao que deseja realizar: ");
		scanf("%d",&opcao);
		if(opcao == 1)
		{
			printf("\nVoce selecionou a opcao adicao");
			printf("\nDigite o valor 1: ");
			scanf("%d", &x);
			printf("Digite o valor 2: ");
			scanf("%d", &y);
			resultado = x + y;
			printf("\n%d + %d = %d\n", x, y, resultado);
			printf("\nDigite 6 para repetir e 7 para sair: ");
			scanf("%d",&opcao);
		}
		else if(opcao == 2)
		{
			printf("\nVoce selecionou a opcao subtracao");
			printf("\nDigite o valor 1: ");
			scanf("%d", &x);
			printf("Digite o valor 2: ");
			scanf("%d", &y);
			resultado = x - y;
			printf("\n%d - %d = %d\n", x, y, resultado);
			printf("\nDigite 6 para repetir e 7 para sair: ");
			scanf("%d",&opcao);
		}
		else if(opcao == 3)
		{
			printf("\nVoce selecionou a opcao divisao");
			printf("\nDigite o valor 1: ");
			scanf("%d", &x);
			printf("Digite o valor 2: ");
			scanf("%d", &y);
			resultado = (x / y);
			resto = (x % y);
			printf("\n%d / %d = %d\n", x, y, resultado);
			printf("\nResto = %d\n", resto);
			printf("\nDigite 6 para repetir e 7 para sair: ");
			scanf("%d",&opcao);
		}
		else if(opcao == 4)
		{
			printf("\nVoce selecionou a opcao multiplicacao");
			printf("\nDigite o valor 1: ");
			scanf("%d", &x);
			printf("Digite o valor 2: ");
			scanf("%d", &y);
			resultado = (x * y);
			printf("\n%d * %d = %d\n", x, y, resultado);
			printf("\nDigite 6 para repetir e 7 para sair: ");
			scanf("%d",&opcao);
		}
		else if(opcao == 5)
		{
			int cont, num, variavel=1, tabuada, exibir=1;
			printf("\nVoce selecionou a opcao tabuada");
			printf("\nValor: ");
			scanf("%d",&num);
			for(cont=1;cont<=10;cont++)
			{
				tabuada = num * variavel++;
				printf("%d x %d = %d\n", num, exibir++, tabuada);
			}
			printf("\nDigite 6 para repetir e 7 para sair: ");
			scanf("%d",&opcao);
		}
		else
		{
		}
	}while(opcao == 6);
	return 0;
}
