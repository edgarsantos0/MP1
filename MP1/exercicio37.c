#include <stdio.h>

int	main()
{
	int		k;
	float	soma;
	float	media;
	float	nota;
	float	counter;
	
	soma = 0;
	counter = 0;
	
	for(k = 1; k <= 6; k++)
	{
		printf("Qual e a nota do %d aluno? (99 para faltou)?\n", k);
		scanf("%d", &nota);
		
		if (nota >= 0 && nota <= 20);
		{
			soma += nota;
			counter++;
		}
		if(nota == 99)
		{

		}
		else
		{
			k -= 1;
		}
	}
	media = soma / counter;
	printf("A media das notas de todos os %.0f alunos que foram ao teste e %.2f", counter, media);
	return (0);
}
