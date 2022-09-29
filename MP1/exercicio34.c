#include <stdio.h>

int	main(int index)
{
	printf("Introduzir n termos:\n");
	scanf("%d", &index);
	
	if (index == 0)
	{
		printf("0");
	}
	if (index == 1)
	{
		printf("1");
	}
	if (index < 0)
	{
		printf("Invalido");
	}
	else
	{
		index = (index - 1) + (index - 2);	
		printf("%d", index);
}
	return (0);
}

