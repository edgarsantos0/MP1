#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int	main()
{
	float	byte;
	float	kilo;
	float	mega;
	float	giga;
	float	tera;
	
	printf("Inserir numero de bytes: \n");
	scanf("%f", &byte);
	
	/*kilo = 1024 * byte;
	mega = 1024 * kilo;
	giga = 1024 * mega;
	tera = 1024 * giga;*/
	
	if (byte < 1024);
	{
		printf("%f bytes", byte);
		return (0);
	}
	
	if (byte >= pow(1024, 4))
	{
		printf("%.2f Terabytes.\n", byte / pow(1024, 4));
		return (0);
	}
	
	if (byte >= pow(1024, 3))
	{
		printf("%.2f Gigabytes.\n", byte / pow(1024, 3));
		return (0);
	}
	
	if (byte >= pow(1024, 2))
	{
		printf("%.2f Megabytes.\n", byte / pow(1024, 2));
		return (0);
	}
	
	if (byte >= 1024)
	{
		printf("%.2f Kilobytes.\n", byte / 1024);
		return (0);
	}
	return (0);
}
