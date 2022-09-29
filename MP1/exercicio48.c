#include <stdio.h>
#include <stdlib.h>

int	mdc(int a, int b)
{
	int	c;
	
	c == 1;
	while((a % b && b % a) != 0)
	{
		c++;
	}
	return (c);
}

int	main()
{
	int	a;
	int	b;
	
	scanf("%d", a);
	scanf("%d", b);
	
	printf("%d", mdc(a, b));
	return (0);
}
