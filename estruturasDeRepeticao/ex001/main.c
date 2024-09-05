/*

	Faça um programa utilizando estruturas de repetição onde ao
	inserir um número 'N' mostre a tabuada desse número

*/

#include <stdio.h>

int main()
{
	//Declaração de variáveis
	int N;

	//Capturando número para fazer a tabuada
	printf("Digite o número para exibir a tabuada: ");
	scanf("%d",&N);
	
	//for de 0 a 10 indicando por quais números serão multiplicados
	for(int i = 0; i <= 10; i++)
	{
		//Se o índice for 0, printe de qual número faremos a tabuada
		if(i == 0)
			printf("\nVamos fazer a tabuada do %d!\n",N);
		
		//Processa dados e printa resultado com base no índice do for
		printf("%d x %d = %d\n",N,i,(i * N));
	}

	return 0;
}
