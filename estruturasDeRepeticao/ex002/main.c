/*

	Leia um número 'N' e faça um programa que realize a conta de 'E'

	E = 1 + 1/1! + 1/2! + 1/3! + ... + 1/N!

*/

#include <stdio.h>

int main ()
{
	//Declaração das variáveis
	int N,
	    fat = 1; //fatorial começa com 1 pois se multiplicarmos \
	    		qualquer numero por 0, zeramos esse numero.

	float E = 1; //Iniciamos E com 1 pra não ter que adicionar +1 \
		       ao fim da conta.

	//Inicia instruções ao usuário e captura 'N'
	printf("Digite um numero: ");
	scanf("%d", &N);
	
	//Processamento de dados \
	- O for de fora será responsável por realizar 'X' operações até 'N'
	for(int i = N; i > 0; i--)
	{
		fat = 1; //Fat recebe 1 para limpar o lixo das próximas\
			   operações.

		//- O for de dentro é responsável por cálcular o fatorial de 'i'.
		for(int j = i; j >= 1; j--)
		{
			fat *= j;
		}

		//Após calcular o fatorial de 'i', adicionamos o resultado \
		  a variável E e realizamos a validação para o próximo for;
		E += 1 / (float) fat;
	}

	//Printa o resultado das operações e finaliza o programa.
	printf("E = %.2f\n",E);

	return 0;
}
