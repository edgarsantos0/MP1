#include <stdio.h>
#include <stdlib.h>

int	main()
{
	int	nota;
	
	printf("Inserir nota: \n");
	scanf("%d", &nota);
	
	if(nota >= 0 && nota < 5)
	{
		printf("Pessimo\n");
		return (0);
	}
	
	if(nota >= 5 && nota < 8)
	{
		printf("Mau\n");
		return (0);
	}
	
	if(nota >= 8 && nota < 10)
	{
		printf("Insuficiente\n");
		return (0);
	}
	
	if(nota >= 10 && nota < 12)
	{
		printf("Suficiente\n");
		return (0);
	}
	
	if(nota >= 12 && nota < 16)
	{
		printf("Bom\n");
		return (0);
	}
	
	if(nota >= 16 && nota < 18)
	{
		printf("Muito bom\n");
		return (0);
	}
	
	if(nota >= 18 && nota <= 20)
	{
		printf("Excelente\n");
		return (0);
	}
	
	else
	{
		printf("Nota invalida.\n");
		return (0);
	}
	return (0);
}
