#include <stdio.h>

int	main()
{
	int	*a;
	int	*b;
	int	c;
	
	*a = 1;
	*b = 2;
	
	c = *a;
	*a = *b;
	*b = c;
	
	printf("%d, %d", *a, *b);
	 
	return(0);
}
