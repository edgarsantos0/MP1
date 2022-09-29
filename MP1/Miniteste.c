#include <stdio.h>

int	main()
{
	float	precometro;
	float	precototal;
	float	area;
	
	printf("Introduza o preco por metro quadrado:\n");
	scanf("%f", &precometro);
	printf("Introduza a area do terreno em metros quadrados:\n");
	scanf("%f", &area);

	if(area > 200 || area < 100)
	{
		return (0);
	}
	else
	{
		precototal = precometro * area;
		printf("O preco total e %.2f euros.\n", precototal);
	}
	return (0);
}
