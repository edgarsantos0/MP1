#include <stdio.h>

int	main()
{
	int	n;
	int	res;

	n = 1;
	res = 0;
	do
	{
		res += n;
		n += 2;
	}
	while(n <= 40);
	printf("%d", res);
	return (0);
}

