#include <stdio.h>
#include <stdlib.h>

int	main()
{
	float	altura;
	float	raio;
	float	pi;
	float	volume;
	
	printf("Introduzir altura do cilindro: \n");
	scanf("%f", &altura);
	printf("Introduzir o raio do cilindro: \n");
	scanf("%f", &raio);
	
	pi = 3.141592654;
	volume = pi * raio * raio * altura;
	
	printf("O volume do cilindro e %f cm^3.\n", volume);
	
	return (0);
}
