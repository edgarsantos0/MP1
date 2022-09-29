#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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
	volume = pi * pow(raio, 2) * altura;
	
	printf("O volume do cilindro e %.4f cm^3.\n", volume);
	
	return (0);
}
