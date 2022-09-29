#include <stdio.h>
#include <stdlib.h>

int	main(int i)
{
	
	printf("Introduzir numero:\n");
	scanf("%d", &i);
	
	do
	{
		i *= (i - 1);
		i--;
	}
	while(i > 0);
	
	printf("%d", i);
	return (0);
}
