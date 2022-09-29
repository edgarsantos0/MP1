#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int	main()
{
	int	nbr;
	int	y;
	
	srand((unsigned) time ('\0'));
	nbr = (rand() % 7) + 1;
	printf("Numero: %d\n");
	
	y = nbr % 3;
	
	if(y == 0)
	{
		printf("O numero e divisivel por 3.\n");
		return (0);
	}
	
	else
	{
		printf("O numero nao e divisivel por 3.\n");
		return (0);
	}
	return (0);
}
