/*

	Insira valores de salários até que a condição da flag
	seja atingida!

	Flag = 0;

	Após os salários serem inseridos, realize a média dos
	salários até 2000 reais e diga qual é o maior salário
	na faixa de 4000 até 5000 reais.

*/

#include <stdio.h>
#define flag 0 //<-- definindo a flag como 0

int main()
{
	//Declarando as variáveis para o exercício
	int contadorPessoas = 1, //contador para estética do programa
	    contaAbaixo = 0, //conta pessoas com salário até 2000
	    contaExec = 1; //contador para estética

	float salario, 
	      contaSalario = 0, //conta salário até 2000 para calcular a média
	      mediaSalario, //variável pra guardar a média do salário
	      maiorSalario = 0; //variável que vai capturar o maior salário
    
    printf("Vamos calcular Salários! \n"
			        "Digite 0 para sair... \n");


    //pede e escaneia o salário
		printf("\nDigite o salário da pessoa %d: R$",contadorPessoas);
		scanf("%f",&salario);

	//estrutura de repetição para looping quase infinito
	while(salario != flag)
	{
		//Se o salário for maior que 0 executa
		if(salario > 0)
		{
			if(salario < 2001) //se salário for menor que 2000
			{
				contaSalario += salario;
				contaAbaixo++;
			}

			if(salario >= 4000 && salario <= 5000) //se salário estiver entre 4000 e 5000
			{
				if(salario > maiorSalario)
					maiorSalario = salario;
			}

			contadorPessoas++; //contador pra estética
			contaExec++; //contador pra estética
		}
		// se salário for menor que 0 imprime salario não pode ser menor que 0
		else if(salario < 0)
		{
			printf("\nSalario não pode ser menor que 0\n");
		}

		//se salário for igual a 0 não faz nada

        //pede e escaneia o salário
		printf("\nDigite o salário da pessoa %d: R$",contadorPessoas);
		scanf("%f",&salario);
	}

	//processa dados e imprime resultado na tela
    if(contaAbaixo == 0)
    {
        printf("\nNao houve salario no intervalo\n");
    }
    else{
        mediaSalario = contaSalario / (float) contaAbaixo;
	    printf("\nA media dos salarios ate 2000 reais eh: R$%.2f\n",mediaSalario);
    }
	
	if(maiorSalario == 0)
	{
		printf("Nao houve salario na faixa de 4000 a 5000 reais\n");
	}
	else
	{
		printf("O maior salario na faixa de 4000 a 5000 reais foi: %.2f\n",maiorSalario);
	}

	return 0;
}	
