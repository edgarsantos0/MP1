#include <stdio.h>
#include <stdlib.h>

int	main()
{
	float	base;
	float	altura;
	float	area;
	
	printf("Introduzir a base do triangulo: \n");
	scanf("%f", &base);
	printf("Introduzir a altura do triangulo: \n");
	scanf("%f", &altura);
	
	area = (base * altura) / 2;
	printf("A area do triangulo e %f cm^2", area);
	
	return (0);
}
