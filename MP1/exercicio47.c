#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool	numero(int i)
{
	printf("Insira um numero entre 0 e 20: \n");
	scanf("%d", &i);
	
	if((i < 0) || (i > 20))
	{
		printf("Tente outra vez \n");
		return (0);
	}
	
	else
	{
		return (1);
	}
}

int	main()
{
	int	counter;
	int	i;

	counter = 0;
	i = 0;

	while(counter < 100)
	{
		
		while(numero(i) == 0)
		{
			numero(i);
		}
		counter++;
	}
	return (0);
}
