/*

	Faça um programa utilizando estruturas de repetição onde ao
	inserir um número 'N' mostre a tabuada desse número

*/

#include <stdio.h>

int main()
{
	int N;

	printf("Digite o número para exibir a tabuada: ");
	scanf("%d",&N);

	for(int i = 0; i <= 10; i++)
	{
		if(i == 0)
			printf("\nVamos fazer a tabuada do %d!\n",N);
		
		printf("%d x %d = %d\n",N,i,(i * N));
	}

	return 0;
}
