#include <stdio.h>
#include <stdlib.h>

int	main()
{
	float	n1;
	float	n2;
	
	printf("Introduzir numeros: \n");
	scanf("%f", &n1);
	scanf("%f", &n2);
	
	if(n1 > n2)
	{
		printf("%f", n2);
		return (0);
	}
	
	else
	{
		printf("%f", n1);
		return (0);
	}
	return (0);
}
