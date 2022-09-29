#include <stdio.h>
#include <time.h>

int	main(int n)
{
	srand(time(NULL));
	
	n = rand() % 50;
	printf("%d", n);
	return (0);
}
