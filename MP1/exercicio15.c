#include <stdio.h>

int	main()
{
	int	nbr;
	int	y;

	printf("Introduzir numero:\n");
	scanf("%d", &nbr);
	y = nbr % 2;

	if (y == 0)
	{
		printf("Par\n");
	}
	else
	{
		printf("Impar\n");
	}
	return (0);
}
