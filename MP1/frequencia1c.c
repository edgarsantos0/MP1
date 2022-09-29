#include <stdio.h>
#include <time.h>

int	main()
{
	int	n, n1, counter, valor, c1, res, media;
	srand(time(NULL));
	
	counter = 1;
	c1 = 0;
	
	while(n1 != 0)
	{
		printf("Qual a tabuada?\n");
		scanf("%d", &n1);
		
		if(n1 == 0)
		{
			return (0);
		}
		
		n = (rand(1) % 10) + 1;
		res = n1 * n;
		printf("Quanto e %d x %d?\n", n1, n);
		scanf("%d", &valor);
		counter++;
		
		if(valor != res)
		{
			printf("Errado! O resultado e %d\n", res);
		}
		
		else
		{
			printf("Certo!\n");
			c1++;
		}
	}
	media = c1 / counter;
	printf("Total de jogadas: %d\nRespostas certas: %d\nMedia de respostas certas: %d", counter, c1, media);
	return (0);
}
