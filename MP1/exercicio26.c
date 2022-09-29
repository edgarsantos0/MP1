#include <stdio.h>

int	main()
{
	char	a;

	do
	{
		printf("Introduza a:\n");
		scanf(" %c", &a);	
	}
	while(a != 'a');
	return (0);
}
