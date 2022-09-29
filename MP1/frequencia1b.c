#include <stdio.h>
#include <time.h>

int	main()
{
	int	n, counter, valor, c1, c2, res;
	srand(time(NULL));
	
	counter = 0; c1 = 0; c2 = 0;
	
	while(counter < 5)
	{
		n = (rand(1) % 10) + 1;
		res = 4 * n;
		printf("Quanto e 4 x %d?\n", n);
		scanf("%d", &valor);
		counter++;
		
		if(valor != res)
		{
			printf("Errado! O resultado e %d\n", res);
			c1++;
		}
		
		else
		{
			printf("Certo!\n");
			c2++;
		}
	}
	printf("Total de jogadas: %d\nRespostas certas: %d\nRespostas erradas: %d\n", counter, c2, c1);
	return (0);
}
