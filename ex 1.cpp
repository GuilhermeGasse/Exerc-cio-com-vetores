#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void Teste1();
void Teste2();
void Teste3();

int main()
{
	int opcao;
	
	printf("Escolha os exerc�cios entre 1 e 10: ");
	scanf("%d", &opcao);
	
	switch(opcao)
	{
		case 1:
			Teste1();
			
			break;
			
		case 2:
			Teste2();
			
			break;
			
		case 3:
			Teste3();
			
			break;
	}
	
	return 0;
}

// preencher um vetor e achar os pares
void Teste1()
{
	int v1[10];
	int i;
	
	for(i = 0; i < 10; i++)
	{
		printf("Informe o valor da posi��o %i do vetor: ", i);
		scanf("%i", &v1[i]); 
	}
	
	for(i = 0; i < 10; i+=2)
	{
		printf("%d - "	, v1[i]); 
	}
}

// Exibir m�ltiplos de 3
void Teste2()
{
	int v2[15];
	int i;
	
	printf("N�meros m�ltiplos de 3: \n");
	
	for(i = 0; i < 15; i++)
	{
		v2[i] = (i + 1) * 3;
	}
	
	for(i = 0; i < 15; i++)
	{
		printf(" Posi��o: %d N�mero: %d \n", i, v2[i]);
	}
}

void Teste3()
{
	int v3[5];
	int i;
	
	for(i = 0; i < 5; i++)
	{
		printf("Informe o valor da posi��o %i do vetor: ", i);
		scanf("%i", &v3[i]); 
	}
	
	int posicao;
	
	printf("Informe um �ndice a ser consultado: ");
	scanf("%i", &posicao);
	
	while ((posicao >= 0) && (posicao < 5))
	{
		printf("O valor daquela posi��o �: %d", v3[posicao]);
		
		printf("Informe um �ndice a ser consultado: ");
		scanf("%i", &posicao);
	}	
	
}
