#include <stdio.h>

int	main()
{
	int	n;
	int	res;

	n = 0;
	res = 0;
	while(n <= 180)
	{
		res = res + n;
		n++;
	}
	printf("%d", res);
	return (0);
}
