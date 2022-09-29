#include <stdio.h>
#include <stdlib.h>

int	main()
{
	int hora;
	int	min;
	
	printf("Introduzir hora: \n");
	scanf("%dh%d", &hora, &min);
	
	if ((hora < 0) || (hora > 24) || (min < 0) || (min > 60))
	{
		printf("Hora invalida.\n");
		return (0);
	}
	
	if ((hora == 00) && min <= 9)
	{
		hora += 12;
		printf("%dh0%d AM", hora, min);
		return (0);
	}
	
	if (hora >= 13 && min <= 9)
	{
		hora -= 12;
		printf("%dh0%d PM", hora, min);
		return (0);
	}
	
	if (hora <= 11 && min <= 9)
	{
		printf("%dh0%d AM", hora, min);
		return (0);
	}
	
	if ((hora == 00) && min > 9)
	{
		hora += 12;
		printf("%dh%d AM", hora, min);
		return (0);
	}
	
	if (hora >= 13 && min > 9)
	{
		hora -= 12;
		printf("%dh%d PM", hora, min);
		return (0);
	}
	
	if (hora <= 11 && min > 9)
	{
		printf("%dh%d AM", hora, min);
		return (0);
	}
	
	if (hora == 12 && min <= 9)
	{
		printf("%dh0%d PM", hora, min);
		return (0);
	}
	
	if (hora == 12 && min > 9)
	{
		printf("%dh%d PM", hora, min);
		return (0);
	}
	return (0);
}
