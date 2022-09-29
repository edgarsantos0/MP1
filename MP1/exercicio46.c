#include <stdio.h>
#include <stdlib.h>

float	maior(float i, float j)
{
	if(i > j)
	{
		return (i);
	}
	
	else if(j > i)
	{
		return (j);
	}
}

int	main()
{
	float	a;
	float	b;
	float	c;
	float	d;
	
	printf("Introduza 4 numeros: \n");
	scanf("%f", &a);
	scanf("%f", &b);
	scanf("%f", &c);
	scanf("%f", &d);
	
	printf("\n----------------------\n");
	printf("O maior e: %f", maior(maior(maior(a, b), c), d));
	return (0);
}
