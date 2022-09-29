#include <stdio.h>
#include <time.h>

int	main()
{
	srand(time(NULL));
	
	int	n;
	int	c;
	int	n1;
	
	c = 0;
	n = (rand(50) % 500) + 1;
	
		
	while(n1 != n)
	{
		printf("Adivinha o numero: ", n);
		scanf("%d", &n1);
		c++;
		if(n1 > n)
		{
			printf("Mais baixo.\n");
		}
		if(n1 < n)
		{
			printf("Mais alto.\n");
		}
	}
	
	if(n1 == n);
	{		
		printf("Foram feitas %d tentativas ate acertar", c);
	}
	return (0);
}
