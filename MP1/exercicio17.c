#include <stdio.h>
#include <stdlib.h>

int	main()
{
	float	a;
	float	b;
	float	c;
	
	printf("Introduzir numeros: \n");
	scanf("%f", &a);
	scanf("%f", &b);
	scanf("%f", &c);
	
	if(a >= b && a >= c)
	{
		printf("%f", a);
	}
	
	else if(b >= a && b >= c)
	{
		printf("%f", b);
	}
	
	else if(c >= a && c >= b)
	{
		printf("%f", c);
	}
	return (0);
}
